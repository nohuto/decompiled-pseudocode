/*
 * XREFs of PopSqmAddToStream @ 0x1402E8B3C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall PopSqmAddToStream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  const wchar_t **v6; // r9
  unsigned int v7; // r10d
  int v8; // r8d
  int v9; // r11d
  const wchar_t **v10; // rdx
  __int64 v11; // rcx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // r8
  __int64 v14; // rax
  ULONG v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+68h] [rbp-A0h] BYREF

  v19 = 11131;
  v20 = 4;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  v18 = 11;
  if ( PopDiagHandleRegistered && a4 )
  {
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[0].Ptr = (ULONGLONG)&v18;
    v6 = (const wchar_t **)(a4 + 8);
    *(_QWORD *)&UserData[1].Size = 16LL;
    UserData[1].Ptr = (ULONGLONG)&unk_140378D70;
    v7 = 0;
    *(_QWORD *)&UserData[2].Size = 4LL;
    UserData[2].Ptr = (ULONGLONG)&v19;
    UserData[3].Ptr = (ULONGLONG)&v20;
    *(_QWORD *)&UserData[3].Size = 4LL;
    do
    {
      v8 = 3 * v7;
      v9 = *((_DWORD *)v6 - 2);
      v10 = (const wchar_t **)&unk_140378D6C;
      if ( v9 == 1 )
        v10 = v6;
      UserData[v8 + 4].Ptr = (ULONGLONG)(v6 - 1);
      *(_QWORD *)&UserData[v8 + 4].Size = 4LL;
      v11 = (unsigned int)(v8 + 5);
      UserData[v11].Ptr = (ULONGLONG)v10;
      *(_QWORD *)&UserData[v11].Size = 4LL;
      if ( v9 == 2 )
        v12 = *v6;
      else
        v12 = L"0";
      if ( v9 == 2 )
        v13 = *v6;
      else
        v13 = L"0";
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v15 = 2 * v14 + 2;
      v6 += 2;
      v16 = v7 + 2;
      ++v7;
      v17 = 3LL * v16;
      UserData[v17].Ptr = (ULONGLONG)v13;
      UserData[v17].Size = v15;
      *(&UserData[0].Reserved + 1 * v17) = 0;
    }
    while ( v7 < 4 );
    return EtwWriteEx(PopDiagHandle, &PopSqm_Add_StreamRow, 0LL, 0, 0LL, 0LL, 0x1Fu, UserData);
  }
  return result;
}
