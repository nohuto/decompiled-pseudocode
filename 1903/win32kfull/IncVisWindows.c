/*
 * XREFs of IncVisWindows @ 0x1C002CC3C
 * Callers:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     SetMinimize @ 0x1C0084C28 (SetMinimize.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 * Callees:
 *     FVisCountable @ 0x1C002CD50 (FVisCountable.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  _DWORD *v6; // rcx
  _WORD v7[28]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, 0x28uLL);
  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 416);
    ++*(_DWORD *)(v3 + 896);
    ++*(_DWORD *)(v4 + 1016);
    if ( (unsigned int)GetWindowCompositionInfo(a1, v7) && ((v7[0] & 0x400) != 0 || (v7[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v3 + 416) + 1020LL);
    v6 = *(_DWORD **)(v3 + 416);
    if ( v6[254] > v6[255] && (v6[203] & 0x4000) == 0 )
    {
      LOBYTE(v5) = 1;
      GreDxgkSetProcessStatus(v6, 2LL, v5);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 416), 5LL);
      *(_DWORD *)(*(_QWORD *)(v3 + 416) + 812LL) |= 0x4000u;
    }
    *(_QWORD *)(v3 + 1224) |= 0x80000000uLL;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
