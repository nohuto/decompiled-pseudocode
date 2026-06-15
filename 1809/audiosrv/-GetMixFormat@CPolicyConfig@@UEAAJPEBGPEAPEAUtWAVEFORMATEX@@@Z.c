/*
 * XREFs of ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800D2AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetMixFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct tWAVEFORMATEX **a3)
{
  int MixFormat; // ebx
  int (*v5)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v7; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  MixFormat = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                a2,
                0LL,
                0LL,
                &v8);
  if ( MixFormat >= 0 )
  {
    v7 = GUID_00000000_0000_0000_0000_000000000000;
    MixFormat = CEndpointCharacteristics::GetMixFormat(v8, eHostProcessConnector, &v7, v5, a3);
  }
  if ( v8 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)MixFormat;
}
