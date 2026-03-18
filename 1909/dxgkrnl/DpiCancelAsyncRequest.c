/*
 * XREFs of DpiCancelAsyncRequest @ 0x1C004B408
 * Callers:
 *     DpiRequestDevicePowerState @ 0x1C004AAD8 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCancelAsyncRequest(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 **v6; // rcx

  v2 = (_QWORD *)WdLogNewEntry5_WdPower();
  v2[3] = a1;
  v3 = *(int *)(a1 + 4024);
  v2[5] = 0LL;
  v2[4] = v3;
  WdLogEvent5_WdPower(v2);
  v4 = (__int64 *)(a1 + 4000);
  result = *v4;
  if ( *v4 )
  {
    if ( *(__int64 **)(result + 8) != v4 || (v6 = (__int64 **)v4[1], *v6 != v4) )
      __fastfail(3u);
    *v6 = (__int64 *)result;
    *(_QWORD *)(result + 8) = v6;
    *v4 = 0LL;
  }
  return result;
}
