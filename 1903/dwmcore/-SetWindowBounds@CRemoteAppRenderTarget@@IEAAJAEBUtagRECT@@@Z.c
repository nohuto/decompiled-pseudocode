/*
 * XREFs of ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801A6720
 * Callers:
 *     ?ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS@@@Z @ 0x1801A127C (-ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDER.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x1801A5E70 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ @ 0x1801A66E0 (-SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180072034 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x1801A61D0 (-ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SetWindowBounds(struct tagRECT *this, const struct tagRECT *a2)
{
  unsigned int v2; // edi
  LONG right; // r8d
  char v4; // r10
  int v6; // edx
  int v7; // eax
  int bottom; // ecx
  void (__fastcall ***v9)(_QWORD, GUID *, struct tagRECT *); // r9
  __int64 v10; // rcx
  struct tagRECT v12; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  right = this[5].right;
  v4 = 0;
  v12 = *a2;
  this[18] = v12;
  v6 = this[18].right - this[18].left;
  if ( right != v6 || (v7 = this[18].bottom - this[18].top, bottom = this[5].bottom, bottom != v7) )
  {
    this[5].right = v6;
    v4 = 1;
    right = v6;
    bottom = this[18].bottom - this[18].top;
    this[5].bottom = bottom;
  }
  if ( *(_DWORD *)(*(_QWORD *)&this[1].left + 1096LL) != 6 )
    goto LABEL_13;
  v9 = *(void (__fastcall ****)(_QWORD, GUID *, struct tagRECT *))&this[11].left;
  if ( !v9 || !v4 )
    goto LABEL_12;
  if ( !right || !bottom )
  {
    CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange((CRemoteAppRenderTarget *)&this[4]);
    goto LABEL_12;
  }
  (**v9)(*(_QWORD *)&this[11].left, &GUID_c1102d2e_5afc_41c9_a025_779b188b0abe, &v12);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)&v12.left + 32LL))(
         *(_QWORD *)&v12.left,
         (unsigned int)this[5].right,
         (unsigned int)this[5].bottom);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v12.left);
  if ( (v2 & 0x80000000) == 0 )
  {
LABEL_12:
    this[13] = (struct tagRECT)_xmm;
    LOWORD(this[17].left) = 32085;
    this[14] = (struct tagRECT)_xmm;
    this[15] = (struct tagRECT)_xmm;
    this[16] = (struct tagRECT)_xmm;
    CMILMatrix::Translate((CMILMatrix *)&this[13], (float)-this[18].left, (float)-this[18].top);
LABEL_13:
    BYTE1(this[10].left) = 1;
    return v2;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v2, 0x103u, 0LL);
  return v2;
}
