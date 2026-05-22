/*
 * XREFs of ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x18015E110
 * Callers:
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1801589BC (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C020 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800DC1A0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1801500F0 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ?DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEAXK0KPEAU_OVERLAPPED@@@Z @ 0x180154FE4 (-DeviceIoControlOverlapped@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPE.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1801589BC (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::StartIo(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct _OVERLAPPED *v5; // rsi
  __int64 v6; // rcx
  unsigned int v7; // edi
  const char *v8; // r9
  char *v9; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_DWORD *)this + 26) == -2147023899 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      105LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      a4);
    __debugbreak();
  }
  *((_DWORD *)this + 26) = -2147023899;
  v5 = (struct _OVERLAPPED *)((char *)this + 8);
  memset_0((char *)this + 8, 0, 0x20uLL);
  v6 = *((_QWORD *)this + 11);
  if ( (unsigned __int64)(v6 - *((_QWORD *)this + 10)) < 0xC )
  {
    std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
      (void **)this + 10,
      0xCuLL);
    v6 = *((_QWORD *)this + 11);
  }
  v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlOverlapped(
         *((Windows::Internal::Holographic::HolographicDriverHandleWrapper **)this + 5),
         *((_DWORD *)this + 12),
         *((void **)this + 7),
         *((_DWORD *)this + 16),
         *((void **)this + 10),
         (int)v6 - *((_DWORD *)this + 20),
         v5);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x7D,
    (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
    (const char *)((v7 & 0x80000000) == 0),
    (void *)"IO on handle bound to completion port shouldn't succeed synchronously",
    v9);
  if ( v7 != -2147023899 )
    Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(this, v7, 0LL, v8);
}
