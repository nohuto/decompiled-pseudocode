/*
 * XREFs of ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801605C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180160D04 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     McTemplateU0ffff @ 0x180160DB4 (McTemplateU0ffff.c)
 */

__int64 __fastcall CD2DContext::FillShape(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  unsigned int v10; // ebx
  int v11; // eax
  signed int v12; // eax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v18; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+3Ch] [rbp-4Ch]
  struct D2D_MATRIX_3X2_F v21; // [rsp+40h] [rbp-48h] BYREF

  CD2DContext::FlushDrawList(this);
  v10 = 0;
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14, v11);
  }
  CD2DContext::SetCommonState(this, a2, a6, &a5, &v21);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v12 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, int *))(*(_QWORD *)a3 + 32LL))(
            a3,
            &v21,
            &v18);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x52Au, 0LL);
      return v10;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff(
        (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v14,
        v15,
        v19,
        v20);
  }
  (*(void (__fastcall **)(_QWORD, const struct ID2D1Geometry *, struct ID2D1Brush *, _QWORD))(**((_QWORD **)this + 29)
                                                                                            + 184LL))(
    *((_QWORD *)this + 29),
    a3,
    a4,
    0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v16 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14, v16);
  }
  return v10;
}
