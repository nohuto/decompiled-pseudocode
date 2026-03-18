/*
 * XREFs of DrawSize @ 0x1C0200A70
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     SizeBoxHwnd @ 0x1C022AE24 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  int v9; // edi
  int v10; // ebx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v13; // edi
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // edi
  __int64 v18; // rbx
  unsigned int v19; // edi
  bool v20; // zf
  unsigned int v21; // eax
  unsigned int v22; // eax
  _DWORD v24[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 96);
    v10 = *(_DWORD *)(v6 + 88);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
    v6 = *(_QWORD *)(a1 + 40);
    a3 = v9 - v10 - a3 - DpiDependentMetric;
  }
  v13 = *(_DWORD *)(v6 + 100);
  v14 = *(_DWORD *)(v6 + 92);
  v15 = GetDpiForSystem();
  v16 = GetDpiDependentMetric(1LL, v15);
  v17 = v13 - v14;
  v18 = *(_QWORD *)(a1 + 40);
  v19 = v17 - a4 - v16;
  if ( (*(_WORD *)(v18 + 42) & 0x3FFF) == 0x29A )
    v20 = (*(_BYTE *)(v18 + 28) & 0x10) == 0;
  else
    v20 = SizeBoxHwnd(a1) == 0;
  if ( !v20 )
    return BitBltSysBmp(a2, a3, v19, (*(_BYTE *)(v18 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v24[0] = a3;
  v24[1] = v19;
  v21 = GetDpiForSystem();
  v24[2] = GetDpiDependentMetric(0LL, v21);
  v22 = GetDpiForSystem();
  v24[3] = GetDpiDependentMetric(1LL, v22);
  v25 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v24, 1);
}
