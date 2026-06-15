/*
 * XREFs of ?FreeNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18002D784
 * Callers:
 *     ?RemoveNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18002C300 (-RemoveNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?RemoveAll@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXXZ @ 0x1800D7C20 (-RemoveAll@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002DBA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800D7818 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 *     ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x1800D7AEC (-Rehash@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V.c)
 */

void __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FreeNode(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  unsigned int v8; // eax

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  ATL::CStringData::Release((ATL::CStringData *)(a2[9] - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(a2[5] - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(a2[2] - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(a2[1] - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*a2 - 24LL));
  a2[11] = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  v5 = v4;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v8 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::Rehash(
      a1,
      v8);
    v5 = *(_QWORD *)(a1 + 8);
  }
  if ( !v5 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v6 = *(_QWORD **)(a1 + 56);
    if ( v6 )
    {
      do
      {
        v7 = (_QWORD *)*v6;
        free(v6);
        v6 = v7;
      }
      while ( v7 );
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
}
