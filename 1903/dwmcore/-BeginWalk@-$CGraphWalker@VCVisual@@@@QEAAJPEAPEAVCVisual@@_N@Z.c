/*
 * XREFs of ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@_N@Z @ 0x180086BD0
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x180086DD0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 * Callees:
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180086C40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::BeginWalk(__int64 a1, void **a2)
{
  void *v2; // rsi
  void *v5; // rbp
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  __int64 result; // rax

  v2 = *a2;
  v5 = 0LL;
  v6 = CThreadContext::RegisterGraphWalkRoot(*a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x40u, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0;
    v5 = v2;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = v2;
  }
  result = v8;
  *a2 = v5;
  return result;
}
