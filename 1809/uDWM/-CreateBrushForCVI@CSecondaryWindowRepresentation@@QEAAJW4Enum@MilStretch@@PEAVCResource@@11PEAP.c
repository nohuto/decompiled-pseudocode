/*
 * XREFs of ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x180009D50
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180009950 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180033940 (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::CreateBrushForCVI(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        CBaseObject **a6)
{
  int v8; // r12d
  int v9; // eax
  unsigned int v10; // edi
  int v11; // r9d
  __int64 v12; // r8
  int v13; // edx
  volatile signed __int32 *v14; // rbx
  int v15; // eax
  CBaseObject *v17; // [rsp+90h] [rbp-9h] BYREF
  __int128 v18; // [rsp+98h] [rbp-1h] BYREF
  __int128 v19; // [rsp+A8h] [rbp+Fh] BYREF

  v17 = 0LL;
  v18 = 0uLL;
  v8 = 0;
  v9 = CCachedVisualImageBrushResource::Create(a1, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v17);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x45Cu);
LABEL_12:
    v14 = (volatile signed __int32 *)v17;
    goto LABEL_13;
  }
  if ( a4 )
  {
    v8 = *(_DWORD *)(a4 + 24);
    v11 = 0;
    v18 = 0uLL;
  }
  else
  {
    v11 = 1;
    v18 = _xmm;
  }
  v19 = _xmm;
  if ( a3 )
    v12 = *(unsigned int *)(a3 + 24);
  else
    v12 = 0LL;
  if ( a5 )
    v13 = *(_DWORD *)(a5 + 24);
  else
    v13 = 0;
  v14 = (volatile signed __int32 *)v17;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, __int128 *, int, _DWORD, _DWORD, int, int, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v17 + 2) + 1200LL))(
          *((_QWORD *)v17 + 2),
          *((unsigned int *)v17 + 6),
          v12,
          &v18,
          &v19,
          v13,
          0,
          0,
          v11,
          1,
          v8,
          0,
          2,
          0,
          0,
          0,
          v12);
  v10 = v15;
  if ( v15 >= 0 )
  {
    if ( *a6 )
      CBaseObject::Release(*a6);
    *a6 = (CBaseObject *)v14;
    _InterlockedIncrement(v14 + 2);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x48Du);
LABEL_13:
  if ( v14 )
    CBaseObject::Release((CBaseObject *)v14);
  return v10;
}
