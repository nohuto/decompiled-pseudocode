/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023A01C
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A124 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023A25C (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyShellWindowPosChangedCommon(_QWORD *a1, char a2, char a3, int a4)
{
  int v8; // ecx
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // r8
  _QWORD v13[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v13, 0, sizeof(v13));
  v8 = 0;
  v9 = a1[5];
  v13[0] = *a1;
  LODWORD(v13[1]) = a4;
  LODWORD(v13[2]) = a2 != 0;
  v10 = *(_BYTE *)(v9 + 31);
  if ( (v10 & 1) != 0 )
  {
    v8 = 1;
  }
  else if ( (v10 & 0x20) != 0 )
  {
    v8 = 2;
  }
  else if ( a3 && (*(_BYTE *)(v9 + 233) & 3) != 0 )
  {
    v8 = 3;
  }
  v11 = a1[3];
  HIDWORD(v13[2]) = v8;
  TransformRectBetweenCoordinateSpaces(&v13[3], v9 + 88, *(_QWORD *)(v11 + 328), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent((__int64)v13);
}
