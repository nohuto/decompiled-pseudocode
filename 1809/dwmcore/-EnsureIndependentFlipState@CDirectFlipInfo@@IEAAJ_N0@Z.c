/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180178FBC
 * Callers:
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x18016C614 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180178EB0 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x180168710 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x18016AFFC (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsureIndependentFlipState(CDirectFlipInfo *this, char a2, char a3)
{
  unsigned int v3; // edi
  CMILCOMBase *v7; // rcx
  __int64 v8; // rcx
  COverlayContext *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+40h] [rbp-C0h]
  CMILCOMBase *v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+D8h] [rbp-28h]
  __int64 v19; // [rsp+E0h] [rbp-20h]
  char v20; // [rsp+EAh] [rbp-16h]
  char v21; // [rsp+100h] [rbp+0h]
  char v22; // [rsp+101h] [rbp+1h]
  int v23; // [rsp+104h] [rbp+4h]
  int v24; // [rsp+108h] [rbp+8h]
  int v25; // [rsp+10Ch] [rbp+Ch]

  v3 = 0;
  if ( *((_BYTE *)this + 85) )
  {
    memset_0(v13, 0, 0x100uLL);
    v7 = (CMILCOMBase *)*((_QWORD *)this + 4);
    v14 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v16 = v7;
    if ( v7 )
      CMILCOMBase::InternalAddRef(v7);
    v8 = *((_QWORD *)this + 5);
    v15 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = (COverlayContext *)*((_QWORD *)this + 1);
    v17 = *((_QWORD *)this + 9);
    v21 = *((_BYTE *)this + 86);
    v22 = *((_BYTE *)this + 87);
    v23 = *((_DWORD *)this + 22);
    v24 = *((_DWORD *)this + 23);
    v25 = *((_DWORD *)this + 24);
    v20 = 1;
    v10 = COverlayContext::EnsureIndependentFlipState(v9, (struct COverlayContext::OverlayPlaneInfo *)v13, a2, a3);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x26Bu);
    }
    else
    {
      *((_QWORD *)this + 9) = v17;
      *((_BYTE *)this + 86) = v21;
      *((_BYTE *)this + 87) = v22;
      *((_DWORD *)this + 22) = v23;
      *((_DWORD *)this + 23) = v24;
      *((_DWORD *)this + 24) = v25;
    }
    COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v13);
  }
  return v3;
}
