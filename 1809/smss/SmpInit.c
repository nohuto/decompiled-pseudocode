/*
 * XREFs of SmpInit @ 0x14000619C
 * Callers:
 *     wmain @ 0x1400031DC (wmain.c)
 * Callees:
 *     SmpInitializeKnownSubSystems @ 0x1400050D0 (SmpInitializeKnownSubSystems.c)
 *     SmpCreateSecurityDescriptors @ 0x1400051C0 (SmpCreateSecurityDescriptors.c)
 *     SmpInitializePendingRename @ 0x140005F54 (SmpInitializePendingRename.c)
 *     InitializeWow64OnBoot @ 0x140006524 (InitializeWow64OnBoot.c)
 *     SmpLoadDataFromRegistry @ 0x140009F38 (SmpLoadDataFromRegistry.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     memset_0 @ 0x1400101EF (memset_0.c)
 */

int SmpInit()
{
  int result; // eax
  NTSTATUS v1; // eax
  int v2; // ecx
  _BYTE *Heap; // rax
  _BYTE *v4; // rbx
  NTSTATUS v5; // edi
  void *v6; // rcx
  unsigned int v7; // ecx
  ULONG i; // ebx
  NTSTATUS v9; // eax
  void *v10; // rcx
  int v11; // edi
  int DataFromRegistry; // ebx
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[2]; // [rsp+70h] [rbp-98h] BYREF
  int v18; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v19; // [rsp+88h] [rbp-80h]
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v21[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v22; // [rsp+4B8h] [rbp+3B0h]
  __int64 v23; // [rsp+4C8h] [rbp+3C0h]

  LODWORD(v17[0]) = 1441812;
  v17[1] = L"\\SmApiPort";
  v18 = 4456514;
  v19 = L"\\Device\\VolumesSafeForWriteAccess";
  ReturnLength[0] = 0;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  result = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  if ( result >= 0 )
  {
    v1 = NtQuerySystemInformation(SystemSessionPoolTagInformation|0x80, &SmpSystemWriteConstraintInfo, 8u, 0LL);
    v2 = SmpSystemWriteConstraintInfo;
    ProcessInformation = 1;
    if ( v1 < 0 )
      v2 = 0;
    SmpSystemWriteConstraintInfo = v2;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
    result = SmpInitializeKnownSubSystems();
    if ( result >= 0 )
    {
      SmpManufacturingMode = 0;
      result = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, ReturnLength);
      if ( result >= 0 )
      {
        return -1073741823;
      }
      else if ( result == -1073741820 )
      {
        Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, ReturnLength[0]);
        v4 = Heap;
        if ( Heap )
        {
          v5 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ReturnLength[0], ReturnLength);
          v6 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
          if ( v5 >= 0 )
          {
            SmpManufacturingMode = *v4 & 1;
            RtlFreeHeap(v6, 0, v4);
            result = SmpCreateSecurityDescriptors(1);
            if ( result >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
              ObjectAttributes.Attributes = 0;
              ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              memset_0(v21, 0, 0x48uLL);
              v21[0] = 0x20000;
              v22 = 328LL;
              v23 = 1000000LL;
              result = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v21);
              if ( result >= 0 )
              {
                SmpUniqueProcessId = LODWORD(KeGetPcr()->NtTib.Self[1].StackBase);
                SmpActiveProcessorCount = MEMORY[0x7FFE03C0];
                result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
                if ( result >= 0 )
                {
                  SmpMaximumNodeCount = SystemInformation[0] + 1;
                  RtlInitializeBitMap(&SmpNodeBitmap, &SmpNodeBitmapBuffer, SystemInformation[0] + 1);
                  RtlClearAllBits(&SmpNodeBitmap);
                  v7 = SmpMaximumNodeCount;
                  for ( i = 0; i < v7; ++i )
                  {
                    if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
                    {
                      RtlSetBits(&SmpNodeBitmap, i, 1u);
                      v7 = SmpMaximumNodeCount;
                    }
                  }
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 64;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  v9 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
                  v10 = EventHandle;
                  v11 = v9;
                  if ( v9 < 0 )
                    v10 = 0LL;
                  EventHandle = v10;
                  result = SmpInitializePendingRename();
                  if ( result >= 0 )
                  {
                    DataFromRegistry = SmpLoadDataFromRegistry(EventHandle);
                    if ( v11 >= 0 )
                      NtClose(EventHandle);
                    if ( DataFromRegistry >= 0 )
                      return InitializeWow64OnBoot();
                    return DataFromRegistry;
                  }
                }
              }
            }
          }
          else
          {
            RtlFreeHeap(v6, 0, v4);
            return v5;
          }
        }
        else
        {
          return -1073741670;
        }
      }
    }
  }
  return result;
}
