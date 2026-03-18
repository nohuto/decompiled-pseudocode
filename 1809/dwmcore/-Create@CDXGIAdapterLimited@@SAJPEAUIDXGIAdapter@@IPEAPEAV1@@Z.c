/*
 * XREFs of ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800806B0
 * Callers:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800802F8 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x180080750 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ??0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x180080CE8 (--0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::Create(
        struct IDXGIAdapter *a1,
        unsigned int a2,
        struct CDXGIAdapterLimited **a3)
{
  CDXGIAdapterLimited *v6; // rax
  unsigned int v7; // ecx
  CDXGIAdapterLimited *v8; // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi

  v6 = (CDXGIAdapterLimited *)operator new(0x190uLL);
  if ( v6 )
    v8 = CDXGIAdapterLimited::CDXGIAdapterLimited(v6, a2, a1);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (**(void (__fastcall ***)(CDXGIAdapterLimited *))v8)(v8);
    v9 = CDXGIAdapterLimited::Initialize(v8);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5Cu);
    }
    else
    {
      *a3 = v8;
      (**(void (__fastcall ***)(CDXGIAdapterLimited *))v8)(v8);
    }
    (*(void (__fastcall **)(CDXGIAdapterLimited *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x58u);
  }
  return v11;
}
