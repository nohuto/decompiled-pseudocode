/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x1C010B110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3) + 432);
  v6 = 0;
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
        UserSetLastError(87LL, v7, v8, v9);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v6 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
