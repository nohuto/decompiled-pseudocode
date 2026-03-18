/*
 * XREFs of ACPIBusAndFilterIrpQueryContainerId @ 0x1C002D884
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008D5E0 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00ABB50 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C0096F40 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryContainerId(_QWORD *a1, SIZE_T *a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  __int64 v7; // rax
  SIZE_T v8; // rdx
  _WORD *PoolWithTag; // rax
  _WORD *v10; // rdi
  struct _UNICODE_STRING GuidString; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v12[56]; // [rsp+30h] [rbp-78h] BYREF
  GUID Guid; // [rsp+68h] [rbp-40h] BYREF

  v5 = ACPIProcessPhysicalDeviceLocation(a3, 0LL, v12);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)&Guid.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&Guid.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v7 = *(_QWORD *)Guid.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( v7 )
    {
      v5 = RtlStringFromGUID(&Guid, &GuidString);
      if ( v5 >= 0 )
      {
        v8 = GuidString.Length + 2LL;
        *a2 = v8;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x53706341u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, GuidString.Buffer, GuidString.Length);
          v10[(unsigned __int64)GuidString.Length >> 1] = 0;
          *a1 = v10;
        }
        else
        {
          v5 = -1073741670;
        }
        RtlFreeUnicodeString(&GuidString);
      }
    }
    else
    {
      v5 = -1073741637;
    }
    ACPIFreePhysicalDeviceLocationDescriptors(v12);
  }
  return (unsigned int)v5;
}
