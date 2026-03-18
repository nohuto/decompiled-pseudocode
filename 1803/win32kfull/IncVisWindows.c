/*
 * XREFs of IncVisWindows @ 0x1C0075E9C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     SetMinimize @ 0x1C0066E0C (SetMinimize.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C0075F80 (FVisCountable.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  _DWORD *v6; // rcx
  _DWORD v7[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 416);
    ++*(_DWORD *)(v3 + 888);
    ++*(_DWORD *)(v4 + 1016);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v7) && ((v7[0] & 0x400) != 0 || (v7[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v3 + 416) + 1020LL);
    v6 = *(_DWORD **)(v3 + 416);
    if ( v6[254] > v6[255] && (v6[203] & 0x4000) == 0 )
    {
      LOBYTE(v5) = 1;
      GreDxgkSetProcessStatus(v6, 2LL, v5);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 416), 5LL);
      *(_DWORD *)(*(_QWORD *)(v3 + 416) + 812LL) |= 0x4000u;
    }
    *(_DWORD *)(v3 + 1200) |= 0x40000000u;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
