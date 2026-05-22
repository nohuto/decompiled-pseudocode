/*
 * XREFs of ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x180107968
 * Callers:
 *     ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180007EE0 (-OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextual.c)
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x180106FA0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180107180 (-OnHitTest@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProces.c)
 *     ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180107650 (-DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180027B40 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsValid(InputRedirectionTarget *this)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-38h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    memset_0(v3, 0, sizeof(v3));
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 4) + 120LL))(
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5),
           v3) < 0
      || !operator==((__int64)v3, (__int64)this + 72) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 152LL))(
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  return *((_QWORD *)this + 5) != 0LL;
}
