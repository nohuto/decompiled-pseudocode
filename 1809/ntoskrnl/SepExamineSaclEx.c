/*
 * XREFs of SepExamineSaclEx @ 0x1408A2220
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1402FFEB8 (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x140325140 (AuthzBasepObjectInTypeList.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepSetAuditInfoForObjectType @ 0x1408A29B0 (SepSetAuditInfoForObjectType.c)
 */

void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        __int64 a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rdi
  _BYTE *v16; // r8
  _BYTE *v18; // r9
  __int64 v19; // r10
  char v21; // r15
  _WORD *v22; // rcx
  int v23; // eax
  unsigned int v24; // edx
  char *v25; // r14
  char v26; // bp
  char v27; // al
  int v28; // ecx
  int v29; // edi
  bool v30; // zf
  bool v31; // zf
  unsigned int i; // ebx
  int v33; // r15d
  unsigned int v34; // eax
  _DWORD *v35; // rdi
  char *v36; // rbx
  char v37; // al
  int v38; // ecx
  unsigned int v39; // ebx
  char v40; // al
  int v41; // eax
  _WORD *v42; // rbx
  unsigned int v43; // edi
  unsigned int v44; // ecx
  _QWORD *v45; // rax
  __int64 v46; // r10
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r9
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r9
  int v53; // ecx
  unsigned int j; // ebx
  int v55; // ecx
  unsigned int v56; // [rsp+60h] [rbp-78h]
  char v57; // [rsp+64h] [rbp-74h]
  int v58; // [rsp+68h] [rbp-70h] BYREF
  int v59; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v60; // [rsp+70h] [rbp-68h]
  _DWORD *v61; // [rsp+78h] [rbp-60h] BYREF
  char *v62; // [rsp+80h] [rbp-58h]
  unsigned int v63; // [rsp+E0h] [rbp+8h]

  v59 = -1;
  v13 = 0LL;
  v14 = 0;
  v61 = 0LL;
  v56 = 0;
  v15 = a3;
  v16 = a12;
  v18 = a13;
  v19 = a2;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v60 = *(unsigned __int16 *)(a1 + 4);
    if ( v60 )
    {
      v21 = 0;
      v57 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        v57 = v21;
      }
      v22 = **(_WORD ***)(v15 + 152);
      if ( *v22 == *(_WORD *)SeAnonymousLogonSid )
      {
        v23 = memcmp(v22, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v16 = a12;
        v18 = a13;
        v19 = a2;
        if ( !v23 )
        {
          v14 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
          v56 = v14;
        }
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v63 = 0;
      v62 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v16 || *v18) && a6 <= 1 )
        {
LABEL_35:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) == 0 )
          break;
