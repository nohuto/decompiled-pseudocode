/*
 * XREFs of ?Create@CScreenRotation@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800894BC
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18008B184 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008C580 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180020F98 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CScreenRotation::Create(struct IDwmChannel *a1, struct CScreenRotation **a2)
{
  unsigned int v4; // edi
  CRenderDataVisual *v5; // rax
  struct CScreenRotation *v6; // rbx
  int v7; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x15u);
    return v4;
  }
  v5 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              384LL);
  v6 = v5;
  if ( v5 )
  {
    CRenderDataVisual::CRenderDataVisual(v5);
    *((_QWORD *)v6 + 35) = &CScreenRotation::`vftable'{for `IAnimationListener'};
    *(_QWORD *)v6 = &CScreenRotation::`vftable'{for `CRenderDataVisual'};
    *((_DWORD *)v6 + 89) = -1;
    *((_DWORD *)v6 + 90) = -1;
    *(_OWORD *)((char *)v6 + 364) = xmmword_1800C4968;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v7 = (*(__int64 (__fastcall **)(struct CScreenRotation *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL))(v6, a1);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    v6 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x15u);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v4;
}
