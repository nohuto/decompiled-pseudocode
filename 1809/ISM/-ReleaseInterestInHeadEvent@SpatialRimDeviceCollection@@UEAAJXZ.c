/*
 * XREFs of ?ReleaseInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180061900
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800615FC (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::ReleaseInterestInHeadEvent(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  const char *v3; // r9
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = *((_DWORD *)this + 20);
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v3);
    JUMPOUT(0x180061966LL);
  }
  v5 = v4 - 1;
  *((_DWORD *)this + 20) = v5;
  if ( !v5 )
    SpatialRimDeviceCollection::DisableHeadEventHandler((SpatialRimDeviceCollection *)((char *)this - 2760));
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
