/*
 * XREFs of _InitThreadCoreMessagingIocp @ 0x1C011DCC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall InitThreadCoreMessagingIocp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]

  v4 = 0LL;
  if ( gptiCurrent != *(_QWORD *)(a1 + 16) )
  {
    v10 = 5LL;
LABEL_9:
    UserSetLastError(v10, a2, a3, a4);
    return v4;
  }
  if ( *(_QWORD *)(gptiCurrent + 1440LL) )
  {
    v10 = 1247LL;
    goto LABEL_9;
  }
  v12 = 48;
  v13 = 0LL;
  v15 = 512;
  v14 = 0LL;
  v16 = 0LL;
  if ( (int)ZwAllocateReserveObject(gptiCurrent + 1432LL, &v12, 1LL) < 0 )
  {
    UserSetLastError(14LL, v6, v7, v8);
    *(_QWORD *)(gptiCurrent + 1432LL) = 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(gptiCurrent + 1408LL);
    if ( v4 )
    {
      v11[0] = gptiCurrent + 1440LL;
      v11[1] = a1;
      HMAssignmentLock(v11);
    }
  }
  return v4;
}
