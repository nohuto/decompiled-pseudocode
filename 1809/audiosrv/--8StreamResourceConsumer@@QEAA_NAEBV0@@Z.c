/*
 * XREFs of ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x18013DF50
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180030950 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x18013E7E4 (-GetNode@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 * Callees:
 *     ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x1800F62B4 (-SimpleWildcardStringCompare@@YAHQEBG_K01@Z.c)
 */

char __fastcall StreamResourceConsumer::operator==(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rax

  v5 = 0;
  if ( !(unsigned int)_o__wcsicmp(a1 + 16, a2 + 16)
    && (unsigned int)SimpleWildcardStringCompare((const wchar_t *)(a1 + 418), v4, (const wchar_t *)(a2 + 418))
    && *(_DWORD *)(a1 + 940) == *(_DWORD *)(a2 + 940) )
  {
    v6 = *(_QWORD *)(a1 + 944) - *(_QWORD *)(a2 + 944);
    if ( !v6 )
      v6 = *(_QWORD *)(a1 + 952) - *(_QWORD *)(a2 + 952);
    if ( !v6 && *(_DWORD *)(a1 + 960) == *(_DWORD *)(a2 + 960) )
      return 1;
  }
  return v5;
}
