/*
 * XREFs of ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x180158BBC
 * Callers:
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x180154CE4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z @ 0x180159748 (-IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::HandleIoctlTimeout(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        struct _OVERLAPPED *a2,
        unsigned int a3,
        __int64 a4,
        struct _GUID *a5,
        unsigned int a6,
        unsigned int *lpNumberOfBytesTransferred)
{
  const WCHAR *pwsz; // rdi
  unsigned int v8; // ebx
  struct _GUID v12; // xmm0
  __int64 v13; // rcx
  HolographicDriverClientTrace *v14; // rcx
  struct _GUID v16; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-20h] BYREF

  pwsz = (const unsigned __int16 *)((char *)&word_180182F5B + 1);
  v8 = 0;
  *(_QWORD *)&v16.Data1 = 0LL;
  *(_QWORD *)v16.Data4 = 0LL;
  v17 = (struct _GUID)0LL;
  *lpNumberOfBytesTransferred = 0;
  switch ( a3 )
  {
    case 0x5B4404u:
      goto LABEL_12;
    case 0x5B8414u:
      goto LABEL_10;
    case 0x5B8418u:
      v12 = a5[1];
      v16 = *a5;
      goto LABEL_13;
    case 0x5B841Cu:
      pwsz = (const WCHAR *)a5;
      break;
    case 0x5B8430u:
LABEL_10:
      v16 = *a5;
      break;
    case 0x5B8458u:
      v16 = *a5;
LABEL_12:
      v12 = *a5;
LABEL_13:
      v17 = v12;
      break;
    case 0x5B880Cu:
    case 0x5B8810u:
    case 0x5B8814u:
      goto LABEL_10;
  }
  if ( HolographicDriverClientTrace::IsEnabled((unsigned __int8)this, (unsigned __int64)a5) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v13,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::IoctlTimeout_(
      v14,
      (const struct _GUID *)((char *)this + 12),
      a3,
      0x1388u,
      &v16,
      (const struct SPATIAL_NODE_ID *)&v17,
      pwsz);
  }
  if ( !GetOverlappedResultEx(*((HANDLE *)this + 17), a2, lpNumberOfBytesTransferred, 0xFFFFFFFF, 0) )
    return GetLastError();
  return v8;
}
