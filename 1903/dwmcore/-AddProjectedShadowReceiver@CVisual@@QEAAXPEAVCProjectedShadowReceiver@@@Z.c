/*
 * XREFs of ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1800035E0
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x1800036B0 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?SetProjectedShadowReceivers@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@@Z @ 0x180003664 (-SetProjectedShadowReceivers@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocat.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180008670 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ??$_Emplace_reallocate@AEBQEAVCProjectedShadowReceiver@@@?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@QEAAPEAPEAVCProjectedShadowReceiver@@QEAPEAV2@AEBQEAV2@@Z @ 0x180021A80 (--$_Emplace_reallocate@AEBQEAVCProjectedShadowReceiver@@@-$vector@PEAVCProjectedShadowReceiver@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 */

void __fastcall CVisual::AddProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowReceivers; // rax
  _QWORD *v6; // rdx
  struct CProjectedShadowReceiver *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( (**((_DWORD **)this + 28) & 0x10000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    CVisual::SetProjectedShadowReceivers(this, v4);
  }
  ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(this);
  v6 = *(_QWORD **)(ProjectedShadowReceivers + 8);
  if ( *(_QWORD **)(ProjectedShadowReceivers + 16) == v6 )
  {
    std::vector<CProjectedShadowReceiver *>::_Emplace_reallocate<CProjectedShadowReceiver * const &>(
      ProjectedShadowReceivers,
      v6,
      &v7);
  }
  else
  {
    *v6 = a2;
    *(_QWORD *)(ProjectedShadowReceivers + 8) += 8LL;
  }
}
