/*
 * XREFs of ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C0137270
 * Callers:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C01373D8 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1C013732C (-TransformWindowTrackInfo@ShellWindowManagement@@YAXPEAUtagWND@@PEAUtagSIZE@@1W4TransformWindowT.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall NotifyShell::TrackedWindowTrackingInfo(
        NotifyShell *this,
        struct tagWND *a2,
        const struct tagMINMAXINFO *const a3)
{
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v7[7]; // [rsp+30h] [rbp-40h] BYREF

  memset(v7, 0, sizeof(v7));
  v5 = *((_QWORD *)a2 + 4);
  v6 = *((_QWORD *)a2 + 3);
  v7[0] = *(_QWORD *)this;
  LODWORD(v7[1]) = 1;
  ShellWindowManagement::TransformWindowTrackInfo(this, &v5, &v6, 0LL);
  v7[3] = v5;
  v7[2] = v6;
  LOWORD(v7[4]) = *(_WORD *)(*((_QWORD *)this + 5) + 284LL);
  anonymous_namespace_::NotifyIAMWindowManagementEvent((__int64)v7);
}
