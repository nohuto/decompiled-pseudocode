/*
 * XREFs of PoSessionPowerControl @ 0x1408B5C30
 * Callers:
 *     TtmpSessionPowerControl @ 0x1408BE6A0 (TtmpSessionPowerControl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x14072ABA0 (PopBlockSessionSwitch.c)
 */

ULONG __fastcall PoSessionPowerControl(unsigned __int8 a1, int a2, int a3)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  ULONG v7; // [rsp+70h] [rbp+20h] BYREF
  int v8; // [rsp+80h] [rbp+30h] BYREF
  __int64 v9; // [rsp+88h] [rbp+38h] BYREF

  v8 = a3;
  memset(v6, 0, 0x28uLL);
  v9 = 0LL;
  PopBlockSessionSwitch(1, &v7);
  v6[2] = &v9;
  HIDWORD(v9) = a2;
  LODWORD(v9) = a1;
  v6[0] = 6LL;
  v6[1] = 8LL;
  v6[3] = 0LL;
  v6[4] = 0LL;
  PopInvokeWin32Callout(5, (__int64)v6, 1, &v8);
  return PopBlockSessionSwitch(0, &v7);
}
