/*
 * XREFs of NtUserPromotePointer @ 0x1C01F3AB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxPromotePointerToMouse @ 0x1C01B8BB0 (xxxPromotePointerToMouse.c)
 */

__int64 __fastcall NtUserPromotePointer(int a1, int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  if ( !a1 || HIWORD(a1) || (unsigned __int16)a1 == 1 )
    goto LABEL_15;
  v5 = a2 & 0xFFFFFF;
  if ( (a2 & 0xFFFFFF) != 0 )
  {
    if ( v5 <= 0x10000
      || v5 > 0x10002 && (v5 <= 0x20000 || v5 > 0x20002 && (v5 <= 0x40000 || v5 > 0x40002 && v5 - 524289 > 1)) )
    {
      goto LABEL_15;
    }
  }
  else if ( a2 )
  {
LABEL_15:
    v7 = 0;
    UserSetLastError(87LL, v4);
    goto LABEL_16;
  }
  v7 = xxxPromotePointerToMouse(a1);
  if ( !v7 )
    goto LABEL_15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v6, v4, v8, v9);
  return v7;
}
