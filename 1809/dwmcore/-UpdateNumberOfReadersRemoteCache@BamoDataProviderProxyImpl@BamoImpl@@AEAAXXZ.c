/*
 * XREFs of ?UpdateNumberOfReadersRemoteCache@BamoDataProviderProxyImpl@BamoImpl@@AEAAXXZ @ 0x1801712C8
 * Callers:
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180171280 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateNumberOfReadersRemoteCache(
        BamoImpl::BamoDataProviderProxyImpl *this)
{
  __int64 v1; // r8
  __int64 v2; // r10
  unsigned int v3; // eax
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 24LL);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v4[0] = *(unsigned int *)(v1 + 36);
    v4[1] = *((unsigned int *)this + 6);
    v3 = CoreUICallSend(*(_QWORD *)(v2 + 48), v4, 2LL, 0LL, 4, &unk_18027732D);
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
