/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18009A440
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180022400 (-Release@-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedActivationFactory<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider,0>>(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        signed __int32 **a4)
{
  __int64 v4; // rdi
  signed __int32 *v9; // rax
  signed __int32 *v10; // rbx
  bool v11; // zf
  signed __int32 v12; // edx
  int v13; // edx
  signed __int32 *v14; // rcx
  signed __int32 v15; // eax
  unsigned int v16; // ebx

  v4 = 0LL;
  v9 = (signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 3) = 0LL;
    v11 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v9[3] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
    v9[8] = 4;
    if ( !v11 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v9 = &Microsoft::WRL::SimpleSealedActivationFactory<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider,0>::`vftable';
    v12 = v9[3];
    if ( v12 == 0x7FFFFFFF )
      goto LABEL_9;
    do
    {
      if ( v12 == _InterlockedCompareExchange(v9 + 3, v12 + 1, v12) )
        break;
      v12 = v9[3];
    }
    while ( v12 != 0x7FFFFFFF );
    if ( v12 == 0x7FFFFFFF )
LABEL_9:
      v13 = 0x7FFFFFFF;
    else
      v13 = v12 + 1;
    if ( (v9[8] & 4) == 0 && v13 == 2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = (__int64)v9;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release((__int64)v9);
    v14 = v10;
    if ( *a3 != 53
      || a3[1] != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
      || a3[2] != *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
      || a3[3] != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
    {
      v16 = -2147467262;
      goto LABEL_25;
    }
    *a4 = v10;
    if ( (*a1 & 4) == 0 )
    {
      do
        v15 = v10[3];
      while ( v15 != 0x7FFFFFFF && v15 != _InterlockedCompareExchange(v10 + 3, v15 + 1, v15) );
    }
    v4 = 0LL;
    v10[8] = *(_DWORD *)a1;
    *((_QWORD *)v10 + 3) = a2;
    v16 = 0;
  }
  else
  {
    v16 = -2147024882;
  }
  v14 = 0LL;
LABEL_25:
  if ( v14 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  return v16;
}
