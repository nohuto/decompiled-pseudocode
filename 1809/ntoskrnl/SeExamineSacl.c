/*
 * XREFs of SeExamineSacl @ 0x1408A18F0
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeObjectReferenceAuditAlarm @ 0x1405CA92C (SeObjectReferenceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1406DA630 (NtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x140762FD0 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407F6328 (CmpExamineSaclForAuditEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A1CE0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SeExamineGlobalSacl @ 0x1408A4B4C (SeExamineGlobalSacl.c)
 * Callees:
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall SeExamineSacl(
        PACL Sacl,
        PACL ResourceSacl,
        PACCESS_TOKEN Token,
        ACCESS_MASK DesiredAccess,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateAudit,
        PBOOLEAN GenerateAlarm)
{
  _DWORD *v7; // rbp
  PBOOLEAN v8; // r15
  unsigned int v9; // r13d
  _QWORD **v10; // r10
  PBOOLEAN v11; // rax
  PACL v12; // r8
  unsigned int AceCount; // edi
  BOOLEAN v15; // r12
  char v16; // si
  _WORD *v17; // rcx
  int v18; // eax
  unsigned int v19; // edx
  PACL v20; // rbx
  char Sbz1; // di
  ACL *v22; // r14
  unsigned int v23; // r11d
  int v24; // eax
  unsigned int v25; // ecx
  _QWORD *v26; // rax
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r9
  int v31; // [rsp+60h] [rbp-58h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  _DWORD *v33; // [rsp+68h] [rbp-50h] BYREF
  int v34; // [rsp+C0h] [rbp+8h] BYREF
  PACL v35; // [rsp+C8h] [rbp+10h]
  __int64 *v36; // [rsp+D0h] [rbp+18h]
  ACCESS_MASK v37; // [rsp+D8h] [rbp+20h]

  v37 = DesiredAccess;
  v36 = (__int64 *)Token;
  v35 = ResourceSacl;
  v34 = -1;
  v7 = 0LL;
  v8 = GenerateAudit;
  v9 = 0;
  v33 = 0LL;
  v10 = (_QWORD **)Token;
  v11 = GenerateAlarm;
  v12 = ResourceSacl;
  *GenerateAudit = 0;
  *v11 = 0;
  if ( Sacl )
  {
    AceCount = Sacl->AceCount;
    v32 = AceCount;
    if ( Sacl->AceCount )
    {
      v15 = AccessGranted;
      v16 = 0;
      if ( (DesiredAccess & 0x2000000) != 0 )
        v16 = AccessGranted != 0 ? 64 : 0x80;
      v17 = (_WORD *)*v10[19];
      if ( *v17 == *(_WORD *)SeAnonymousLogonSid )
      {
        v18 = memcmp(v17, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v10 = (_QWORD **)v36;
        v12 = v35;
        if ( !v18 )
          v9 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v19 = 0;
      v20 = Sacl + 1;
      LODWORD(GenerateAudit) = 0;
      if ( AceCount )
      {
        while ( 1 )
        {
          if ( *v8 )
          {
LABEL_51:
            if ( v7 )
            {
              AuthzBasepFreeSecurityAttributesList(v7);
              ExFreePoolWithTag(v7, 0);
            }
            return;
          }
          Sbz1 = v20->Sbz1;
          if ( (Sbz1 & 8) == 0 )
            break;
LABEL_50:
          ++v19;
          v10 = (_QWORD **)v36;
          v20 = (PACL)((char *)v20 + v20->AclSize);
          v12 = v35;
          LODWORD(GenerateAudit) = v19;
          if ( v19 >= v32 )
            goto LABEL_51;
        }
        if ( v20->AclRevision == 2 )
        {
          LOBYTE(DesiredAccess) = 1;
          if ( !(unsigned __int8)SepSidInToken((__int64)v10, 0LL, (__int64)&v20[1], *(__int64 *)&DesiredAccess, 0, 0, 0)
            && (!v9 || *(_WORD *)SeWorldSid != *(_WORD *)&v20[1].AclRevision || memcmp(SeWorldSid, &v20[1], v9)) )
          {
            goto LABEL_49;
          }
          if ( (*(_DWORD *)&v20->AceCount & v37) == 0 )
          {
            v19 = (unsigned int)GenerateAudit;
            if ( ((unsigned __int8)Sbz1 & (unsigned __int8)v16) != 0 )
              *v8 = 1;
            goto LABEL_50;
          }
        }
        else
        {
          if ( v20->AclRevision != 13 )
            goto LABEL_50;
          v22 = v20 + 1;
          v23 = 4 * v20[1].Sbz1 + 8;
          v24 = *(_DWORD *)&v20->AceCount;
          LODWORD(GenerateAlarm) = v23;
          v31 = v24;
          if ( v12 && !v7 )
          {
            AuthzBasepInitializeResourceClaimsFromSacl((__int64)v12, &v33);
            v23 = (unsigned int)GenerateAlarm;
            v19 = (unsigned int)GenerateAudit;
            v7 = v33;
          }
          v25 = v20->AclSize - v23;
          if ( (int)(v25 - 8) <= 0 )
            goto LABEL_50;
          v26 = (_QWORD *)v36[137];
          if ( v26 )
            v27 = v26[75];
          else
            v27 = 0LL;
          if ( v26 )
            v28 = v26[73];
          else
            v28 = 0LL;
          if ( v26 )
            v29 = v26[74];
          else
            v29 = 0LL;
          if ( v26 )
            v30 = v26[72];
          else
            v30 = 0LL;
          AuthzBasepEvaluateAceCondition(
            (__int64)v36,
            v36[97],
            (__int64)v7,
            v30,
            v29,
            v28,
            v27,
            (ACL *)((char *)v22 + v23),
            v25 - 8,
            1u,
            0,
            &v34);
          if ( ((v34 + 1) & 0xFFFFFFFD) != 0 )
            goto LABEL_49;
          LOBYTE(DesiredAccess) = 1;
          if ( !(unsigned __int8)SepSidInToken((__int64)v36, 0LL, (__int64)&v20[1], *(__int64 *)&DesiredAccess, 0, 0, 0)
            && (!v9 || *(_WORD *)SeWorldSid != *(_WORD *)&v22->AclRevision || memcmp(SeWorldSid, &v20[1], v9)) )
          {
            goto LABEL_49;
          }
          if ( (v37 & v31) == 0 )
          {
            if ( ((unsigned __int8)Sbz1 & (unsigned __int8)v16) == 0 )
            {
LABEL_49:
              v19 = (unsigned int)GenerateAudit;
              goto LABEL_50;
            }
LABEL_48:
            *v8 = 1;
            goto LABEL_49;
          }
        }
        if ( ((Sbz1 & 0x40) == 0 || !v15) && (Sbz1 >= 0 || v15) )
          goto LABEL_49;
        goto LABEL_48;
      }
    }
  }
}
