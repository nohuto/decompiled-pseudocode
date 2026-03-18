/*
 * XREFs of DrawSize @ 0x1C02294A8
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C0240DA0 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, int a3, int a4)
{
  __int64 v6; // rcx
  int v9; // edi
  int v10; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v12; // r8
  int DpiDependentMetric; // eax
  int v14; // edi
  int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // eax
  int v19; // edi
  __int64 v20; // rbx
  int v21; // edi
  bool v22; // zf
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26; // r8
  _DWORD v28[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 96);
    v10 = *(_DWORD *)(v6 + 88);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem, v12);
    v6 = *(_QWORD *)(a1 + 40);
    a3 = v9 - v10 - a3 - DpiDependentMetric;
  }
  v14 = *(_DWORD *)(v6 + 100);
  v15 = *(_DWORD *)(v6 + 92);
  v16 = GetDpiForSystem();
  v18 = GetDpiDependentMetric(1LL, v16, v17);
  v19 = v14 - v15;
  v20 = *(_QWORD *)(a1 + 40);
  v21 = v19 - a4 - v18;
  if ( (*(_WORD *)(v20 + 42) & 0x2FFF) == 0x29A )
    v22 = (*(_BYTE *)(v20 + 28) & 0x10) == 0;
  else
    v22 = SizeBoxHwnd(a1) == 0;
  if ( !v22 )
    return BitBltSysBmp(a2, a3, v21, (*(_BYTE *)(v20 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v28[0] = a3;
  v28[1] = v21;
  v23 = GetDpiForSystem();
  v28[2] = GetDpiDependentMetric(0LL, v23, v24);
  v25 = GetDpiForSystem();
  v28[3] = GetDpiDependentMetric(1LL, v25, v26);
  v29 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v28, 1);
}
