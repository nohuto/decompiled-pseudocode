/*
 * XREFs of PoSessionBuiltinPanelState @ 0x140303CE0
 * Callers:
 *     TtmpCallSetBuiltinPanelState @ 0x1408BB4D8 (TtmpCallSetBuiltinPanelState.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x140729830 (PopBlockSessionSwitch.c)
 */

__int64 __fastcall PoSessionBuiltinPanelState(int a1, int a2)
{
  __int64 v3; // rcx
  _QWORD v5[6]; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+70h] [rbp+20h] BYREF
  int v7; // [rsp+78h] [rbp+28h] BYREF
  char v8; // [rsp+80h] [rbp+30h] BYREF

  v7 = a2;
  memset(v5, 0, 0x28uLL);
  LOBYTE(v3) = 1;
  v6 = 0;
  PopBlockSessionSwitch(v3, &v8);
  v6 = a1;
  v5[2] = &v6;
  v5[0] = 7LL;
  v5[1] = 4LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  ((void (__fastcall *)(__int64, _QWORD *, __int64, int *))PopInvokeWin32Callout)(5LL, v5, 1LL, &v7);
  return PopBlockSessionSwitch(0LL, &v8);
}
