/*
 * XREFs of IncVisWindows @ 0x1C0027544
 * Callers:
 *     SetMinimize @ 0x1C0014C84 (SetMinimize.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 * Callees:
 *     FVisCountable @ 0x1C0027660 (FVisCountable.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _WORD v6[28]; // [rsp+20h] [rbp-38h] BYREF

  memset(v6, 0, 0x28uLL);
  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 416);
    ++*(_DWORD *)(v3 + 896);
    ++*(_DWORD *)(v4 + 1016);
    if ( (unsigned int)GetWindowCompositionInfo(a1, v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v3 + 416) + 1020LL);
    v5 = *(_DWORD **)(v3 + 416);
    if ( v5[254] > v5[255] && (v5[203] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 416), 5LL);
      *(_DWORD *)(*(_QWORD *)(v3 + 416) + 812LL) |= 0x4000u;
    }
    *(_QWORD *)(v3 + 1224) |= 0x80000000uLL;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
