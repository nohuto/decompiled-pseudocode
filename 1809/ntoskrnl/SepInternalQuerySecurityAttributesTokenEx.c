/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6A08
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x140169C40 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     SeQuerySecurityAttributesToken @ 0x140626760 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140627060 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400A6AB0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x1400A7204 (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1400D9C50 (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401819C0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x14030073C (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepInternalFillNoAttribs @ 0x1403007E4 (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  _DWORD *v8; // rdi
  int SecurityAttributesToken; // ebx
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // rsi
  KIRQL v17; // bp
  __int64 SecurityAttributesList; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char v20; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0LL;
  v21 = 0;
  if ( (*(_DWORD *)(a1 + 200) & 0x20000) != 0
    || !a5 && !(unsigned __int8)SepDetermineGlobalTableCheckNeededForQuery(a1, a3, a4) )
  {
    return (unsigned int)AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
  if ( (int)SepGetProcUniqueLuidAndIndexFromToken(a1, &v21, &v20) < 0 )
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v21);
  v16 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v16 + 2) )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v8 = (_DWORD *)SecurityAttributesList;
    if ( SecurityAttributesList )
      SecurityAttributesToken = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v16 + 2), SecurityAttributesList, 0LL);
    else
      SecurityAttributesToken = -1073741801;
  }
  else
  {
    SecurityAttributesToken = -1073741275;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v16);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v17);
  if ( SecurityAttributesToken == -1073741275 )
    return (unsigned int)SepInternalFillNoAttribs(a6, a7, a8);
  if ( SecurityAttributesToken >= 0 )
  {
    if ( !v8 )
      return (unsigned int)SecurityAttributesToken;
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, a7, a8);
  }
  if ( v8 )
  {
    AuthzBasepFreeSecurityAttributesList(v8);
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)SecurityAttributesToken;
}
