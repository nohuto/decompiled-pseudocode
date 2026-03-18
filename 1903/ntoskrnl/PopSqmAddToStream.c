/*
 * XREFs of PopSqmAddToStream @ 0x140305C8C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     EtwWriteEx @ 0x140036300 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall PopSqmAddToStream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  const wchar_t **v6; // r10
  unsigned int v7; // r11d
  int v8; // r9d
  int v9; // r8d
  const wchar_t **v10; // rdx
  __int64 v11; // rcx
  const wchar_t *v12; // r8
  __int64 v13; // rax
  ULONG v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  void *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  int *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  int *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  _BYTE v27[432]; // [rsp+A8h] [rbp-60h] BYREF

  v18 = 11131;
  v19 = 4;
  result = (unsigned int)memset(v27, 0, sizeof(v27));
  v17 = 11;
  if ( PopDiagHandleRegistered && a4 )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v17;
    v6 = (const wchar_t **)(a4 + 8);
    v22 = 16LL;
    v21 = &unk_140398BF0;
    v7 = 0;
    v24 = 4LL;
    v23 = &v18;
    v25 = &v19;
    v26 = 4LL;
    do
    {
      v8 = 3 * v7;
      v9 = *((_DWORD *)v6 - 2);
      v10 = (const wchar_t **)&unk_140398BEC;
      if ( v9 == 1 )
        v10 = v6;
      *(&UserData.Ptr + 2 * (unsigned int)(v8 + 4)) = (ULONGLONG)(v6 - 1);
      *((_QWORD *)&UserData.Size + 2 * (unsigned int)(v8 + 4)) = 4LL;
      v11 = 2LL * (unsigned int)(v8 + 5);
      *(&UserData.Ptr + v11) = (ULONGLONG)v10;
      *((_QWORD *)&UserData.Size + v11) = 4LL;
      if ( v9 == 2 )
        v12 = *v6;
      else
        v12 = L"0";
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = 2 * v13 + 2;
      v6 += 2;
      v15 = v7 + 2;
      ++v7;
      v16 = 6LL * v15;
      *(&UserData.Ptr + v16) = (ULONGLONG)v12;
      *(&UserData.Size + 2 * v16) = v14;
      *(&UserData.Reserved + 2 * v16) = 0;
    }
    while ( v7 < 4 );
    return EtwWriteEx(PopDiagHandle, &PopSqm_Add_StreamRow, 0LL, 0, 0LL, 0LL, 0x1Fu, &UserData);
  }
  return result;
}
