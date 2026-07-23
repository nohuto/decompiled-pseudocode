/*
 * XREFs of SeObjectReferenceAuditAlarm @ 0x1405CA92C
 * Callers:
 *     ObpCheckObjectReference @ 0x1405CA050 (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x1405BCA50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14089F70C (SepAdtObjectReferenceAuditAlarm.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1408A4B4C (SeExamineGlobalSacl.c)
 */

void __fastcall SeObjectReferenceAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        ACCESS_MASK DesiredAccess,
        BOOLEAN GenerateAlarm,
        BOOLEAN a7,
        char a8)
{
  BOOLEAN AccessGranted; // si
  PACCESS_TOKEN ClientToken; // r8
  __int16 v13; // ax
  ACL *v14; // rdx
  ACL *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  PACCESS_TOKEN PrimaryToken; // r8
  __int16 v19; // ax
  __int64 v20; // rax
  ACL *v21; // rdx
  __int64 v22; // r9
  __int64 GenerateAudit; // [rsp+60h] [rbp+8h] BYREF

  GenerateAudit = a1;
  LOBYTE(GenerateAudit) = 0;
  GenerateAlarm = 0;
  if ( !a8 )
    return;
  if ( !a3 )
    return;
  AccessGranted = a7;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(121LL, a7, 0, a4) )
    return;
  ClientToken = a4->ClientToken;
  if ( !a4->ClientToken )
    ClientToken = a4->PrimaryToken;
  v13 = *(_WORD *)(a3 + 2);
  if ( (v13 & 0x10) != 0 )
  {
    if ( v13 >= 0 )
    {
      v14 = *(ACL **)(a3 + 24);
    }
    else
    {
      v16 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v16 )
        v14 = (ACL *)(a3 + v16);
      else
        v14 = 0LL;
    }
    if ( v13 >= 0 )
    {
      v15 = *(ACL **)(a3 + 24);
      goto LABEL_19;
    }
    v17 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v17 )
    {
      v15 = (ACL *)(a3 + v17);
      goto LABEL_19;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 0LL;
LABEL_19:
  SeExamineSacl(v15, v14, ClientToken, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, &GenerateAlarm);
  PrimaryToken = a4->ClientToken;
  if ( !a4->ClientToken )
    PrimaryToken = a4->PrimaryToken;
  v19 = *(_WORD *)(a3 + 2);
  if ( (v19 & 0x10) == 0 )
    goto LABEL_25;
  if ( v19 >= 0 )
  {
    v21 = *(ACL **)(a3 + 24);
    goto LABEL_27;
  }
  v20 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v20 )
    v21 = (ACL *)(a3 + v20);
  else
LABEL_25:
    v21 = 0LL;
LABEL_27:
  SeExamineGlobalSacl(
    (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)]
                    + 16),
    v21,
    PrimaryToken,
    DesiredAccess,
    AccessGranted,
    (PBOOLEAN)&GenerateAudit,
    &GenerateAlarm);
  if ( (_BYTE)GenerateAudit || GenerateAlarm )
  {
    LOBYTE(v22) = AccessGranted;
    SepAdtObjectReferenceAuditAlarm(a2, a4, DesiredAccess, v22);
  }
}
