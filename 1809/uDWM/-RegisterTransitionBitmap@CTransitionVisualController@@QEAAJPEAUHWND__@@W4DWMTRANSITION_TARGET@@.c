/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x18009FAA8
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008CEAC (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077BDC (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x18007F684 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 */

__int64 __fastcall CTransitionVisualController::RegisterTransitionBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        __int128 *a5,
        __int128 *a6,
        void *a7,
        unsigned __int64 a8)
{
  volatile signed __int32 *v12; // rdi
  signed int v13; // r10d
  __int64 v14; // rax
  signed int v15; // r11d
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // eax
  int v20; // ebx
  CBaseObject *v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // eax
  CBaseObject *v25; // rcx
  CBaseObject *v27; // [rsp+40h] [rbp-51h] BYREF
  void *v28; // [rsp+48h] [rbp-49h]
  __int64 v29; // [rsp+50h] [rbp-41h] BYREF
  int v30; // [rsp+58h] [rbp-39h]
  __int128 v31; // [rsp+5Ch] [rbp-35h]
  __int128 v32; // [rsp+6Ch] [rbp-25h]
  CBaseObject *v33; // [rsp+80h] [rbp-11h]

  v28 = a7;
  v27 = 0LL;
  v12 = 0LL;
  memset_0(&v29, 0, 0x38uLL);
  v13 = a4[2] - *a4;
  v14 = (unsigned int)v13;
  if ( v13 < 0 )
    v14 = 0LL;
  v15 = a4[3] - a4[1];
  v16 = (unsigned int)v15;
  if ( v15 < 0 )
    v16 = 0LL;
  v17 = v14 * v16;
  if ( v17 > 0xFFFFFFFF || (v18 = 4LL * (unsigned int)v17, v18 > 0xFFFFFFFF) || a8 < (unsigned int)v18 )
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024809,
      0xC93u);
LABEL_26:
    if ( a3 == 22 )
    {
      v25 = *(CBaseObject **)(a1 + 184);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
    }
    else if ( v33 )
    {
      CBaseObject::Release(v33);
    }
    goto LABEL_31;
  }
  if ( v13 < 0 )
    v13 = 0;
  if ( v15 < 0 )
    v15 = 0;
  v19 = CBitmapSource::Create(
          v13,
          v15,
          v13,
          v15,
          v28,
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v27);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v19,
      0xC80u);
    v12 = (volatile signed __int32 *)v27;
    goto LABEL_23;
  }
  if ( a3 == 22 )
  {
    v21 = *(CBaseObject **)(a1 + 184);
    if ( v21 )
      CBaseObject::Release(v21);
    v12 = (volatile signed __int32 *)v27;
    *(_QWORD *)(a1 + 184) = v27;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = (volatile signed __int32 *)v27;
    }
LABEL_23:
    if ( v20 >= 0 )
      goto LABEL_31;
    goto LABEL_26;
  }
  v12 = (volatile signed __int32 *)v27;
  v22 = *a5;
  v29 = a2;
  v30 = a3;
  v33 = v27;
  v23 = *a6;
  v31 = v22;
  v32 = v23;
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
    v12 = (volatile signed __int32 *)v27;
  }
  v24 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet(a1 + 152, (__int64)&v29);
  v20 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v24,
      0xC8Eu);
    goto LABEL_23;
  }
LABEL_31:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return (unsigned int)v20;
}
