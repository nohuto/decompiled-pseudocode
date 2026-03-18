/*
 * XREFs of DrawSize @ 0x1C0241934
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     SizeBoxHwnd @ 0x1C025937C (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, __int64 a3, int a4)
{
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
  int v20; // edi
  __int64 v21; // rbx
  unsigned int v22; // edi
  bool v23; // zf
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // eax
  _DWORD v30[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v31; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 40);
  v7 = a3;
  if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 96);
    v10 = *(_DWORD *)(v6 + 88);
    DpiForSystem = GetDpiForSystem(v6, (__int64)a2, a3);
    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
    v6 = *(_QWORD *)(a1 + 40);
    v7 = v9 - v10 - v7 - DpiDependentMetric;
  }
  v13 = *(_DWORD *)(v6 + 100);
  v14 = *(_DWORD *)(v6 + 92);
  v15 = GetDpiForSystem(v6, (__int64)a2, a3);
  v16 = GetDpiDependentMetric(1LL, v15);
  v20 = v13 - v14;
  v21 = *(_QWORD *)(a1 + 40);
  v22 = v20 - a4 - v16;
  if ( (*(_WORD *)(v21 + 42) & 0x3FFF) == 0x29A )
    v23 = (*(_BYTE *)(v21 + 28) & 0x10) == 0;
  else
    v23 = SizeBoxHwnd(a1) == 0;
  if ( !v23 )
    return BitBltSysBmp((__int64)a2, v7, v22, (*(_BYTE *)(v21 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v30[0] = v7;
  v30[1] = v22;
  v24 = GetDpiForSystem(v18, v17, v19);
  v30[2] = GetDpiDependentMetric(0LL, v24);
  v28 = GetDpiForSystem(v26, v25, v27);
  v30[3] = GetDpiDependentMetric(1LL, v28);
  v31 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v30, 1);
}
