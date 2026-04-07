/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18003ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000B7C8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003A35C (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x18003B038 (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x18003B1E4 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x18003B210 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x18003B23C (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x18003B280 (-Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x18003B314 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ddqqqqqqp @ 0x1800A1A88 (McTemplateU0ddqqqqqqp.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CEffectGroupProxy **this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // eax
  unsigned int v8; // r8d
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  CEffectGroupProxy *v24; // rax
  int v25; // ecx
  void *v26; // [rsp+28h] [rbp-70h]
  struct CBaseTransformProxy *v27[3]; // [rsp+60h] [rbp-38h] BYREF

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources((CAnimatedTransitionVisual *)this);
  LOBYTE(v3) = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x740u, v26);
  }
  else
  {
    v5 = 0;
    memset(v27, 0, sizeof(v27));
    if ( this[77] || this[78] )
    {
      v6 = CTranslateTransformProxy::Update(this[86], 0.0, 0.0);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x74Eu, v26);
        return v4;
      }
      v5 = 1;
      v27[0] = this[86];
    }
    if ( this[79] || this[80] )
    {
      v20 = CScaleTransformProxy::Update(this[85], 1.0, 1.0, 0.0);
      v4 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x756u, v26);
        return v4;
      }
      v21 = v5++;
      v27[v21] = this[85];
    }
    if ( this[81] || this[82] )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[87] + 2) + 16LL) + 1064LL))(
              *(_QWORD *)(*((_QWORD *)this[87] + 2) + 16LL),
              *(unsigned int *)(*((_QWORD *)this[87] + 2) + 24LL));
      v4 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x75Eu, v26);
        return v4;
      }
      v23 = v5++;
      v27[v23] = this[87];
    }
    v7 = CTransformGroupProxy::Update(this[88], v27, v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x763u, v26);
    }
    else
    {
      v9 = CEffectGroupProxy::Update(this[84], *((float *)this + 232), v8, 0LL);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x765u, v26);
      }
      else
      {
        v10 = CVisualProxy::SetEffect(*((CVisualProxy **)this[91] + 2), this[84]);
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x767u, v26);
        }
        else
        {
          v11 = CVisualProxy::SetTransform(*((CVisualProxy **)this[91] + 2), this[88]);
          v4 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x769u, v26);
          }
          else
          {
            v12 = CAnimatedTransitionVisual::_BindIfPresent(this, 0LL, this[86], 5LL);
            v4 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x76Bu, v26);
            }
            else
            {
              v13 = CAnimatedTransitionVisual::_BindIfPresent(this, 1LL, this[86], 6LL);
              v4 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x76Cu, v26);
              }
              else
              {
                v14 = CAnimatedTransitionVisual::_BindIfPresent(this, 2LL, this[85], 3LL);
                v4 = v14;
                if ( v14 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x76Du, v26);
                }
                else
                {
                  v15 = CAnimatedTransitionVisual::_BindIfPresent(this, 3LL, this[85], 4LL);
                  v4 = v15;
                  if ( v15 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x76Eu, v26);
                  }
                  else
                  {
                    v16 = CAnimatedTransitionVisual::_BindIfPresent(this, 4LL, this[87], 1LL);
                    v4 = v16;
                    if ( v16 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x76Fu, v26);
                    }
                    else
                    {
                      v17 = CAnimatedTransitionVisual::_BindIfPresent(this, 5LL, this[87], 2LL);
                      v4 = v17;
                      if ( v17 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x770u, v26);
                      }
                      else
                      {
                        v18 = CAnimatedTransitionVisual::_BindIfPresent(this, 6LL, this[84], 0LL);
                        v4 = v18;
                        if ( v18 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x771u, v26);
                        }
                        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                        {
                          v24 = this[3];
                          if ( v24 )
                            v3 = *(_DWORD *)(*((_QWORD *)v24 + 2) + 24LL);
                          v25 = *(_DWORD *)(*((_QWORD *)this[84] + 2) + 24LL);
                          McTemplateU0ddqqqqqqp(
                            v25,
                            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                            *((_DWORD *)this + 184),
                            *((_DWORD *)this + 185),
                            v3,
                            v25,
                            *(_DWORD *)(*((_QWORD *)this[88] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[86] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[85] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[87] + 2) + 24LL),
                            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
