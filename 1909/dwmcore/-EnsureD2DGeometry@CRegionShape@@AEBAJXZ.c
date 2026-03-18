/*
 * XREFs of ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18000B4A4
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18000B3E0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B484 (--1-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18000B608 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x18000B6BC (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::EnsureD2DGeometry(CRegionShape *this)
{
  int v1; // edi
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rbx
  int appended; // eax
  CD3DDeviceManager *v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // [rsp+20h] [rbp-E0h]
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  void (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  struct CD2DFactory *v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+68h] [rbp-98h]

  v1 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v4 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v16);
    v17 = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>((char *)this + 16, v16);
    v1 = appended;
    if ( appended < 0 )
    {
      v11 = 208;
    }
    else
    {
      appended = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v6, &v15);
      v1 = appended;
      if ( appended >= 0 )
      {
        v14 = 0LL;
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)v15 + 4) + 24LL))(
               *((_QWORD *)v15 + 4),
               v16[0],
               v17,
               &v14);
        v1 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x9Au, 0LL);
        }
        else
        {
          v4 = v14;
          v14 = 0LL;
          v13 = v4;
        }
        ReleaseInterface<ID2D1Geometry>(&v14);
        if ( v1 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v1, 0xDAu, 0LL);
        }
        else
        {
          (**v4)(v4, &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010, &v12);
          v10 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v12, 0LL) != 0);
          v12 &= v10;
        }
        goto LABEL_9;
      }
      v11 = 213;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, appended, v11, 0LL);
LABEL_9:
    DynArrayImpl<0>::~DynArrayImpl<0>(v16);
    wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>((__int64 *)&v13);
  }
  return (unsigned int)v1;
}
