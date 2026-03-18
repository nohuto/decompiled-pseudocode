/*
 * XREFs of ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEBV1@@Z @ 0x180193514
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x18005B5E4 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801925E8 (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@VCRegion@@@std@@QEAAXXZ @ 0x1801936C4 (-reset@-$shared_ptr@VCRegion@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::TransferAdvancedDirectFlipState(
        CDirectFlipInfo *this,
        const struct CDirectFlipInfo *a2)
{
  int v2; // eax
  char *v3; // rsi
  unsigned int v4; // ebx
  _QWORD *v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  v3 = (char *)this + 48;
  v4 = 0;
  *((_DWORD *)this + 17) = v2;
  v12 = 0LL;
  v6 = (_QWORD *)((char *)this + 48);
  if ( v2 < 3 )
  {
    std::shared_ptr<CRegion>::reset(v6);
  }
  else
  {
    std::shared_ptr<ManipulationThreadTelemetryData>::operator=(v6, (_QWORD *)a2 + 6);
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v12);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x21Du, 0LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 4) + 120LL))(
             *((_QWORD *)this + 4),
             v12,
             v3);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x220u, 0LL);
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v4;
}
