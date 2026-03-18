/*
 * XREFs of _SetTaskmanWindow @ 0x1C0111310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall SetTaskmanWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  v3 = *(__int64 **)(gptiCurrent + 456LL);
  if ( a1 && v3[24] )
  {
    UserSetLastError(5LL, gptiCurrent);
    return 0LL;
  }
  else
  {
    v4 = v3 + 24;
    v5 = *v3;
    if ( a1 )
      v2 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v5 + 24) = v2;
    v7[0] = v4;
    v7[1] = a1;
    HMAssignmentLock(v7);
    return 1LL;
  }
}
