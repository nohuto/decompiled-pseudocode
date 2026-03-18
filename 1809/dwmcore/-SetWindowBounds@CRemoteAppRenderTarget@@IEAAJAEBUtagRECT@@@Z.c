/*
 * XREFs of ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x180160420
 * Callers:
 *     ?ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS@@@Z @ 0x18014BBC8 (-ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x18015FBC8 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET.c)
 *     ?SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ @ 0x1801603E0 (-SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ @ 0x18015FEF0 (-ReleaseResourcesForDisplayChange@CRemoteAppRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SetWindowBounds(struct tagRECT *this, const struct tagRECT *a2)
{
  int v2; // edi
  LONG right; // r8d
  char v4; // r10
  int v6; // edx
  int v7; // eax
  int bottom; // ecx
  void (__fastcall ***v9)(_QWORD, GUID *, struct tagRECT *); // r9
  int v10; // eax
  __int64 v11; // rcx
  struct tagRECT v13; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  right = this[5].right;
  v4 = 0;
  v13 = *a2;
  this[18] = v13;
  v6 = this[18].right - this[18].left;
  if ( right != v6 || (v7 = this[18].bottom - this[18].top, bottom = this[5].bottom, bottom != v7) )
  {
    this[5].right = v6;
    v4 = 1;
    right = v6;
    bottom = this[18].bottom - this[18].top;
    this[5].bottom = bottom;
  }
  if ( *(_DWORD *)(*(_QWORD *)&this[1].left + 1080LL) != 6 )
    goto LABEL_15;
  v9 = *(void (__fastcall ****)(_QWORD, GUID *, struct tagRECT *))&this[11].left;
  if ( !v9 || !v4 )
  {
LABEL_14:
    this[13] = (struct tagRECT)_xmm;
    LOWORD(this[17].left) = 32085;
    this[14] = (struct tagRECT)_xmm;
    this[15] = (struct tagRECT)_xmm;
    this[16] = (struct tagRECT)_xmm;
    CMILMatrix::Translate((CMILMatrix *)&this[13], (float)-this[18].left, (float)-this[18].top);
LABEL_15:
    BYTE1(this[10].left) = 1;
    return (unsigned int)v2;
  }
  if ( !right || !bottom )
  {
    CRemoteAppRenderTarget::ReleaseResourcesForDisplayChange((CRemoteAppRenderTarget *)&this[4]);
    goto LABEL_14;
  }
  (**v9)(*(_QWORD *)&this[11].left, &GUID_c1102d2e_5afc_41c9_a025_779b188b0abe, &v13);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)&v13.left + 32LL))(
          *(_QWORD *)&v13.left,
          (unsigned int)this[5].right,
          (unsigned int)this[5].bottom);
  v11 = *(_QWORD *)&v13.left;
  v2 = v10;
  if ( *(_QWORD *)&v13.left )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v13.left + 16LL))(*(_QWORD *)&v13.left);
  if ( v2 >= 0 )
    goto LABEL_14;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v2, 0x103u);
  return (unsigned int)v2;
}
