/*
 * XREFs of ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801873D4
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800122B4 (--1-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800E64F8 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListPolygonBuilder::Build(CDrawListPolygonBuilder *this, const struct CShape *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  bool v9; // sf
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+10h] BYREF
  __int64 v18; // [rsp+48h] [rbp+18h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 3);
  v4 = v17;
  v17 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, 0LL, &v17);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x15u);
  }
  else
  {
    v8 = v18;
    v18 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
           v17,
           &GUID_2cd906a5_12e2_11dc_9fed_001143a055f9,
           &v18) < 0;
    v11 = (unsigned __int64)this + 16;
    if ( v9 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64))(*(_QWORD *)v17 + 96LL))(
              v17,
              0LL,
              v10,
              v11 & -(__int64)(this != 0LL));
      v7 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1Cu);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 144LL))(
              v18,
              v11 & -(__int64)(this != 0LL));
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x18u);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>(&v17);
  return v7;
}
