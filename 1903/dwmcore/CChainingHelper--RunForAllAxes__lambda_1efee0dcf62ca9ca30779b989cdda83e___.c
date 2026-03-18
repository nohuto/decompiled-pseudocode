/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___ @ 0x180220840
 * Callers:
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18021F7BC (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801D91A0 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA4D8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801DDA50 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801DDB10 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180220C04 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_1efee0dcf62ca9ca30779b989cdda83e___(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // rbx
  float CurrentValue; // xmm0_4
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r9
  char v10; // r11
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v4 = 0LL;
  do
  {
    v5 = **(_QWORD **)a2;
    CurrentValue = CInteractionTracker::GetCurrentValue(v5, v2);
    LODWORD(v5) = CInteractionTracker::BoundaryFromValue(v5, CurrentValue, v2);
    CInteractionTracker::ShouldChainAllForAxis(*(_QWORD *)(a2 + 16), v2, **(_QWORD **)(a2 + 16));
    LOBYTE(v9) = CInteractionTracker::ShouldChainForAxis(v7, v2, v8, 1u);
    LOBYTE(v12) = v10;
    CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
      *(_QWORD *)(a2 + 8),
      (unsigned int)v2,
      (unsigned int)v5,
      v9,
      v12);
    result = *(_QWORD *)(a2 + 8);
    ++v2;
    *(_BYTE *)(v4 + result) &= 0xFAu;
    *(_DWORD *)(v4 + result + 8) = 0;
    v4 += 12LL;
    *(_BYTE *)(result + 36) |= 2u;
  }
  while ( v2 < 3 );
  return result;
}
