/*
 * XREFs of ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800225D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180022BA0 (-Release@-$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Microsoft::WRL::SimpleSealedActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,0>>(
        _BYTE *a1,
        __int64 a2,
        _DWORD *a3,
        signed __int32 **a4)
{
  signed __int32 *v4; // rdi
  signed __int32 *v9; // rax
  __int64 v10; // rdx
  signed __int32 *v11; // rbx
  bool v12; // zf
  signed __int32 v13; // edx
  __int64 v14; // rdx
  signed __int32 *v15; // rcx
  signed __int32 v16; // eax
  unsigned int v17; // ebx

  v4 = 0LL;
  v9 = (signed __int32 *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 3) = 0LL;
    v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v9[3] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
    v9[8] = 4;
    if ( !v12 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v9 = &Microsoft::WRL::SimpleSealedActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,0>::`vftable';
    v13 = v9[3];
    if ( v13 == 0x7FFFFFFF )
      goto LABEL_9;
    do
    {
      if ( v13 == _InterlockedCompareExchange(v9 + 3, v13 + 1, v13) )
        break;
      v13 = v9[3];
    }
    while ( v13 != 0x7FFFFFFF );
    if ( v13 == 0x7FFFFFFF )
LABEL_9:
      v14 = 0x7FFFFFFFLL;
    else
      v14 = (unsigned int)(v13 + 1);
    if ( (v9[8] & 4) == 0 && (_DWORD)v14 == 2 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v9;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      v9,
      v14);
    v15 = v11;
    if ( *a3 != 53
      || a3[1] != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
      || a3[2] != *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
      || a3[3] != *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
    {
      v17 = -2147467262;
      goto LABEL_25;
    }
    *a4 = v11;
    if ( (*a1 & 4) == 0 )
    {
      do
        v16 = v11[3];
      while ( v16 != 0x7FFFFFFF && v16 != _InterlockedCompareExchange(v11 + 3, v16 + 1, v16) );
    }
    v4 = 0LL;
    v11[8] = *(_DWORD *)a1;
    *((_QWORD *)v11 + 3) = a2;
    v17 = 0;
  }
  else
  {
    v17 = -2147024882;
  }
  v15 = 0LL;
LABEL_25:
  if ( v15 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      v4,
      v10);
  return v17;
}
