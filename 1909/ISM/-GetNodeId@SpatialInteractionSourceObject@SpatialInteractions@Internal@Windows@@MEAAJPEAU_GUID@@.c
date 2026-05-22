/*
 * XREFs of ?GetNodeId@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@MEAAJPEAU_GUID@@@Z @ 0x1800EC5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::GetNodeId(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this,
        struct _GUID *a2)
{
  int v4; // ebx
  __int64 result; // rax
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v7; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  memset_0(v6, 0, 0x20uLL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, void *, _BYTE *, __int64, _QWORD))(**((_QWORD **)this + 15) + 72LL))(
         *((_QWORD *)this + 15),
         &SPATIALPROP_DynamicNode,
         v6,
         32LL,
         0LL);
  if ( v4 >= 0 )
  {
    result = 0LL;
    *a2 = v7;
  }
  else
  {
    result = 2147942450LL;
    if ( v4 != -2147024846 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
  }
  return result;
}
