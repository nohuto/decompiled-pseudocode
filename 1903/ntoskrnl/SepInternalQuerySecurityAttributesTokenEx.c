/*
 * XREFs of SepInternalQuerySecurityAttributesTokenEx @ 0x140092040
 * Callers:
 *     SeQuerySecurityAttributesTokenAccessInformation @ 0x14012F310 (SeQuerySecurityAttributesTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     SeQuerySecurityAttributesToken @ 0x140618C70 (SeQuerySecurityAttributesToken.c)
 *     NtQuerySecurityAttributesToken @ 0x140652D60 (NtQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A420 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400795E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14008573C (SepGetSingletonEntryFromIndexNumber.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400920E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400926B0 (AuthzBasepFindSecurityAttribute.c)
 *     SepPotentialGlobalTableAttribute @ 0x14012F800 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140194924 (AuthzBasepAllocateSecurityAttributesList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x14031E7BC (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepInternalFillNoAttribs @ 0x14031E868 (SepInternalFillNoAttribs.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInternalQuerySecurityAttributesTokenEx(
        __int64 a1,
        char a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  _DWORD *v8; // rdi
  bool v10; // zf
  unsigned int v14; // r14d
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v16; // r14
  KIRQL v17; // r15
  __int64 SecurityAttributesList; // rax
  int SecurityAttributesToken; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  char v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(v22) = a2;
  v8 = 0LL;
  v10 = (*(_DWORD *)(a1 + 200) & 0x20000) == 0;
  v22 = 0;
  if ( !v10 )
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  if ( a5 )
    goto LABEL_10;
  if ( (SepSingletonGlobal[4] & 1) == 0 || !a3 )
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  v14 = 0;
  if ( a4 )
  {
    while ( (unsigned __int8)SepPotentialGlobalTableAttribute((PCUNICODE_STRING)(a3 + 16LL * v14))
         && !AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a3 + 16LL * v14) )
    {
      if ( ++v14 >= a4 )
        goto LABEL_10;
    }
    return AuthzBasepQuerySecurityAttributesToken(*(_QWORD *)(a1 + 776), a3, a4, a6, a7, a8);
  }
LABEL_10:
  if ( (int)SepGetProcUniqueLuidAndIndexFromTokenEx(0LL, a1, &v22, &v21) < 0 )
    return SepInternalFillNoAttribs(a6, a7, a8);
  SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v22);
  v16 = SingletonEntryFromIndexNumber;
  if ( !SingletonEntryFromIndexNumber )
    return SepInternalFillNoAttribs(a6, a7, a8);
  v17 = ExAcquireSpinLockShared(SingletonEntryFromIndexNumber);
  if ( *((_QWORD *)v16 + 2) )
  {
    SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
    v8 = (_DWORD *)SecurityAttributesList;
    SecurityAttributesToken = SecurityAttributesList
                            ? AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)v16 + 2), SecurityAttributesList, 0)
                            : -1073741801;
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
    return SepInternalFillNoAttribs(a6, a7, a8);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_27;
  if ( v8 )
  {
    SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(v8, a3, a4, a6, a7, a8);
LABEL_27:
    if ( v8 )
    {
      AuthzBasepFreeSecurityAttributesList(v8);
      ExFreePoolWithTag(v8, 0);
    }
  }
  return (unsigned int)SecurityAttributesToken;
}
