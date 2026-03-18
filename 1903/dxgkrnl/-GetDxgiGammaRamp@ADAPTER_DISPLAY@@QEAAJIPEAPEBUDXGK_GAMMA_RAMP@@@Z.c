/*
 * XREFs of ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C012913C
 * Callers:
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0128F18 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000D294 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0024C00 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6238 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C01EFF9C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDxgiGammaRamp(
        DXGADAPTER **this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  DXGADAPTER *v10; // rcx
  PVOID v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int SourceConnectedToTargetInClientVidPn; // edi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  DXGADAPTER *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rbp
  struct DXGK_GAMMA_ADJUSTMENT *v23; // r15
  __int64 v24; // rsi
  _WORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v32; // rcx
  unsigned int v33; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 7429LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 7430LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = this[2];
  v11 = 0LL;
  *a3 = 0LL;
  if ( !*((_DWORD *)v10 + 474) )
    return 0LL;
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v10, (unsigned int)v4, &v33);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    if ( v33 == -1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v19 + 24) = 7452LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v18 = v33;
    v20 = this[14];
    v21 = 3968LL * v33;
    if ( *(_DWORD *)((char *)v20 + v21 + 696) == 1 && (v22 = *(_QWORD *)((char *)v20 + v21 + 704)) != 0
      || (v22 = *(_QWORD *)((char *)v20 + v21 + 688)) != 0 )
    {
      v23 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v22 + 8LL * v33 + 1536);
      v11 = *(PVOID *)(v22 + 8LL * v33 + 1408);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v22 + 8LL * v33 + 1408);
        if ( v11 && *((_DWORD *)v11 + 4) == 1 )
          v24 = 0LL;
        v25 = operator new[](0x30uLL, 0x4B677844u, PagedPool);
        v11 = v25;
        if ( v25 )
        {
          v25[20] = 0;
          *(_QWORD *)v25 = &ReferenceCounted::`vftable';
          *(_QWORD *)v25 = &DXGK_GAMMA_RAMP::`vftable';
          *((_DWORD *)v25 + 2) = 1;
          *((_DWORD *)v25 + 4) = 1;
          *((_QWORD *)v25 + 3) = 0LL;
          *((_QWORD *)v25 + 4) = 0LL;
        }
        else
        {
          v11 = 0LL;
        }
        if ( !v11 )
        {
          v30 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
          *(_QWORD *)(v30 + 24) = v22;
          WdLogEvent5_WdLowResource(v30);
          return (unsigned int)-1073741801;
        }
        if ( v24 )
        {
          inited = DXGK_GAMMA_RAMP::Initialize((size_t *)v11, *(unsigned int *)(v24 + 16), *(const void **)(v24 + 32));
        }
        else
        {
          SourceConnectedToTargetInClientVidPn = DXGK_GAMMA_RAMP::Initialize((size_t *)v11, 2LL, 0LL);
          if ( SourceConnectedToTargetInClientVidPn < 0 )
            goto LABEL_34;
          inited = ColorSpaceTransformInitIdentityTransform((__int64)v11 + 16);
        }
        SourceConnectedToTargetInClientVidPn = inited;
        if ( inited < 0 )
          goto LABEL_34;
        SourceConnectedToTargetInClientVidPn = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                                                 v32,
                                                 (const struct DXGK_GAMMA_RAMP *)v24,
                                                 (struct DXGK_GAMMA_RAMP *)v11,
                                                 v23);
        if ( SourceConnectedToTargetInClientVidPn < 0 )
          goto LABEL_34;
      }
      else if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
      }
    }
    *a3 = (const struct DXGK_GAMMA_RAMP *)v11;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v16);
    *(_QWORD *)(v17 + 24) = v4;
    *(_QWORD *)(v17 + 32) = this[2];
    WdLogEvent5_WdError(v17);
  }
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
LABEL_34:
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)v11, v18, v16);
  }
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
