/*
 * XREFs of ?RegisterTransitionBitmap@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@22PEAX_K@Z @ 0x1800A3EC8
 * Callers:
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180092A2C (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x18007E19C (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
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
  signed int v15; // edx
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // eax
  int v20; // ebx
  CBaseObject *v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  CBaseObject *v28; // rcx
  CBaseObject *v30; // [rsp+30h] [rbp-51h] BYREF
  void *v31; // [rsp+38h] [rbp-49h]
  _BYTE v32[48]; // [rsp+40h] [rbp-41h] BYREF
  CBaseObject *v33; // [rsp+70h] [rbp-11h]

  v31 = a7;
  v30 = 0LL;
  v12 = 0LL;
  memset_0(v32, 0, 0x38uLL);
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
      0xC99u);
LABEL_32:
    if ( a3 == 22 )
    {
      v28 = *(CBaseObject **)(a1 + 184);
      if ( v28 )
      {
        CBaseObject::Release(v28);
        *(_QWORD *)(a1 + 184) = 0LL;
      }
    }
    else if ( v33 )
    {
      CBaseObject::Release(v33);
    }
    goto LABEL_37;
  }
  if ( v13 < 0 )
    v13 = 0;
  if ( v15 < 0 )
    v15 = 0;
  v19 = CBitmapSource::Create(v13, v15, v13, v15, v31, &v30);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v19,
      0xC86u);
    v12 = (volatile signed __int32 *)v30;
    goto LABEL_29;
  }
  if ( a3 == 22 )
  {
    v21 = *(CBaseObject **)(a1 + 184);
    if ( v21 )
      CBaseObject::Release(v21);
    v12 = (volatile signed __int32 *)v30;
    *(_QWORD *)(a1 + 184) = v30;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = (volatile signed __int32 *)v30;
    }
LABEL_29:
    if ( v20 >= 0 )
      goto LABEL_37;
    goto LABEL_32;
  }
  v12 = (volatile signed __int32 *)v30;
  v22 = *a5;
  *(_QWORD *)v32 = a2;
  *(_DWORD *)&v32[8] = a3;
  v33 = v30;
  v23 = *a6;
  *(_OWORD *)&v32[12] = v22;
  *(_OWORD *)&v32[28] = v23;
  if ( v30 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v30 + 2);
    v12 = (volatile signed __int32 *)v30;
  }
  v24 = *(unsigned int *)(a1 + 176);
  v25 = v24 + 1;
  if ( (int)v24 + 1 < (unsigned int)v24 )
  {
    v20 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v20,
      0xC94u);
    goto LABEL_29;
  }
  if ( v25 <= *(_DWORD *)(a1 + 172) )
  {
    v20 = 0;
    v26 = *(_QWORD *)(a1 + 152) + 56 * v24;
    *(_OWORD *)v26 = *(_OWORD *)v32;
    *(_OWORD *)(v26 + 16) = *(_OWORD *)&v32[16];
    *(_OWORD *)(v26 + 32) = *(_OWORD *)&v32[32];
    *(_QWORD *)(v26 + 48) = v33;
    *(_DWORD *)(a1 + 176) = v25;
    goto LABEL_37;
  }
  v27 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 152, 56, 1, v32);
  v20 = v27;
  if ( v27 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC0u);
  if ( v20 < 0 )
    goto LABEL_28;
LABEL_37:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return (unsigned int)v20;
}
