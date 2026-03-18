/*
 * XREFs of ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C027F45C
 * Callers:
 *     vSpDynamicModeChange @ 0x1C003DD50 (vSpDynamicModeChange.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     <none>
 */

void __fastcall vFixupMetaSpriteList(struct PDEVOBJ *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 i; // rcx
  __int64 v6; // rax

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  v3 = *(__int64 **)(*(_QWORD *)a1 + 152LL);
  v4 = *v3;
  for ( i = *(_QWORD *)(*v3 + 96); i != *(_QWORD *)(v4 + 1208); i = *(_QWORD *)(i + 24) )
  {
    *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) = 0LL;
    v6 = *(_QWORD *)(i + 8);
    if ( i == *(_QWORD *)(v4 + 96) )
      *(_QWORD *)(v1 + 160) = v6;
    else
      *(_QWORD *)(v2 + 8) = v6;
    v2 = *(_QWORD *)(i + 8);
  }
}
