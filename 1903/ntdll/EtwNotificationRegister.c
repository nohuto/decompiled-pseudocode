/*
 * XREFs of EtwNotificationRegister @ 0x18000A800
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x18000A300 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 * Callees:
 *     sub_18000A68C @ 0x18000A68C (sub_18000A68C.c)
 *     sub_18000A92C @ 0x18000A92C (sub_18000A92C.c)
 *     sub_18000AA3C @ 0x18000AA3C (sub_18000AA3C.c)
 *     sub_18000AC1C @ 0x18000AC1C (sub_18000AC1C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800538B8 @ 0x1800538B8 (sub_1800538B8.c)
 *     RtlSetLastWin32Error @ 0x180053B90 (RtlSetLastWin32Error.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  _RTL_SRWLOCK *v9; // rax
  __int64 v10; // rdi
  _RTL_SRWLOCK *v11; // rsi

  if ( Guid && RegHandle )
  {
    v7 = *(_QWORD *)&Guid->Data1 - 0x4C8E042A3595AB5CLL;
    if ( *(_QWORD *)&Guid->Data1 == 0x4C8E042A3595AB5CLL )
      v7 = *(_QWORD *)Guid->Data4 + 0x4E4E0164FAD2BD47LL;
    if ( !v7 && qword_180163510 )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *RegHandle = 0LL;
    v8 = 0;
    v9 = (_RTL_SRWLOCK *)sub_18000A92C(Guid, Callback, Context, Type);
    v10 = (__int64)v9;
    if ( !v9 )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v11 = v9 + 8;
    RtlAcquireSRWLockExclusive(v9 + 8);
    *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    if ( Type != 10 && (v8 = sub_18000A68C(v10, (__int64)Callback, Type)) != 0 )
    {
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      sub_1800538B8((PSLIST_ENTRY)v10);
    }
    else
    {
      sub_18000AC1C((PRTL_BALANCED_NODE)v10);
      sub_18000AA3C(v10);
      *(_DWORD *)(v10 + 80) = 0;
      RtlReleaseSRWLockExclusive(v11);
      *RegHandle = v10 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 96) << 48);
    }
  }
  else
  {
    v8 = 87;
  }
  if ( v8 )
LABEL_14:
    RtlSetLastWin32Error(v8);
  return v8;
}
