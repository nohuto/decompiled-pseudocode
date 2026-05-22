/*
 * XREFs of ?CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x180153780
 * Callers:
 *     ?CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJXZ @ 0x18003A0E0 (-CheckHandleStatus@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandleStatus@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJXZ @ 0x180153738 (-CheckHandleStatus@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::CheckHandleStatus(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  RTL_SRWLOCK *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 12);
  v2 = 0;
  if ( v1 )
  {
    v3 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::CheckHandleStatus(v1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  else
  {
    v2 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B4,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070006LL);
  }
  return v2;
}
