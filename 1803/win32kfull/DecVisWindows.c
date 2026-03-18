/*
 * XREFs of DecVisWindows @ 0x1C0075BD4
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     SetMinimize @ 0x1C0066E0C (SetMinimize.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C0075F80 (FVisCountable.c)
 */

__int64 __fastcall DecVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 416);
    --*(_DWORD *)(v3 + 888);
    --*(_DWORD *)(v4 + 1016);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      --*(_DWORD *)(*(_QWORD *)(v3 + 416) + 1020LL);
    v5 = *(_QWORD *)(v3 + 416);
    result = *(unsigned int *)(v5 + 1020);
    if ( *(_DWORD *)(v5 + 1016) <= (unsigned int)result && (*(_DWORD *)(v5 + 812) & 0x4000) != 0 )
    {
      PsUpdateComponentPower(*(_QWORD *)v5, 5LL);
      GreDxgkSetProcessStatus(*(_QWORD *)(v3 + 416), 2LL, 0LL);
      result = *(_QWORD *)(v3 + 416);
      *(_DWORD *)(result + 812) &= ~0x4000u;
    }
  }
  return result;
}
