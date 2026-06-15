/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x180032DF8
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180032110 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000F790 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180037752 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18003807B (memmove_0.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        __int64 *a1,
        signed int a2,
        int a3)
{
  int v3; // r9d
  _DWORD *v5; // rcx
  signed int v7; // edx
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  char *v11; // rdx

  v3 = 0;
  v5 = (_DWORD *)*a1;
  if ( a3 >= 0 )
    v3 = a3;
  v7 = *(v5 - 4);
  if ( 0x7FFFFFFF - v3 >= 0 )
    a2 = v3;
  if ( (0x7FFFFFFF - v3) >> 31 == -1 )
    ATL::AtlThrowImpl(((0x7FFFFFFF - v3) >> 31) & 0x80070057);
  v8 = *(v5 - 4);
  if ( a2 <= v7 )
    v8 = v3;
  if ( v8 > 0 )
  {
    v9 = v7 - v8;
    v10 = v7 - v8 + 1;
    if ( (int)*(v5 - 2) > 1 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Fork(a1, v7);
      v5 = (_DWORD *)*a1;
    }
    v11 = (char *)v5 + 2 * v8;
    if ( 2LL * v10 )
    {
      if ( !v5 || !v11 )
      {
        *(_DWORD *)_o__errno(v5, v11) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v5, v11, 2LL * v10);
    }
    if ( v9 < 0 || v9 > *(_DWORD *)(*a1 - 12) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*a1 - 16) = v9;
    *(_WORD *)(*a1 + 2LL * v9) = 0;
    v5 = (_DWORD *)*a1;
  }
  return (unsigned int)*(v5 - 4);
}
