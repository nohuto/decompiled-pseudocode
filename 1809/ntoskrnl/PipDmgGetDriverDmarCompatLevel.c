/*
 * XREFs of PipDmgGetDriverDmarCompatLevel @ 0x14070A2A4
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x1406FFB04 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14013BAE0 (VfIsVerifierEnabled.c)
 *     PipDmaGuardGetRegistryPolicy @ 0x14016ACBC (PipDmaGuardGetRegistryPolicy.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     PipOpenServiceEnumKeys @ 0x14070A7D4 (PipOpenServiceEnumKeys.c)
 *     VfTargetDriversIsEnabled @ 0x140935AD4 (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall PipDmgGetDriverDmarCompatLevel(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  HANDLE v5; // rdi
  int RegistryPolicy; // eax
  int v8; // ecx
  int v9; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v10; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = (HANDLE)-1LL;
  v2 = *(_QWORD *)(a1 + 48) + 24LL;
  Handle = 0LL;
  v3 = 0;
  v4 = PipOpenServiceEnumKeys(v2, 131097LL, &Handle, 0LL, 0);
  v5 = Handle;
  if ( v4 >= 0 )
  {
    v9 = 1441812;
    v10 = L"Parameters";
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      LODWORD(Handle) = 0;
      if ( (int)PipDmaGuardGetRegistryPolicy(KeyHandle, (__int64)L"DmaRemappingCompatible", &Handle) >= 0 )
      {
        if ( (_DWORD)Handle )
        {
          if ( (_DWORD)Handle == 1 )
          {
            v3 = 2;
          }
          else if ( (_DWORD)Handle == 2 )
          {
            v3 = 3;
            RegistryPolicy = PipDmaGuardGetRegistryPolicy(KeyHandle, (__int64)L"DmaRemappingOnHiberPath", &Handle);
            v8 = (int)Handle;
            if ( RegistryPolicy < 0 )
              v8 = 0;
            if ( !v8
              && (unsigned int)VfIsVerifierEnabled()
              && (MmVerifierData & 0x80u) != 0
              && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) )
            {
              v3 = 2;
            }
          }
        }
        else
        {
          v3 = 1;
        }
      }
    }
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v5 )
    ZwClose(v5);
  return v3;
}
