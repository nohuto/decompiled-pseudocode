/*
 * XREFs of ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x18002F220
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18002EF58 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001517C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ApplicationSpecificEndpointInfo::DoesStringRepresentAPositiveNumber(const unsigned __int16 *a1)
{
  bool v1; // si
  int *v2; // rax
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // rbx
  int *v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    (void **)&v7,
    (__int64)a1);
  v2 = v7;
  v3 = *(v7 - 4);
  if ( (int)v3 > 0 )
  {
    v4 = 0;
    v5 = 0LL;
    while ( 1 )
    {
      if ( v5 < 0 || v4 > *(v2 - 4) )
        ATL::AtlThrowImpl(-2147024809);
      if ( !IsCharAlphaNumericW(*((_WORD *)v2 + v5)) )
        break;
      if ( v4 > *(v7 - 4) )
        ATL::AtlThrowImpl(-2147024809);
      if ( IsCharAlphaW(*((_WORD *)v7 + v5)) )
        break;
      ++v4;
      ++v5;
      v2 = v7;
      if ( v5 >= v3 )
        goto LABEL_9;
    }
    v2 = v7;
LABEL_9:
    v1 = v4 == (_DWORD)v3;
  }
  if ( _InterlockedExchangeAdd(v2 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v2 - 3) + 8LL))(*((_QWORD *)v2 - 3));
  return v1;
}
