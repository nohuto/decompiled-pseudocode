/*
 * XREFs of ?Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z @ 0x1800E6774
 * Callers:
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800E66D8 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::Init(void **this, enum D2D1_FACTORY_TYPE a2, struct D2D1_FACTORY_OPTIONS a3)
{
  HRESULT v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  D2D1_FACTORY_OPTIONS v10; // [rsp+50h] [rbp+18h] BYREF

  v10.debugLevel = a3.debugLevel;
  v4 = D2D1CreateFactory(D2D1_FACTORY_TYPE_MULTI_THREADED, &GUID_bb12d362_daee_4b9a_aa1d_14ba401cfa1f, &v10, this + 3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xDAu, 0LL);
  }
  else
  {
    v7 = (**(__int64 (__fastcall ***)(void *, GUID *, char *))this[3])(
           this[3],
           &GUID_6f72c0a2_6db7_46e9_9b62_b58a23f4928b,
           (char *)this + 32);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xDEu, 0LL);
    else
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)this[4] + 48LL))(this[4], 0LL);
  }
  return v6;
}
