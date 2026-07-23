/*
 * XREFs of HvlpLogIommuEvent @ 0x1402788B4
 * Callers:
 *     HvlMapDeviceInterrupt @ 0x1402749B0 (HvlMapDeviceInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpWriteEventLog @ 0x140278C28 (HvlpWriteEventLog.c)
 */

__int64 __fastcall HvlpLogIommuEvent(__int64 a1)
{
  __int64 result; // rax
  const EVENT_DESCRIPTOR *v3; // rcx
  ULONG v4; // edx
  ULONG *v5; // r10
  __int64 v6; // r11
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // r9
  __int64 v8; // r8
  ULONG v9; // eax
  _DWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-48h] BYREF

  result = (unsigned int)HvlpRootFlags;
  if ( (HvlpRootFlags & 1) != 0 && *(_BYTE *)a1 )
  {
    switch ( *(_WORD *)(a1 + 2) )
    {
      case 1:
        v3 = &HV_EVENTLOG_IOMMU_WARNING_SCOPE_CONFLICT;
        break;
      case 2:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_RID_CONFLICT;
        break;
      case 3:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_NO_RESOURCES;
        break;
      case 4:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_INVALID_IOAPIC;
        v4 = 1;
        v10[0] = 1;
        goto LABEL_17;
      case 5:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_NO_DEVICE_ASSIGNMENT;
        v10[2] = 8;
        v4 = 3;
LABEL_16:
        v10[1] = 8;
        v10[0] = 8;
LABEL_17:
        v5 = v10;
        v6 = v4;
        p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
        v8 = a1 + 8;
        do
        {
          p_Reserved->Reserved = 0;
          v9 = *v5++;
          *(_QWORD *)&p_Reserved[-3].Reserved = v8;
          v8 += 8LL;
          p_Reserved[-1].Reserved = v9;
          p_Reserved += 4;
          --v6;
        }
        while ( v6 );
        return HvlpWriteEventLog(v3, v4, &UserData);
      case 6:
        v3 = (const EVENT_DESCRIPTOR *)&HV_EVENTLOG_IOMMU_FAILED_RESERVED_DEVICE;
        break;
      default:
        return result;
    }
    v4 = 2;
    goto LABEL_16;
  }
  return result;
}
