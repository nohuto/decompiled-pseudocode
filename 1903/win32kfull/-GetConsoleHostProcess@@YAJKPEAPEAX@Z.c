/*
 * XREFs of ?GetConsoleHostProcess@@YAJKPEAPEAX@Z @ 0x1C01EAC9C
 * Callers:
 *     GetConsoleDesktop @ 0x1C01EAE30 (GetConsoleDesktop.c)
 * Callees:
 *     LockThreadByClientId @ 0x1C0019338 (LockThreadByClientId.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

int __fastcall GetConsoleHostProcess(int a1, void **a2)
{
  void *v3; // rbx
  int result; // eax
  HANDLE ThreadProcessId; // rbx
  NTSTATUS v6; // ebx
  void *v7; // rcx
  __int64 ProcessInformation; // [rsp+30h] [rbp-50h] BYREF
  _CLIENT_ID ClientId; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  PETHREAD Thread; // [rsp+A0h] [rbp+20h] BYREF
  void *ProcessHandle; // [rsp+A8h] [rbp+28h] BYREF

  v3 = (void *)a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ClientId.UniqueProcess = 0LL;
  ClientId.UniqueThread = 0LL;
  result = LockThreadByClientId(v3, &Thread);
  if ( result >= 0 )
  {
    ThreadProcessId = PsGetThreadProcessId(Thread);
    ObfDereferenceObject(Thread);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ClientId.UniqueThread = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueProcess = ThreadProcessId;
    result = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
    if ( result >= 0 )
    {
      v6 = ZwQueryInformationProcess(ProcessHandle, ProcessIoPriority|ProcessUserModeIOPL, &ProcessInformation, 8u, 0LL);
      ZwClose(ProcessHandle);
      if ( v6 >= 0 )
      {
        if ( (ProcessInformation & 1) != 0 )
          v7 = (void *)(ProcessInformation & 0xFFFFFFFFFFFFFFFEuLL);
        else
          v7 = 0LL;
        *a2 = v7;
      }
      return v6;
    }
  }
  return result;
}
