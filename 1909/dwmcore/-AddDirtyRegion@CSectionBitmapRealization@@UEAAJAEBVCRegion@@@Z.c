/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800C3050
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18000B608 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18006B1C0 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, const struct CRegion *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int appended; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+54h] [rbp-ACh]
  unsigned int v20; // [rsp+58h] [rbp-A8h]
  _BYTE v21[256]; // [rsp+60h] [rbp-A0h] BYREF

  v16 = 0LL;
  v20 = 0;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 40);
  v17[0] = v21;
  v17[1] = v21;
  v18 = 16;
  v19 = 16;
  if ( !v3 )
    goto LABEL_7;
  v5 = (**v3)(v3, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v16);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x97u, 0LL);
    goto LABEL_8;
  }
  v20 = 0;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(a2, (__int64)v17);
  v7 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, appended, 0x99u, 0LL);
    goto LABEL_8;
  }
  v10 = 0;
  if ( v20 )
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 40LL))(v16, v17[0] + 16LL * v10);
      v7 = v11;
      if ( v11 < 0 )
        break;
      if ( ++v10 >= v20 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x9Du, 0LL);
  }
  else
  {
LABEL_7:
    v13 = CBitmapRealization::AddDirtyRegion(this, (const struct FastRegion::Internal::CRgnData **)a2);
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA2u, 0LL);
  }
LABEL_8:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v17);
  return v7;
}