LABEL_34:
        ++v24;
        v21 = v57;
        v25 += *((unsigned __int16 *)v25 + 1);
        v19 = a2;
        v63 = v24;
        v62 = v25;
        if ( v24 >= v60 )
          goto LABEL_35;
      }
      v58 = -1;
      v27 = *v25;
      if ( *v25 == 2 )
      {
        LOBYTE(v18) = 1;
        if ( !(unsigned __int8)SepSidInToken(v15, a10, (__int64)(v25 + 8), (__int64)v18, 0, a11, 0)
          && (!v14 || *(_WORD *)SeWorldSid != *((_WORD *)v25 + 4) || memcmp(SeWorldSid, v25 + 8, v14)) )
        {
          goto LABEL_94;
        }
        v29 = *((_DWORD *)v25 + 1);
        if ( !a6 )
        {
          if ( *a8 >= 0 )
          {
            if ( (v26 & 0x40) != 0 )
            {
              v30 = (*a9 & v29) == 0;
              v15 = a3;
              if ( v30 )
              {
                v30 = v21 == 64;
                goto LABEL_80;
              }
              goto LABEL_81;
            }
            goto LABEL_31;
          }
          if ( v26 < 0 )
          {
            v30 = (v29 & a4) == 0;
            v15 = a3;
            if ( !v30 )
              goto LABEL_87;
            v31 = v21 == (char)0x80;
            goto LABEL_86;
          }
LABEL_31:
          v16 = a12;
          v24 = v63;
LABEL_32:
          v15 = a3;
LABEL_33:
          v18 = a13;
          goto LABEL_34;
        }
        for ( i = 0; i < a6; ++i )
        {
          LOBYTE(v28) = v26;
          SepSetAuditInfoForObjectType(
            v28,
            v29,
            a4,
            a5,
            a6,
            a7,
            i,
            (__int64)a8,
            (__int64)a9,
            (__int64)a12,
            (__int64)a13);
        }
LABEL_30:
        v25 = v62;
        v13 = v61;
        v14 = v56;
        goto LABEL_31;
      }
      if ( v27 == 7 )
      {
        v33 = *((_DWORD *)v25 + 1);
        v34 = *((_DWORD *)v25 + 2) & 1;
        LOBYTE(v18) = 1;
        v35 = (_DWORD *)((unsigned __int64)(v25 + 12) & -(__int64)(v34 != 0));
        v36 = &v25[16 * v34 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)];
        v37 = SepSidInToken(a3, a10, (__int64)v36, (__int64)v18, 0, a11, 0);
        if ( !v35 )
        {
          if ( !v37 && (!v14 || *(_WORD *)SeWorldSid != *(_WORD *)v36 || memcmp(SeWorldSid, v36, v14)) )
            goto LABEL_31;
          v39 = 0;
          if ( !a6 )
            goto LABEL_31;
          do
          {
            LOBYTE(v38) = v26;
            SepSetAuditInfoForObjectType(
              v38,
              v33,
              a4,
              a5,
              a6,
              a7,
              v39++,
              (__int64)a8,
              (__int64)a9,
              (__int64)a12,
              (__int64)a13);
          }
          while ( v39 < a6 );
          goto LABEL_30;
        }
        if ( !v37 && (!v14 || *(_WORD *)SeWorldSid != *(_WORD *)v36 || memcmp(SeWorldSid, v36, v14)) )
          goto LABEL_31;
        v40 = AuthzBasepObjectInTypeList(v35, a5, a6, &v58);
        v15 = a3;
        if ( v40 )
        {
          v41 = v58;
          goto LABEL_92;
        }
      }
      else
      {
        if ( v27 != 13 )
          goto LABEL_34;
        v33 = *((_DWORD *)v25 + 1);
        v42 = v25 + 8;
        v43 = 4 * (unsigned __int8)v25[9] + 8;
        if ( v19 && !v13 )
        {
          AuthzBasepInitializeResourceClaimsFromSacl(v19, &v61);
          v16 = a12;
          v24 = v63;
          v13 = v61;
        }
        v44 = *((unsigned __int16 *)v25 + 1) - v43;
        if ( (int)(v44 - 8) <= 0 )
          goto LABEL_32;
        v45 = *(_QWORD **)(a3 + 1096);
        if ( v45 )
          v46 = v45[75];
        else
          v46 = 0LL;
        if ( v45 )
          v47 = v45[73];
        else
          v47 = 0LL;
        if ( v45 )
          v48 = v45[74];
        else
          v48 = 0LL;
        if ( v45 )
          v49 = v45[72];
        else
          v49 = 0LL;
        v50 = v44 - 8;
        v51 = v43;
        v15 = a3;
        AuthzBasepEvaluateAceCondition(
          a3,
          *(_QWORD *)(a3 + 776),
          (__int64)v13,
          v49,
          v48,
          v47,
          v46,
          (_WORD *)((char *)v42 + v51),
          v50,
          1u,
          0,
          &v59);
        if ( v59 != 1 )
          goto LABEL_94;
        LOBYTE(v52) = 1;
        if ( !(unsigned __int8)SepSidInToken(a3, a10, (__int64)(v25 + 8), v52, 0, a11, 0)
          && (!v14 || *(_WORD *)SeWorldSid != *v42 || memcmp(SeWorldSid, v25 + 8, v14)) )
        {
          goto LABEL_94;
        }
        if ( !a6 )
        {
          if ( *a8 >= 0 )
          {
            if ( (v26 & 0x40) == 0 )
              goto LABEL_94;
            if ( (*a9 & v33) == 0 )
            {
              v30 = v57 == 64;
LABEL_80:
              if ( v30 )
                goto LABEL_81;
LABEL_94:
              v16 = a12;
              goto LABEL_82;
            }
LABEL_81:
            v16 = a12;
            *a12 = 1;
LABEL_82:
            v24 = v63;
            goto LABEL_33;
          }
          if ( v26 >= 0 )
            goto LABEL_94;
          if ( (v33 & a4) != 0 )
            goto LABEL_87;
          v31 = v57 == (char)0x80;
LABEL_86:
          if ( v31 )
          {
LABEL_87:
            v18 = a13;
            v16 = a12;
            v24 = v63;
            *a13 = 1;
            goto LABEL_34;
          }
          goto LABEL_94;
        }
        for ( j = 0; j < a6; ++j )
        {
          LOBYTE(v53) = v26;
          SepSetAuditInfoForObjectType(
            v53,
            v33,
            a4,
            a5,
            a6,
            a7,
            j,
            (__int64)a8,
            (__int64)a9,
            (__int64)a12,
            (__int64)a13);
        }
        v25 = v62;
        v13 = v61;
        v14 = v56;
        v15 = a3;
      }
      v41 = -1;
LABEL_92:
      if ( v41 != -1 )
      {
        v55 = (int)a8;
        LOBYTE(v55) = v26;
        SepSetAuditInfoForObjectType(
          v55,
          v33,
          a4,
          a5,
          a6,
          a7,
          v41,
          (__int64)a8,
          (__int64)a9,
          (__int64)a12,
          (__int64)a13);
      }
      goto LABEL_94;
    }
  }
}
