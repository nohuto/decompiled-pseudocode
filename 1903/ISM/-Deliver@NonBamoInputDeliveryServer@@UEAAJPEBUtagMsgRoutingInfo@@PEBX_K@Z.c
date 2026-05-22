/*
 * XREFs of ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180027A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180027B40 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::Deliver(
        NonBamoInputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        const void *a3,
        int a4)
{
  const char *v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r9
  unsigned __int64 v11; // r11
  __int64 i; // r10
  __int64 v13; // rax
  __int64 *v14; // r10
  __int64 v15; // r10
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // rax
  _BYTE v20[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  memset_0(v20, 0, 0x28uLL);
  if ( *(_OWORD *)a2 == 0LL && !*((_QWORD *)a2 + 2) )
  {
    v19 = *((_QWORD *)a2 + 3) - v21;
    if ( !v19 )
      v19 = *((_QWORD *)a2 + 4) - v22;
    if ( !v19 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        v8);
      __debugbreak();
    }
  }
  v9 = *((_QWORD *)this + 28);
  v10 = *((_QWORD *)this + 26);
  v11 = 2 * (*((_QWORD *)this + 31) & (*((unsigned int *)a2 + 1) | ((unsigned __int64)*(unsigned int *)a2 << 32)));
  for ( i = *(_QWORD *)(v9
                      + 16
                      * (*((_QWORD *)this + 31) & (*((unsigned int *)a2 + 1) | ((unsigned __int64)*(unsigned int *)a2 << 32))));
        ;
        i = *v14 )
  {
    v13 = *(_QWORD *)(v9 + 8 * v11) == v10 ? v10 : **(_QWORD **)(v9 + 8 * v11 + 8);
    if ( i == v13 )
      break;
    if ( (unsigned __int8)operator==(i + 16, a2) )
    {
      if ( (unsigned __int8)operator==(a2, v14 + 2) )
        v10 = v15;
      break;
    }
  }
  if ( v10 == *((_QWORD *)this + 26) )
    return 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const void *, int))(**((_QWORD **)this + 8) + 64LL))(
          *((_QWORD *)this + 8),
          *(_QWORD *)(v10 + 56),
          HIDWORD(*(_QWORD *)(v10 + 56)),
          a3,
          a4);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
