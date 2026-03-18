/*
 * XREFs of ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DCE30
 * Callers:
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x1801DB83C (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DCC1C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DD1F0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801DA2A4 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DCC1C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18021F7BC (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetMinPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  unsigned __int64 v4; // rcx
  float v5; // xmm0_4
  float v6; // xmm2_4
  char v7; // dl
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  _DWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)((char *)this + 84) - *(_QWORD *)a2;
  if ( !v4 )
    v4 = *((unsigned int *)this + 23) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( v4 )
  {
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 21) - *(float *)a2)) & _xmm);
    v6 = *((float *)this + 22) - *((float *)a2 + 1);
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a2;
    v7 = (v5 >= 0.0000011920929) + 4;
    *((_DWORD *)this + 23) = *((_DWORD *)a2 + 2);
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
    if ( v8 >= 0.0000011920929 )
      v7 = ((v5 >= 0.0000011920929) + 4) | 2;
    CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, v7);
    v9 = fmaxf(*((float *)this + 22), *((float *)this + 25));
    v11[0] = fmaxf(*((float *)this + 21), *((float *)this + 24));
    v10 = fmaxf(*((float *)this + 23), *((float *)this + 26));
    *(float *)&v11[1] = v9;
    *(float *)&v11[2] = v10;
    CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v11);
    if ( !*((_DWORD *)this + 42) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 192));
    CResource::InvalidateAnimationSources(this, 22);
  }
}
