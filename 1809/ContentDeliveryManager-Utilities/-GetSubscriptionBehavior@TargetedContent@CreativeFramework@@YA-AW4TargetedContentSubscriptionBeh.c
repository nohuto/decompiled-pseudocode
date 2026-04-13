/*
 * XREFs of ?GetSubscriptionBehavior@TargetedContent@CreativeFramework@@YA?AW4TargetedContentSubscriptionBehavior@12@PEBG@Z @ 0x18002688C
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x1800394F4 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A9FE0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::TargetedContent::GetSubscriptionBehavior(__int64 a1)
{
  char *v1; // rcx
  void **v2; // rbx
  _BYTE *v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-19h] BYREF
  __int128 v6; // [rsp+30h] [rbp-11h]
  __int64 v7; // [rsp+40h] [rbp-1h]
  __int128 v8; // [rsp+48h] [rbp+7h] BYREF
  __int128 v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+27h]
  _BYTE v11[24]; // [rsp+70h] [rbp+2Fh] BYREF
  char *v12; // [rsp+88h] [rbp+47h]

  v7 = -2LL;
  v5 = a1;
  v8 = *(_OWORD *)&off_1800E2700;
  v9 = xmmword_1800E2710;
  v10 = 3600LL;
  *(_QWORD *)&v6 = &v5;
  *((_QWORD *)&v6 + 1) = &v8;
  v12 = 0LL;
  v1 = (char *)operator new(0x20uLL);
  if ( !v1 )
    std::_Xbad_alloc();
  *(_QWORD *)v1 = off_1800D77B0;
  *(_OWORD *)(v1 + 8) = v6;
  v12 = v1;
  v2 = (void **)off_1800D74A0;
  while ( 1 )
  {
    if ( !v1 )
      std::_Xbad_function_call();
    if ( !(*(unsigned __int8 (__fastcall **)(char *, void **))(*(_QWORD *)v1 + 16LL))(v1, v2) )
      break;
    v2 += 5;
    if ( v2 == &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'} )
      break;
    v1 = v12;
  }
  if ( v12 )
  {
    v3 = v11;
    LOBYTE(v3) = v12 != v11;
    (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v12 + 32LL))(v12, v3);
  }
  result = (unsigned int)v9;
  if ( (v9 & 0x80) != 0 )
    return (unsigned int)v9 | 1;
  return result;
}
