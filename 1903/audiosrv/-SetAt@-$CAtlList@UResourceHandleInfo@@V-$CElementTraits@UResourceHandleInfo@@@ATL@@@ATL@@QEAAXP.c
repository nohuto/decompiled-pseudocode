/*
 * XREFs of ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x180101FFC
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800FFCC4 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180100DC8 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101DF8 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x180102224 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_OWORD *__fastcall ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v3; // rcx
  _OWORD *result; // rax
  __int128 v5; // xmm1

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = 9LL;
  result = (_OWORD *)(a2 + 16);
  do
  {
    *result = *a3;
    result[1] = a3[1];
    result[2] = a3[2];
    result[3] = a3[3];
    result[4] = a3[4];
    result[5] = a3[5];
    result[6] = a3[6];
    result += 8;
    v5 = a3[7];
    a3 += 8;
    *(result - 1) = v5;
    --v3;
  }
  while ( v3 );
  *result = *a3;
  result[1] = a3[1];
  result[2] = a3[2];
  result[3] = a3[3];
  result[4] = a3[4];
  return result;
}
