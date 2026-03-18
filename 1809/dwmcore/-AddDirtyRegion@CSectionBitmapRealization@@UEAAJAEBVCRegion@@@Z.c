/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800C2E20
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800C3220 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, const struct CRegion *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int appended; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  void *v17[2]; // [rsp+40h] [rbp-C0h] BYREF
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
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Au);
    goto LABEL_8;
  }
  v20 = 0;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(a2, (__int64)v17);
  v7 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, appended, 0x9Cu);
    goto LABEL_8;
  }
  v10 = 0;
  if ( v20 )
  {
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 40LL))(v16, (char *)v17[0] + 16 * v10);
      v7 = v11;
      if ( v11 < 0 )
        break;
      if ( ++v10 >= v20 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA0u);
  }
  else
  {
LABEL_7:
    v13 = CBitmapRealization::AddDirtyRegion(this, a2);
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA5u);
  }
LABEL_8:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  DynArrayImpl<1>::~DynArrayImpl<1>(v17);
  return v7;
}
