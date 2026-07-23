/*
 * XREFs of PnpInitializeNotifyEntry @ 0x140720D48
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1407208B0 (IoRegisterPlugPlayNotification.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x140876128 (PiRegisterKernelSoftRestartNotification.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ZwOpenSession @ 0x1401C25B0 (ZwOpenSession.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInitializeNotifyEntry(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  HANDLE v10; // rsi
  unsigned int v11; // r14d
  NTSTATUS v12; // ebx
  int v13; // eax
  struct _ERESOURCE *PoolWithTag; // rax
  unsigned int SessionId; // eax
  HANDLE SessionHandle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t Dst[256]; // [rsp+70h] [rbp-90h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v11 = 0;
  SessionHandle = 0LL;
  v12 = 0;
  LOBYTE(v13) = MmIsSessionAddress(a3);
  if ( !v13 )
    goto LABEL_2;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( SessionId == -1 )
    return (unsigned int)-1073741811;
  swprintf_s(Dst, 0x100uLL, L"\\KernelObjects\\Session%d", SessionId);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v12 = ZwOpenSession(&SessionHandle, 0, &ObjectAttributes);
  if ( v12 < 0 || (v10 = SessionHandle) == 0LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_2:
    *(_QWORD *)(a1 + 8) = a1;
    *(_QWORD *)a1 = a1;
    *(_QWORD *)(a1 + 48) = a5;
    *(_WORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = a6;
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a1 + 20) = v11;
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = a4;
    *(_BYTE *)(a1 + 58) = 0;
    PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x56706E50u);
    *(_QWORD *)(a1 + 72) = PoolWithTag;
    if ( PoolWithTag )
      ExInitializeResourceLite(PoolWithTag);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
