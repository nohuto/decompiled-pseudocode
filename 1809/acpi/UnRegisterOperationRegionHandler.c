/*
 * XREFs of UnRegisterOperationRegionHandler @ 0x1C00ADD24
 * Callers:
 *     ACPIIoctlUnRegisterOpRegionHandler @ 0x1C00564CC (ACPIIoctlUnRegisterOpRegionHandler.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x1C00AAE50 (ACPIEcRemoveOpRegionHandler.c)
 *     DeRegisterOpRegionHandler @ 0x1C00ADC80 (DeRegisterOpRegionHandler.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0017EA8 (EnableDisableDeviceTreeRegionSpace.c)
 *     AMLIRegEventHandler @ 0x1C002B7F4 (AMLIRegEventHandler.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall UnRegisterOperationRegionHandler(__int64 *a1, __int64 *a2)
{
  __int64 *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 **v13; // rdx
  _QWORD v15[10]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v16; // [rsp+98h] [rbp+10h] BYREF

  v16 = 0LL;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  v4 = (__int64 *)AcpiOpRegionHandlerList;
  if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList )
    goto LABEL_27;
  do
  {
    if ( v4 == a2 )
      break;
    v4 = (__int64 *)*v4;
  }
  while ( v4 != &AcpiOpRegionHandlerList );
  if ( v4 == &AcpiOpRegionHandlerList )
  {
LABEL_27:
    v5 = -1073741584;
    goto LABEL_28;
  }
  if ( *((_BYTE *)a2 + 40) )
  {
    v5 = -1073741738;
LABEL_28:
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v5;
  }
  v6 = a2[1];
  v7 = (unsigned int *)a2 + 9;
  v8 = 0;
  *((_BYTE *)a2 + 40) = 1;
  if ( ((__int64 *)v6 == &AcpiOpRegionHandlerList || *(_DWORD *)(v6 + 36) != *v7)
    && ((__int64 *)*a2 == &AcpiOpRegionHandlerList || *(_DWORD *)(*a2 + 36) != *v7) )
  {
    if ( *v7 < 0x1F )
    {
      AcpiRegisteredOpRegionMask &= ~(1 << *v7);
    }
    else if ( (__int64 *)AcpiOpRegionHandlerList == &AcpiOpRegionHandlerList
           || *(_DWORD *)(qword_1C007FB88 + 36) < 0x1Fu )
    {
      AcpiRegisteredOpRegionMask &= ~0x80000000;
    }
  }
  else
  {
    v8 = 1;
  }
  ExReleaseFastMutex(&AcpiOpRegionLock);
  if ( !v8 )
  {
    v9 = *v7;
    if ( (unsigned int)(v9 - 8) > 1 )
    {
      if ( a1 && (int)AMLIGetNameSpaceObject("_REG", a1, (unsigned __int64 *)&v16, 1u) >= 0 )
      {
        memset(v15, 0, sizeof(v15));
        v10 = *v7;
        v15[7] = 0LL;
        WORD1(v15[0]) = 1;
        v15[2] = v10;
        WORD1(v15[5]) = 1;
        AMLIEvalNameSpaceObject(v16, 0LL, 2, v15);
        AMLIDereferenceHandleEx((__int64)v16);
      }
    }
    else
    {
      EnableDisableDeviceTreeRegionSpace(RootDeviceExtension, v9, 0LL);
    }
  }
  v11 = (unsigned int)AMLIRegEventHandler(*((_DWORD *)a2 + 8), *v7, 0LL, 0LL) != 0 ? 0xC0000001 : 0;
  ExAcquireFastMutex(&AcpiOpRegionLock);
  v12 = *a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v13 = (__int64 **)a2[1], *v13 != a2) )
    __fastfail(3u);
  *v13 = (__int64 *)v12;
  *(_QWORD *)(v12 + 8) = v13;
  a2[1] = (__int64)a2;
  *a2 = (__int64)a2;
  ExReleaseFastMutex(&AcpiOpRegionLock);
  ExFreePoolWithTag(a2, 0);
  return v11;
}
