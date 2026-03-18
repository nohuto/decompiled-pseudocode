/*
 * XREFs of _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C01090CC
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00E882C (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C010831C (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0109094 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01FBF20 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211A10 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C0239FB8 (-ArrangementCompleted@NotifyShell@@YA_NPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023A164 (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x1C023A204 (-WindowSizingCompleted@NotifyShell@@YAXPEAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

bool __fastcall anonymous_namespace_::NotifyShellSimplePayload(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  int v7; // [rsp+2Ch] [rbp-3Ch]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v7 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v5 = a1;
  v6 = a2;
  v8 = a3;
  v9 = a4;
  return (unsigned int)anonymous_namespace_::NotifyIAMWindowManagementEvent(&v5) != 0;
}
