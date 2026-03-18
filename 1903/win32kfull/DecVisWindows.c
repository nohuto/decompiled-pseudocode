/*
 * XREFs of DecVisWindows @ 0x1C002CB50
 * Callers:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     SetMinimize @ 0x1C0084C28 (SetMinimize.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 * Callees:
 *     FVisCountable @ 0x1C002CD50 (FVisCountable.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DecVisWindows(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _WORD v6[28]; // [rsp+20h] [rbp-38h] BYREF

  memset(v6, 0, 0x28uLL);
  result = FVisCountable(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(v3 + 416);
    --*(_DWORD *)(v3 + 896);
    --*(_DWORD *)(v4 + 1016);
    if ( (unsigned int)GetWindowCompositionInfo(a1, v6) && ((v6[0] & 0x400) != 0 || (v6[0] & 0x800) != 0) )
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
