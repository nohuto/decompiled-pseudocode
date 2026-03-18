/*
 * XREFs of _InitThreadCoreMessagingIocp @ 0x1C01020E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall InitThreadCoreMessagingIocp(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v12[3]; // [rsp+30h] [rbp-30h] BYREF

  v2 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    v10 = 5LL;
LABEL_9:
    UserSetLastError(v10, v3, v4, v5);
    return v2;
  }
  if ( *(_QWORD *)(gptiCurrent + 1464LL) )
  {
    v10 = 1247LL;
    goto LABEL_9;
  }
  *((_QWORD *)&v12[0] + 1) = 0LL;
  *(_QWORD *)&v12[1] = 0LL;
  LODWORD(v12[0]) = 48;
  DWORD2(v12[1]) = 512;
  v12[2] = 0LL;
  if ( (int)ZwAllocateReserveObject(gptiCurrent + 1456LL, v12, 1LL) < 0 )
  {
    UserSetLastError(14LL, v6, v7, v8);
    *(_QWORD *)(gptiCurrent + 1456LL) = 0LL;
  }
  else
  {
    v2 = *(_QWORD *)(gptiCurrent + 1432LL);
    if ( v2 )
    {
      v11[0] = gptiCurrent + 1464LL;
      v11[1] = a1;
      HMAssignmentLock(v11);
    }
  }
  return v2;
}
