/*
 * XREFs of NtUserCloseWindowStation @ 0x1C00EE700
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _CloseWindowStation @ 0x1C00EE79C (_CloseWindowStation.c)
 */

__int64 __fastcall NtUserCloseWindowStation(HANDLE Handle)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  NTSTATUS v8; // edi
  ULONG v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v7 = 0LL;
  if ( (int)ValidateHwinsta(Handle, v2, 0LL, &Object) >= 0 )
  {
    v8 = CloseWindowStation(Handle);
    ObfDereferenceObject(Object);
    if ( v8 < 0 )
    {
      v10 = RtlNtStatusToDosError(v8);
      UserSetLastError(v10, v11, v12, v13);
    }
    else
    {
      v7 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
