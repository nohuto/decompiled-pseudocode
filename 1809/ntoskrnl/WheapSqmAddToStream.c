/*
 * XREFs of WheapSqmAddToStream @ 0x1408DE454
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1408DD00C (WheapAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1408DDD78 (WheapPfaMemoryCheck.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1408DE0D0 (WheapPfaRetireExpiredMemoryEntries.c)
 * Callees:
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall WheapSqmAddToStream(int a1, unsigned int a2, __int64 a3)
{
  NTSTATUS result; // eax
  unsigned int v6; // r10d
  const wchar_t **v7; // r9
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
  int v18; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+268h] [rbp+160h] BYREF
  unsigned int v21; // [rsp+270h] [rbp+168h] BYREF

  v21 = a2;
  v20 = a1;
  result = (unsigned int)memset(UserData, 0, sizeof(UserData));
  v18 = 11;
  if ( a3 && a2 < 9 )
  {
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[0].Ptr = (ULONGLONG)&v18;
    UserData[1].Ptr = (ULONGLONG)&unk_14037F2C8;
    UserData[2].Ptr = (ULONGLONG)&v20;
    UserData[3].Ptr = (ULONGLONG)&v21;
    v6 = 0;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[2].Size = 4LL;
    *(_QWORD *)&UserData[3].Size = 4LL;
    if ( a2 )
    {
      v7 = (const wchar_t **)(a3 + 8);
      do
      {
        v8 = 3 * v6;
        v9 = *((_DWORD *)v7 - 2);
        v10 = (const wchar_t **)&unk_14037F2C0;
        if ( v9 == 1 )
          v10 = v7;
        UserData[v8 + 4].Ptr = (ULONGLONG)(v7 - 1);
        *(_QWORD *)&UserData[v8 + 4].Size = 4LL;
        v11 = (unsigned int)(v8 + 5);
        UserData[v11].Ptr = (ULONGLONG)v10;
        *(_QWORD *)&UserData[v11].Size = 4LL;
        if ( v9 == 2 )
          v12 = *v7;
        else
          v12 = L"0";
        if ( v9 == 2 )
          v13 = *v7;
        else
          v13 = L"0";
        v14 = -1LL;
        do
          ++v14;
        while ( v12[v14] );
        v15 = 2 * v14 + 2;
        v7 += 2;
        v16 = v6 + 2;
        ++v6;
        v17 = 3LL * v16;
        UserData[v17].Ptr = (ULONGLONG)v13;
        UserData[v17].Size = v15;
        *(&UserData[0].Reserved + 1 * v17) = 0;
      }
      while ( v6 < a2 );
    }
    return EtwWrite(
             (REGHANDLE)WheapDispatchPtr.Queue.ListEntry.Blink,
             &WHEA_SQM_EVENT_ADDTOSTREAM,
             0LL,
             0x1Fu,
             UserData);
  }
  return result;
}
