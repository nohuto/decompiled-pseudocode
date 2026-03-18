/*
 * XREFs of ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180003C54
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800039E0 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801F3688 (-ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 * Callees:
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180007190 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 */

void __fastcall CProjectedShadowScene::ClearReceivers(CProjectedShadowScene *this)
{
  _QWORD *v2; // r15
  _QWORD *i; // rbx
  __int64 v4; // rdi
  CProjectedShadowScene **v5; // r8
  CProjectedShadowScene **j; // rcx

  CProjectedShadowScene::ClearShadows(this, 0);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    v4 = i[2];
    v5 = *(CProjectedShadowScene ***)(v4 + 72);
    for ( j = *(CProjectedShadowScene ***)(v4 + 64); j != v5 && *j != this; ++j )
      ;
    if ( j != v5 )
    {
      memmove_0(j, j + 1, (char *)v5 - (char *)(j + 1));
      *(_QWORD *)(v4 + 72) -= 8LL;
    }
  }
  std::list<CProjectedShadowScene::ReceiverEntry>::clear((char *)this + 72);
}
