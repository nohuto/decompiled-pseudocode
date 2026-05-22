/*
 * XREFs of ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1800D1E84
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800D1080 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800D15E0 (-OnHitTest@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProces.c)
 *     ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800D1760 (-OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUContextual.c)
 *     ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800D1F30 (-DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180090A90 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsValid(InputRedirectionTarget *this)
{
  bool v2; // al
  _DWORD v4[10]; // [rsp+20h] [rbp-38h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    memset_0(v4, 0, sizeof(v4));
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)this + 4) + 112LL))(
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5),
           v4) < 0
      || (v4[0] != *((_DWORD *)this + 18) ? (v2 = 0) : (v2 = operator==((__int64)v4, (__int64)this + 72)), !v2) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 144LL))(
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  return *((_QWORD *)this + 5) != 0LL;
}
