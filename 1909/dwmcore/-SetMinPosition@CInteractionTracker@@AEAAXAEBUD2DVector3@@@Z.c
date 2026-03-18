/*
 * XREFs of ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB7A8
 * Callers:
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x1801DA1BC (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTR.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB59C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DBB10 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A3F88 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801D8B94 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB59C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18021E0AC (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::SetMinPosition(CInteractionTracker *this, const struct D2DVector3 *a2)
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

  if ( *(_QWORD *)((char *)this + 84) != *(_QWORD *)a2 || *((_DWORD *)this + 23) != *((_DWORD *)a2 + 2) )
  {
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 21) - *(float *)a2)) & _xmm);
    v4 = v3 > 0.0000011920929;
    v5 = 0.0000011920929 == v3;
    v6 = *((float *)this + 22) - *((float *)a2 + 1);
    v7 = (v4 || v5) + 4;
    v5 = (*((_BYTE *)this + 533) & 2) == 0;
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a2;
    *((_DWORD *)this + 23) = *((_DWORD *)a2 + 2);
    if ( v5 )
    {
      v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
      if ( v8 >= 0.0000011920929 )
        v7 |= 2u;
      CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, v7);
    }
    v9 = fmaxf(*((float *)this + 22), *((float *)this + 25));
    v11[0] = fmaxf(*((float *)this + 21), *((float *)this + 24));
    v10 = fmaxf(*((float *)this + 23), *((float *)this + 26));
    *(float *)&v11[1] = v9;
    *(float *)&v11[2] = v10;
    CInteractionTracker::SetMaxPosition(this, (const struct D2DVector3 *)v11);
    if ( !*((_DWORD *)this + 42) )
      InteractionSourceManager::ReconfigureAllManipulations((CInteractionTracker *)((char *)this + 192));
    CResource::InvalidateAnimationSources(this);
  }
}
