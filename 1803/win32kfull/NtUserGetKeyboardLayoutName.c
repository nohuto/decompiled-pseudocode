/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x1C0106650
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2) + 432);
  v8 = 0;
  if ( v5 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_DWORD *)&String.Length = *(_DWORD *)a1;
    String.Buffer = *(PWSTR *)(a1 + 8);
    ProbeForWrite(String.Buffer, String.MaximumLength, 2u);
    if ( (*(_WORD *)(v5 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v5 + 40), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v5 + 112), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        UserSetLastError(87LL, v3);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v8 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v8;
}
