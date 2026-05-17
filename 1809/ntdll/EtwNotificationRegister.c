/*
 * XREFs of EtwNotificationRegister @ 0x180020CB0
 * Callers:
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     EtwRegisterTraceGuidsW @ 0x180052970 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpInsertRegistration @ 0x180020A4C (EtwpInsertRegistration.c)
 *     EtwpRegisterProvider @ 0x180020B38 (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x180020DDC (EtwpAllocateRegistration.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180020EE0 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpFreeRegistration @ 0x18004EA88 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x18004ED60 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwNotificationRegister(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v7; // rax
  ULONG v8; // ebx
  __int64 Registration; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  volatile signed __int64 *v14; // rsi
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  unsigned __int64 UniqueThread_low; // rdx

  if ( a1 && a5 )
  {
    v7 = *a1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( *a1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
      v7 = a1[1] - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( !v7 && PrivateLoggerNotificationEntry )
    {
      v8 = 87;
      goto LABEL_14;
    }
    *a5 = 0LL;
    v8 = 0;
    Registration = EtwpAllocateRegistration(a1, a3, a4, a2);
    v13 = Registration;
    if ( !Registration )
    {
      v8 = 14;
      goto LABEL_14;
    }
    v14 = (volatile signed __int64 *)(Registration + 64);
    RtlAcquireSRWLockExclusive(Registration + 64, v10, v11, v12);
    UniqueThread_low = LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    *(_DWORD *)(v13 + 80) = UniqueThread_low;
    if ( a2 != 10 && (v8 = EtwpRegisterProvider(v13, a3, a2)) != 0 )
    {
      *(_DWORD *)(v13 + 80) = 0;
      RtlReleaseSRWLockExclusive(v14);
      EtwpFreeRegistration(v13);
    }
    else
    {
      EtwpInsertRegistration(v13, UniqueThread_low, v15, v16);
      EtwpCheckForPrivatePreEnable(v13);
      *(_DWORD *)(v13 + 80) = 0;
      RtlReleaseSRWLockExclusive(v14);
      *a5 = v13 | ((unsigned __int64)*(unsigned __int16 *)(v13 + 96) << 48);
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
