/*
 * XREFs of _SetProgmanWindow @ 0x1C0234D90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall SetProgmanWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = *(__int64 **)(gptiCurrent + 464LL);
  if ( a1 && v6[25] )
  {
    UserSetLastError(5LL, gptiCurrent, a1, a4);
    return 0LL;
  }
  else
  {
    v8 = v6 + 25;
    v9 = *v6;
    if ( a1 )
      v5 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v9 + 40) = v5;
    v10[0] = v8;
    v10[1] = a1;
    HMAssignmentLock(v10);
    return 1LL;
  }
}
