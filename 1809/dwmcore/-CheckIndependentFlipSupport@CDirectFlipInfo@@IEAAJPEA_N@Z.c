/*
 * XREFs of ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180178CE8
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::CheckIndependentFlipSupport(CDirectFlipInfo *this, bool *a2)
{
  unsigned int v2; // ebx
  bool v3; // al
  int v6; // eax
  __int64 v7; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  bool v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v13 = 0LL;
  v12 = 0;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_7;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v13);
  v2 = v6;
  if ( v6 < 0 )
  {
    v11 = 651;
    goto LABEL_14;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, bool *))(*(_QWORD *)v13 + 472LL))(v13, &v12);
  v2 = v6;
  if ( v6 < 0 )
  {
    v11 = 653;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v11);
    goto LABEL_8;
  }
  v3 = v12;
  if ( !v12 )
  {
LABEL_7:
    *a2 = v3;
    goto LABEL_8;
  }
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                    + 4));
  if ( RenderingRealizationNoRef )
  {
    v3 = *((_DWORD *)RenderingRealizationNoRef + 68) != 3;
    v12 = v3;
    goto LABEL_7;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147467259, 0x299u);
LABEL_8:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v2;
}
