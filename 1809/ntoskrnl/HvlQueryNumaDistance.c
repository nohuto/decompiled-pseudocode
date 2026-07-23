/*
 * XREFs of HvlQueryNumaDistance @ 0x140271700
 * Callers:
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlQueryNumaDistance(unsigned __int16 a1, unsigned __int16 a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rdi
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a2;
  v5 = a1;
  v6 = (_DWORD *)HvlpAcquireHypercallPage(v14, 1LL, 0LL, 8LL);
  v7 = (__int64 *)HvlpAcquireHypercallPage(v13, 2LL, 0LL, 8LL);
  v8 = KeNodeBlock[v3];
  *v6 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(KeNodeBlock[v5] + 148)] + 160);
  v6[1] = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(v8 + 148)] + 160);
  v9 = HvcallCodeVa();
  if ( v9 )
    v10 = -1LL;
  else
    v10 = *v7;
  *a3 = v10;
  v11 = v9 != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage(v13);
  HvlpReleaseHypercallPage(v14);
  return v11;
}
