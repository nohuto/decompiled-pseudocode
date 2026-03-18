/*
 * XREFs of SetTiledRect @ 0x1C00EC050
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     InternalGetRealClientRect @ 0x1C00EC190 (InternalGetRealClientRect.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  int v21; // ebp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  int v26; // eax
  int v27; // r11d
  int v28; // ebp
  int v29; // r9d
  int v30; // r10d
  int v31; // r8d
  int v32; // ecx
  int v33; // r8d
  int v34; // ecx
  __int64 result; // rax
  __int64 v36; // [rsp+30h] [rbp-28h] BYREF
  __int64 v37; // [rsp+38h] [rbp-20h]

  v36 = 0LL;
  v37 = 0LL;
  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v36, 2, v6, 0);
  ++*(_WORD *)(a3 + 226);
  DpiForSystem = GetDpiForSystem(v8, v7, v9);
  DpiDependentMetric = GetDpiDependentMetric(14LL, DpiForSystem);
  v15 = GetDpiForSystem(v13, v12, v14);
  v16 = GetDpiDependentMetric(12LL, v15) + DpiDependentMetric;
  v20 = GetDpiForSystem(v18, v17, v19);
  v21 = GetDpiDependentMetric(15LL, v20);
  v25 = GetDpiForSystem(v23, v22, v24);
  v26 = GetDpiDependentMetric(13LL, v25);
  v27 = v37 - v36;
  v28 = v26 + v21;
  v29 = HIDWORD(v37);
  v30 = HIDWORD(v36);
  v31 = v16 * *(__int16 *)(a3 + 226);
  v32 = v28 * *(__int16 *)(a3 + 226);
  if ( v31 > ((int)v37 - (int)v36) / 4 || v32 > (HIDWORD(v37) - HIDWORD(v36)) / 4 )
  {
    *(_WORD *)(a3 + 226) = 0;
    v31 = v16;
    v32 = v28;
  }
  v33 = v36 + v31;
  *a2 = v33;
  v34 = v30 + v32;
  a2[2] = v33 + (v27 + 2 * (v27 + 1)) / 4;
  a2[1] = v34;
  result = (unsigned int)(v34 + (v29 - v30 + 2 * (v29 - v30 + 1)) / 4);
  a2[3] = result;
  return result;
}
