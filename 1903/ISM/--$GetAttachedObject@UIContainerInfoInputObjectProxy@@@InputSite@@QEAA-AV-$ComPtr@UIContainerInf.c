/*
 * XREFs of ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800C1AC8
 * Callers:
 *     ?GetContainerIdFromInputSitesList@@YA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUCONTAINER_ID@@@Z @ 0x1800C345C (-GetContainerIdFromInputSitesList@@YA_NAEBV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$all.c)
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x180107EE0 (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 * Callees:
 *     ??$As@UIContainerInfoInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800668E4 (--$As@UIContainerInfoInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-.c)
 */

__int64 *__fastcall InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 392);
  v4 = *(_QWORD *)(a1 + 400);
  while ( v3 != v4
       && (int)Microsoft::WRL::ComPtr<IUnknown>::As<IContainerInfoInputObjectProxy>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8),
                 a2) < 0 )
    v3 += 16LL;
  return a2;
}
