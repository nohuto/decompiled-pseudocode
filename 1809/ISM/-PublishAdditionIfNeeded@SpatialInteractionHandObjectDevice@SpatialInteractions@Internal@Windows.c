/*
 * XREFs of ?PublishAdditionIfNeeded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800BF8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::PublishAdditionIfNeeded(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  _QWORD *v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[10]; // [rsp+30h] [rbp-3C8h] BYREF
  _BYTE v9[934]; // [rsp+3Ah] [rbp-3BEh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+0h]

  *((_DWORD *)this + 56) = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a2 + 40LL))(a2);
  memset_0(v8, 0, 0x3A4uLL);
  v4 = (_QWORD *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v4 = (_QWORD *)*v4;
  _o_wcscpy_s(v9, 200LL, v4);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, __int64, _QWORD, _BYTE *))(*(_QWORD *)a2 + 56LL))(
         a2,
         512LL,
         *((unsigned int *)this + 56),
         v8);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x221,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
