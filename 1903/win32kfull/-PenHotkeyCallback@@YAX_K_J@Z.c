/*
 * XREFs of ?PenHotkeyCallback@@YAX_K_J@Z @ 0x1C0163C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenHotkeyCallback(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = a1 - 30;
  if ( !v1 )
    goto LABEL_9;
  v2 = v1 - 1;
  if ( !v2 )
    goto LABEL_8;
  v3 = v2 - 1;
  if ( !v3 )
  {
    HIDWORD(v5) = 2;
    goto LABEL_9;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    LODWORD(v5) = 1;
LABEL_8:
    HIDWORD(v5) = 1;
    goto LABEL_9;
  }
  if ( v4 != 1 )
    return;
  v5 = 1LL;
LABEL_9:
  SendMessageTo(16LL, &v5);
}
