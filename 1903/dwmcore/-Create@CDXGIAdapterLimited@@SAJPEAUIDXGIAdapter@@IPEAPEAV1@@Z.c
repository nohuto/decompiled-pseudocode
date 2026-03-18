/*
 * XREFs of ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800A7FBC
 * Callers:
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800A7C18 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800A805C (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ??0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x1800A8590 (--0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::Create(
        struct IDXGIAdapter *a1,
        unsigned int a2,
        struct CDXGIAdapterLimited **a3)
{
  CDXGIAdapterLimited *v6; // rax
  __int64 v7; // rcx
  CDXGIAdapterLimited *v8; // rbx
  signed int v9; // eax
  __int64 v10; // rcx
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
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x59u, 0LL);
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x55u, 0LL);
  }
  return v11;
}
