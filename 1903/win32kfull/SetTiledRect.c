/*
 * XREFs of SetTiledRect @ 0x1C01111A0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     InternalGetRealClientRect @ 0x1C01112E0 (InternalGetRealClientRect.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  int v30; // eax
  int v31; // r11d
  int v32; // ebp
  int v33; // r9d
  int v34; // r10d
  int v35; // r8d
  int v36; // ecx
  int v37; // r8d
  int v38; // ecx
  __int64 result; // rax
  __int64 v40; // [rsp+30h] [rbp-28h] BYREF
  __int64 v41; // [rsp+38h] [rbp-20h]

  v40 = 0LL;
  v41 = 0LL;
  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v40, 2, v6, 0);
  ++*(_WORD *)(a3 + 226);
  DpiForSystem = GetDpiForSystem(v8, v7, v9, v10);
  DpiDependentMetric = GetDpiDependentMetric(14LL, DpiForSystem);
  v17 = GetDpiForSystem(v14, v13, v15, v16);
  v18 = GetDpiDependentMetric(12LL, v17) + DpiDependentMetric;
  v23 = GetDpiForSystem(v20, v19, v21, v22);
  v24 = GetDpiDependentMetric(15LL, v23);
  v29 = GetDpiForSystem(v26, v25, v27, v28);
  v30 = GetDpiDependentMetric(13LL, v29);
  v31 = v41 - v40;
  v32 = v30 + v24;
  v33 = HIDWORD(v41);
  v34 = HIDWORD(v40);
  v35 = v18 * *(__int16 *)(a3 + 226);
  v36 = v32 * *(__int16 *)(a3 + 226);
  if ( v35 > ((int)v41 - (int)v40) / 4 || v36 > (HIDWORD(v41) - HIDWORD(v40)) / 4 )
  {
    *(_WORD *)(a3 + 226) = 0;
    v35 = v18;
    v36 = v32;
  }
  v37 = v40 + v35;
  *a2 = v37;
  v38 = v34 + v36;
  a2[2] = v37 + (v31 + 2 * (v31 + 1)) / 4;
  a2[1] = v38;
  result = (unsigned int)(v38 + (v33 - v34 + 2 * (v33 - v34 + 1)) / 4);
  a2[3] = result;
  return result;
}
