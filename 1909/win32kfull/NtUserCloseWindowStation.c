/*
 * XREFs of NtUserCloseWindowStation @ 0x1C007CD80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _CloseWindowStation @ 0x1C007CE1C (_CloseWindowStation.c)
 */

__int64 __fastcall NtUserCloseWindowStation(HANDLE Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  NTSTATUS v5; // edi
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v4 = 0LL;
  if ( (int)ValidateHwinsta(Handle, v2, 0LL, &Object) >= 0 )
  {
    v5 = CloseWindowStation(Handle);
    ObfDereferenceObject(Object);
    if ( v5 < 0 )
    {
      v7 = RtlNtStatusToDosError(v5);
      UserSetLastError(v7, v8, v9, v10);
    }
    else
    {
      v4 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
