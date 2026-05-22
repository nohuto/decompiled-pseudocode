/*
 * XREFs of ?FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCSourceDeviceInfo@@@Z @ 0x1800F4770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800E254C (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1800F70B0 (-StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::FillDeviceInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct MPCSourceDeviceInfo *a2)
{
  __int64 v4; // rax
  bool DynamicNodeInfo; // al
  const wchar_t *StringRawBuffer; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  UINT32 length; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  memset_0(a2, 0, 0x3B8uLL);
  *(_DWORD *)a2 = *((_DWORD *)this + 3);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 104LL))(*((_QWORD *)this + 14));
  _o_wcscpy_s((char *)a2 + 10, 200LL, v4);
  *(_OWORD *)((char *)a2 + 412) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(
                                               *((_QWORD *)this + 15),
                                               v14);
  *((_DWORD *)a2 + 229) = 1065353216;
  *((_DWORD *)a2 + 236) = 1065353216;
  DynamicNodeInfo = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
                      this,
                      (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v13);
  *((_BYTE *)a2 + 428) = DynamicNodeInfo;
  if ( !DynamicNodeInfo )
    return 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 12), &length);
  v7 = length;
  *((_OWORD *)a2 + 52) = v13;
  v9 = StringCchCopyNW((wchar_t *)a2 + 215, v8, StringRawBuffer, v7);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
