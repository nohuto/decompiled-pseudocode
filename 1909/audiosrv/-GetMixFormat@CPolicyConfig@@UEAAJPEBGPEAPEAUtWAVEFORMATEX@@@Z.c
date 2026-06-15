/*
 * XREFs of ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800DF1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B840 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetMixFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct tWAVEFORMATEX **a3)
{
  int MixFormat; // ebx
  struct _GUID v6; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  MixFormat = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                a2,
                0LL,
                0LL,
                &v7);
  if ( MixFormat >= 0 )
  {
    v6 = GUID_00000000_0000_0000_0000_000000000000;
    MixFormat = CEndpointCharacteristics::GetMixFormat(v7, eHostProcessConnector, &v6, a3);
  }
  if ( v7 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)MixFormat;
}
