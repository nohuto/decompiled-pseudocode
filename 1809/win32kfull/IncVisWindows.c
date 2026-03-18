/*
 * XREFs of IncVisWindows @ 0x1C007A3C8
 * Callers:
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     SetMinimize @ 0x1C00B8C08 (SetMinimize.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     FVisCountable @ 0x1C007A4C0 (FVisCountable.c)
 */

__int64 __fastcall IncVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 424);
    ++*(_DWORD *)(v3 + 896);
    ++*(_DWORD *)(v4 + 1024);
    if ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
      ++*(_DWORD *)(*(_QWORD *)(v3 + 424) + 1028LL);
    v5 = *(_DWORD **)(v3 + 424);
    if ( v5[256] > v5[257] && (v5[205] & 0x4000) == 0 )
    {
      GreDxgkSetProcessStatus(v5, 2LL);
      PsUpdateComponentPower(**(_QWORD **)(v3 + 424), 5LL);
      *(_DWORD *)(*(_QWORD *)(v3 + 424) + 820LL) |= 0x4000u;
    }
    *(_DWORD *)(v3 + 1208) |= 0x40000000u;
    return EtwTraceProcessWindowInfo(v3);
  }
  return result;
}
