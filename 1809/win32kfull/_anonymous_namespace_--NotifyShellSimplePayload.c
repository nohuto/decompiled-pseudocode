/*
 * XREFs of _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00DFFF8 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0108034 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0122E60 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C01573A4 (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01E68E0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E95E8 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01FB15C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

bool __fastcall anonymous_namespace_::NotifyShellSimplePayload(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD v9[7]; // [rsp+20h] [rbp-68h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = a1;
  LODWORD(v9[1]) = a2;
  v9[2] = a3;
  v9[3] = a4;
  return (unsigned int)anonymous_namespace_::NotifyIAMWindowManagementEvent() != 0;
}
