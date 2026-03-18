/*
 * XREFs of NtUserPromotePointer @ 0x1C0233290
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxPromotePointerToMouse @ 0x1C01F1528 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall NtUserPromotePointer(int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx

  EnterCrit(0LL, 1LL);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_15;
  v7 = a2 & 0xFFFFFF;
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    if ( v7 <= 0x10000
      || v7 > 0x10002 && (v7 <= 0x20000 || v7 > 0x20002 && (v7 <= 0x40000 || v7 > 0x40002 && v7 - 524289 > 1)) )
    {
      goto LABEL_15;
    }
  }
  else if ( a2 )
  {
LABEL_15:
    v9 = 0;
    UserSetLastError(87LL, v4, v5, v6);
    goto LABEL_16;
  }
  v9 = xxxPromotePointerToMouse(a1, a2);
  if ( !v9 )
    goto LABEL_15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
