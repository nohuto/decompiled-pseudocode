/*
 * XREFs of ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1801110C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x180107AEC (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180110C60 (--$As@UIAudioProcessingObjectInternal@@@-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetExtendedProperties(
        CCompositeSystemEffect *this,
        enum EXTENDED_APO_FLAGS *a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v7 = 0LL;
  v4 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                   (__int64)this + 48,
                   0);
  if ( (int)Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(v4, &v7) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v7 + 24LL))(v7, a2);
    if ( v5 < 0 )
      v2 = v5;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v7);
  return v2;
}
