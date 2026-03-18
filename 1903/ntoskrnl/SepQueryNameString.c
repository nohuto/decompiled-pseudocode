/*
 * XREFs of SepQueryNameString @ 0x14061E7F4
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14061E3F8 (SepValidateReferencedCachedHandles.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14061FB18 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x1408DC494 (SeOperationAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1408DCF1C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408DF360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140658AA4 (PsGetAllocatedFullProcessImageNameEx.c)
 */

__int64 __fastcall SepQueryNameString(__int64 a1, PVOID *a2)
{
  int NameStringMode; // eax
  int v5; // ebx
  PVOID PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  NameStringMode = ObQueryNameStringMode(a1, 0, 0, (unsigned int)&NumberOfBytes, 0);
  v5 = NameStringMode;
  if ( NameStringMode == -1073741820 || NameStringMode == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E4F6553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameStringMode(a1, (_DWORD)PoolWithTag, NumberOfBytes, (unsigned int)&NumberOfBytes, 0);
      if ( v5 < 0 || !*(_WORD *)*a2 )
      {
        ExFreePoolWithTag(*a2, 0);
        *a2 = 0LL;
        if ( v5 >= 0
          && (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)] == PsProcessType )
        {
          PsGetAllocatedFullProcessImageNameEx(a1, a2);
        }
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
