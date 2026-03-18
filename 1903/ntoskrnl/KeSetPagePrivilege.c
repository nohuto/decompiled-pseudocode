/*
 * XREFs of KeSetPagePrivilege @ 0x1402A4778
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiDbgWriteCheck @ 0x1402D15E8 (MiDbgWriteCheck.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140A386C4 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslMakeProtectedPageWritable @ 0x14028FF70 (VslMakeProtectedPageWritable.c)
 */

int __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int64 v6; // rdx
  int result; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  _OWORD v10[7]; // [rsp+20h] [rbp-39h] BYREF

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    memset(v10, 0, 0x68uLL);
    v6 = 245LL;
LABEL_11:
    v9 = *a2;
    *((_QWORD *)&v10[0] + 1) = a1;
    v10[1] = v9;
    return VslpEnterIumSecureMode(2, v6, 0LL, (__int64)v10);
  }
  if ( (a3 & 0x400) != 0 )
  {
    memset(v10, 0, 0x68uLL);
    v6 = 246LL;
    goto LABEL_11;
  }
  if ( (a3 & 6) == 0 )
  {
    memset(v10, 0, 0x68uLL);
    v6 = 243LL;
    goto LABEL_11;
  }
  result = 0;
  if ( (a3 & 2) == 0
    || (memset(v10, 0, 0x68uLL),
        v8 = *a2,
        *((_QWORD *)&v10[0] + 1) = a1,
        v10[1] = v8,
        result = VslpEnterIumSecureMode(2, 248LL, 0LL, (__int64)v10),
        result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable(a1, a2);
  }
  return result;
}
