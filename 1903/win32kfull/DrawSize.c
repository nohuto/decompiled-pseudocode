/*
 * XREFs of DrawSize @ 0x1C0241F54
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     SizeBoxHwnd @ 0x1C0259ABC (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  int v9; // edi
  int v10; // ebx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v13; // edi
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edi
  __int64 v22; // rbx
  unsigned int v23; // edi
  bool v24; // zf
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  _DWORD v32[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33; // [rsp+40h] [rbp-28h]

  v5 = a4;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = a3;
  if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 96);
    v10 = *(_DWORD *)(v6 + 88);
    DpiForSystem = GetDpiForSystem(v6, (__int64)a2, a3, a4);
    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = v9 - v10 - v7 - DpiDependentMetric;
  }
  v13 = *(_DWORD *)(v6 + 100);
  v14 = *(_DWORD *)(v6 + 92);
  v15 = GetDpiForSystem(v6, (__int64)a2, a3, a4);
  v16 = GetDpiDependentMetric(1LL, v15);
  v21 = v13 - v14;
  v22 = *(_QWORD *)(a1 + 40);
  v23 = v21 - v5 - v16;
  if ( (*(_WORD *)(v22 + 42) & 0x3FFF) == 0x29A )
    v24 = (*(_BYTE *)(v22 + 28) & 0x10) == 0;
  else
    v24 = SizeBoxHwnd(a1) == 0;
  if ( !v24 )
    return BitBltSysBmp(a2, v7, v23, (*(_BYTE *)(v22 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v32[0] = v7;
  v32[1] = v23;
  v25 = GetDpiForSystem(v18, v17, v19, v20);
  v32[2] = GetDpiDependentMetric(0LL, v25);
  v30 = GetDpiForSystem(v27, v26, v28, v29);
  v32[3] = GetDpiDependentMetric(1LL, v30);
  v33 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v32, 1);
}
