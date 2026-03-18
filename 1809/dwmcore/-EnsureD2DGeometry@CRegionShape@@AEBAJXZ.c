/*
 * XREFs of ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x1800122D4
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180012220 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800122B4 (--1-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180012444 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x1800AA748 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::EnsureD2DGeometry(CRegionShape *this)
{
  int v1; // edi
  int D2DFactoryNoRef; // eax
  CD3DDeviceManager *v5; // rcx
  void (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  struct CD2DFactory *v16; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-98h]

  v1 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v14 = 0LL;
    v13 = 0LL;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v17);
    v18 = 0;
    D2DFactoryNoRef = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>>(
                        (char *)this + 16,
                        v17);
    v1 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v12 = 208;
    }
    else
    {
      D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v5, &v16);
      v1 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        v6 = 0LL;
        v15 = 0LL;
        v7 = *((_QWORD *)v16 + 4);
        v14 = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v7 + 24LL))(
               v7,
               v17[0],
               v18,
               &v15);
        v1 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Au);
        }
        else
        {
          v6 = v15;
          v15 = 0LL;
          v14 = v6;
        }
        ReleaseInterface<ID2D1Geometry>(&v15);
        if ( v1 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v1, 0xDAu);
        }
        else
        {
          v13 = 0LL;
          (**v6)(v6, &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010, &v13);
          v11 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v13, 0LL) != 0);
          v13 &= v11;
        }
        goto LABEL_9;
      }
      v12 = 213;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, D2DFactoryNoRef, v12);
LABEL_9:
    DynArrayImpl<1>::~DynArrayImpl<1>(v17);
    wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>(&v13);
    wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)&v14);
  }
  return (unsigned int)v1;
}
