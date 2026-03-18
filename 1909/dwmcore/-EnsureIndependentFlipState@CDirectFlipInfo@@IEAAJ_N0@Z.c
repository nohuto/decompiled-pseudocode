/*
 * XREFs of ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180192E78
 * Callers:
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180185D9C (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180192630 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180192D00 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??1OverlayPlaneInfo@COverlayContext@@QEAA@XZ @ 0x180181FE0 (--1OverlayPlaneInfo@COverlayContext@@QEAA@XZ.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801847A0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsureIndependentFlipState(CDirectFlipInfo *this, char a2, char a3)
{
  unsigned int v3; // edi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  COverlayContext *v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  char v18; // [rsp+EAh] [rbp-16h]
  char v19; // [rsp+100h] [rbp+0h]
  char v20; // [rsp+101h] [rbp+1h]
  int v21; // [rsp+104h] [rbp+4h]
  int v22; // [rsp+108h] [rbp+8h]
  int v23; // [rsp+10Ch] [rbp+Ch]

  v3 = 0;
  if ( *((_BYTE *)this + 98) )
  {
    memset_0(v14, 0, 0x100uLL);
    v8 = *((_QWORD *)this + 4);
    v16 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = *((_QWORD *)this + 5);
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = (COverlayContext *)*((_QWORD *)this + 1);
    LOBYTE(v7) = a3;
    v17 = *((_QWORD *)this + 9);
    v19 = *((_BYTE *)this + 99);
    v20 = *((_BYTE *)this + 100);
    v21 = *((_DWORD *)this + 26);
    v22 = *((_DWORD *)this + 27);
    v23 = *((_DWORD *)this + 28);
    v18 = 1;
    v11 = COverlayContext::EnsureIndependentFlipState(v10, (struct COverlayContext::OverlayPlaneInfo *)v14, a2, v7);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2BAu, 0LL);
    }
    else
    {
      *((_QWORD *)this + 9) = v17;
      *((_BYTE *)this + 99) = v19;
      *((_BYTE *)this + 100) = v20;
      *((_DWORD *)this + 26) = v21;
      *((_DWORD *)this + 27) = v22;
      *((_DWORD *)this + 28) = v23;
    }
    COverlayContext::OverlayPlaneInfo::~OverlayPlaneInfo((COverlayContext::OverlayPlaneInfo *)v14);
  }
  return v3;
}
