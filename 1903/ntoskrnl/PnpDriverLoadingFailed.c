/*
 * XREFs of PnpDriverLoadingFailed @ 0x140788FD4
 * Callers:
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PipIsDevNodeDNStarted @ 0x1400EE53C (PipIsDevNodeDNStarted.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IopReleaseDeviceResources @ 0x140730810 (IopReleaseDeviceResources.c)
 *     PoFxAbandonDevice @ 0x140730AC4 (PoFxAbandonDevice.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PipOpenServiceEnumKeys @ 0x140733E90 (PipOpenServiceEnumKeys.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140861A70 (PipServiceInstanceToDeviceInstance.c)
 */

NTSTATUS __fastcall PnpDriverLoadingFailed(HANDLE Handle, UNICODE_STRING *a2)
{
  int v2; // r15d
  HANDLE v4; // rbx
  NTSTATUS result; // eax
  unsigned int v6; // edi
  NTSTATUS RegistryValue; // esi
  unsigned int v8; // r14d
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rbx
  int v15; // r15d
  struct _KTHREAD *v16; // rax
  int v17; // r14d
  unsigned int i; // ebx
  signed __int64 v19; // rax
  unsigned int *v20; // rsi
  signed __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-99h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  unsigned int Data; // [rsp+58h] [rbp-71h] BYREF
  int v26; // [rsp+5Ch] [rbp-6Dh]
  HANDLE v27; // [rsp+60h] [rbp-69h] BYREF
  ULONG dwFlags; // [rsp+68h] [rbp-61h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-51h] BYREF
  NTSTRSAFE_PWSTR v31; // [rsp+80h] [rbp-49h] BYREF
  __int64 v32; // [rsp+88h] [rbp-41h] BYREF
  PVOID v33; // [rsp+90h] [rbp-39h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-1h] BYREF

  v27 = Handle;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v2 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v4 = Handle;
  v26 = 0;
  if ( Handle )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    ValueName.Buffer = L"Enum";
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = &ValueName;
    *(_DWORD *)&ValueName.Length = 655368;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 0x20019u, &v27, &KeyHandle, 0);
    v4 = v27;
    v2 = 1;
    v26 = 1;
  }
  if ( result >= 0 )
  {
    ValueName.Buffer = L"INITSTARTFAILED";
    *(_DWORD *)&ValueName.Length = 2097182;
    dwFlags = 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &dwFlags, 4u);
    v6 = 0;
    RegistryValue = IopGetRegistryValue(KeyHandle, L"Count", 0, &P);
    if ( RegistryValue < 0 )
      goto LABEL_44;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(P, 0);
    if ( v6 )
    {
      v8 = 0;
      Data = v6;
      do
      {
        if ( (int)PipServiceInstanceToDeviceInstance(v4, a2, v8, &v32) >= 0 )
        {
          v9 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&v32, 0x746C6644u);
          v10 = v9;
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9[39] + 40LL);
            if ( v11 )
            {
              if ( !PipIsDevNodeDNStarted(v11) )
                IopReleaseDeviceResources(v12, 1);
            }
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
          if ( v10 )
          {
            v14 = *(_QWORD *)(v10[39] + 40LL);
            if ( v14 && (*(_DWORD *)(v14 + 396) & 1) != 0 && (unsigned int)(*(_DWORD *)(v14 + 300) - 775) <= 1 )
            {
              PoFxAbandonDevice(v14);
              PipSetDevNodeState(v14, 786);
              PipSetDevNodeProblem(v14, 24, 0);
            }
            ObfDereferenceObject(v10);
          }
          ExFreePoolWithTag(v33, 0);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v4 = v27;
        }
        ++v8;
      }
      while ( v8 < v6 );
      v15 = v26;
      if ( Data != v6 )
      {
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
        if ( Data )
        {
          v17 = 0;
          for ( i = 0; i < v6; ++i )
          {
            LODWORD(v22) = i;
            ppszDestEnd = pszDest;
            RtlStringCchPrintfExW(pszDest, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v22);
            ValueName.MaximumLength = 20;
            v19 = ppszDestEnd - pszDest;
            if ( (_DWORD)v19 == -1 )
              ValueName.Length = 20;
            else
              ValueName.Length = 2 * v19;
            ValueName.Buffer = pszDest;
            if ( IopGetRegistryValue(KeyHandle, pszDest, 0, &P) >= 0 )
            {
              v20 = (unsigned int *)P;
              if ( i != v17 )
              {
                ZwDeleteValueKey(KeyHandle, &ValueName);
                LODWORD(v22) = v17;
                v31 = pszDest;
                RtlStringCchPrintfExW(pszDest, 0xAuLL, &v31, 0LL, 0, L"%u", v22);
                ValueName.MaximumLength = 20;
                v21 = v31 - pszDest;
                if ( (_DWORD)v21 == -1 )
                  ValueName.Length = 20;
                else
                  ValueName.Length = 2 * v21;
                ValueName.Buffer = pszDest;
                ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)v20 + v20[2], v20[3]);
              }
              ExFreePoolWithTag(v20, 0);
              ++v17;
            }
          }
          v15 = v26;
        }
        ValueName.Buffer = L"Count";
        *(_DWORD *)&ValueName.Length = 786442;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        ValueName.Buffer = L"NextInstance";
        *(_DWORD *)&ValueName.Length = 1703960;
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v4 = v27;
      }
      ZwClose(KeyHandle);
      if ( v15 )
        ZwClose(v4);
      return 0;
    }
    else
    {
LABEL_44:
      ZwClose(KeyHandle);
      if ( v2 )
        ZwClose(v4);
      return RegistryValue;
    }
  }
  return result;
}
