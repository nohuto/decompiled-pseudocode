/*
 * XREFs of ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB59C
 * Callers:
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x1801DA148 (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB7A8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DBB10 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801D8C24 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB7A8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18021E0AC (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetMaxPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
{
  float v3; // xmm0_4
  bool v4; // cf
  bool v5; // zf
  float v6; // xmm0_4
  char v7; // cl
  float v8; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  _DWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 12) != *(_QWORD *)a2 || *((_DWORD *)this + 26) != *((_DWORD *)a2 + 2) )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - *(float *)a2)) & _xmm);
    v4 = v3 > 0.0000011920929;
    v5 = 0.0000011920929 == v3;
    v6 = *((float *)this + 25) - *((float *)a2 + 1);
    v7 = (v4 || v5) + 4;
    v5 = (*((_BYTE *)this + 533) & 2) == 0;
    *((_QWORD *)this + 12) = *(_QWORD *)a2;
    *((_DWORD *)this + 26) = *((_DWORD *)a2 + 2);
    if ( v5 )
    {
      v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
      if ( v8 >= 0.0000011920929 )
        v7 |= 2u;
      CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax((__int64)this, v7);
    }
    v9 = fminf(*((float *)this + 22), *((float *)this + 25));
    v11[0] = fminf(*((float *)this + 21), *((float *)this + 24));
    v10 = fminf(*((float *)this + 23), *((float *)this + 26));
    *(float *)&v11[1] = v9;
    *(float *)&v11[2] = v10;
    CInteractionTracker::SetMinPosition(this, (const struct D2DVector3 *)v11);
    if ( !*((_DWORD *)this + 42) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 192));
    CResource::InvalidateAnimationSources(this);
  }
}
