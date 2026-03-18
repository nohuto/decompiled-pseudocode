/*
 * XREFs of xxxCallMouseHook @ 0x1C0111180
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C0055270 (PhkFirstValid.c)
 */

_BOOL8 xxxCallMouseHook()
{
  struct tagHOOK *Valid; // rax
  unsigned int v1; // r11d
  int *v2; // r9
  unsigned int v3; // r10d
  int v5; // [rsp+40h] [rbp+8h] BYREF

  Valid = (struct tagHOOK *)PhkFirstValid(gptiCurrent, 7);
  return xxxCallHook2(Valid, v3, v1, v2, &v5, 0) != 0;
}
