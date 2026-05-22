/*
 * XREFs of ??$make_unique_cotaskmem_nothrow@$$BY0A@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@wil@@YA?AV?$unique_ptr@$$BY0A@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x18015098C
 * Callers:
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x180156A70 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall wil::make_unique_cotaskmem_nothrow<HOLOGRAPHIC_DEVICE_ERROR_STATUS [0]>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      4764LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      a4);
    __debugbreak();
  }
  v5 = 2 * a2;
  v6 = CoTaskMemAlloc(16 * a2);
  *a1 = v6;
  if ( v6 )
  {
    v7 = &v6[v5];
    while ( v6 != v7 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6 += 2;
    }
  }
  return a1;
}
