/*
 * XREFs of UsbhInstallMsOsExtendedProperties @ 0x1C0043E2C
 * Callers:
 *     UsbhPdoPnp_QueryResourceRequirements @ 0x1C0029F20 (UsbhPdoPnp_QueryResourceRequirements.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001D39C (UsbhReleaseFdoPnpLock.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0042BD4 (UsbhAcquireFdoPnpLock.c)
 *     USBD_InstallExtPropDescSections @ 0x1C0042C94 (USBD_InstallExtPropDescSections.c)
 *     USBD_ValidateExtendedPropertyDescriptor @ 0x1C0043448 (USBD_ValidateExtendedPropertyDescriptor.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C004356C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C0043C00 (UsbhGetMsOsFeatureDescriptor.c)
 */

LONG __fastcall UsbhInstallMsOsExtendedProperties(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int *v3; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // r8
  int v7; // eax
  _WORD *PoolWithTag; // rax
  char v9; // r8
  _WORD *v10; // rbx
  unsigned int *v11; // rax
  char v12; // r8
  unsigned int v13; // ebp
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0;
  v3 = 0LL;
  v5 = PdoExt((__int64)a2);
  v6 = v5;
  if ( (v5[358] & 0x400) != 0 )
  {
    v7 = v5[355];
    if ( (v7 & 0x800) == 0 )
    {
      v6[355] = v7 | 0x800;
      UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
      if ( !UsbhExtPropDescSemaphorePresent(a2) )
      {
        PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[4] = 0;
          if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, 1, v9, 5, (__int64)PoolWithTag, 10, &v15) >= 0
            && v15 == 10
            && *(_DWORD *)v10 >= 0xAu
            && v10[2] == 256
            && v10[3] == 5 )
          {
            if ( v10[4] )
            {
              v11 = (unsigned int *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)v10, 0x42554855u);
              v3 = v11;
              if ( v11 )
              {
                memset(v11, 0, *(unsigned int *)v10);
                if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, 1, v12, 5, (__int64)v3, *(_DWORD *)v10, &v15) >= 0 )
                {
                  v13 = v15;
                  if ( v15 == *(_DWORD *)v10
                    && RtlCompareMemory(v10, v3, 0xAuLL) == 10
                    && (int)USBD_ValidateExtendedPropertyDescriptor(v3, v13) >= 0 )
                  {
                    USBD_InstallExtPropDescSections(a2, (__int64)v3, *v3);
                  }
                }
              }
            }
          }
          ExFreePoolWithTag(v10, 0);
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
        }
      }
    }
  }
  return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
}
