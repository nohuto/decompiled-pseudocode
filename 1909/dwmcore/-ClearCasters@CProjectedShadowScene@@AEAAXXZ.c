/*
 * XREFs of ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180003E0C
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800039C0 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x1801F1EE0 (-ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x1800058F0 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

void __fastcall CProjectedShadowScene::ClearCasters(CProjectedShadowScene *this)
{
  _QWORD *v2; // r15
  _QWORD *i; // rbx
  __int64 v4; // rdi
  CProjectedShadowScene **v5; // r8
  CProjectedShadowScene **j; // rcx

  CProjectedShadowScene::ClearShadows(this, 0);
  v2 = (_QWORD *)*((_QWORD *)this + 7);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    v4 = i[2];
    v5 = *(CProjectedShadowScene ***)(v4 + 96);
    for ( j = *(CProjectedShadowScene ***)(v4 + 88); j != v5 && *j != this; ++j )
      ;
    if ( j != v5 )
    {
      memmove_0(j, j + 1, (char *)v5 - (char *)(j + 1));
      *(_QWORD *)(v4 + 96) -= 8LL;
    }
  }
  std::list<CProjectedShadowScene::CasterEntry>::clear((char *)this + 56);
}
