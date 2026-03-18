/*
 * XREFs of ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x180197E58
 * Callers:
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180197E10 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(
        BamoImpl::BamoDataProviderProxyImpl *this)
{
  __int64 v1; // r8
  __int64 v2; // r10
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+30h] [rbp-28h]
  __int64 v6; // [rsp+38h] [rbp-20h]
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v5 = *((_DWORD *)this + 10);
    v7[0] = *(unsigned int *)(v1 + 36);
    v7[1] = *((unsigned int *)this + 6);
    LOWORD(v4) = 4;
    v3 = CoreUICallSend(*(_QWORD *)(v2 + 48), v7, 2LL, 0LL, v4, &unk_1802BA8B5, v5, v6);
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1F2F,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v3);
      __debugbreak();
    }
  }
}
