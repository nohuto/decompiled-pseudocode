/*
 * XREFs of SepExamineSaclEx @ 0x1408DF8A0
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14031DF18 (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400795E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085130 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInToken @ 0x140086A98 (SepSidInToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x1403467DC (AuthzBasepObjectInTypeList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepSetAuditInfoForObjectType @ 0x1408E0028 (SepSetAuditInfoForObjectType.c)
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
  _DWORD *v13; // r13
  unsigned int v14; // r15d
  __int64 v15; // r10
  _BYTE *v16; // r8
  _BYTE *v18; // r9
  __int64 v19; // r11
  char v21; // r12
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
  int v33; // r12d
  unsigned int v34; // eax
  _DWORD *v35; // rdi
  char *v36; // rbx
  char v37; // al
  int v38; // ecx
  unsigned int v39; // ebx
  int v40; // ecx
  _BYTE *v41; // r15
  int v42; // edi
  _WORD *v43; // rbx
  unsigned int v44; // r15d
  unsigned int v45; // ecx
  _QWORD *v46; // rax
  __int64 v47; // r10
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // r9
  unsigned int v52; // ebx
  char v53; // [rsp+60h] [rbp-78h]
  unsigned int Size; // [rsp+64h] [rbp-74h]
  int Size_4; // [rsp+68h] [rbp-70h] BYREF
  int v56; // [rsp+6Ch] [rbp-6Ch] BYREF
  int v57; // [rsp+70h] [rbp-68h]
  unsigned int v58; // [rsp+74h] [rbp-64h]
  _DWORD *v59; // [rsp+78h] [rbp-60h] BYREF
  char *v60; // [rsp+80h] [rbp-58h]
  unsigned int v61; // [rsp+E0h] [rbp+8h]

  v56 = -1;
  v13 = 0LL;
  v14 = 0;
  v59 = 0LL;
  Size = 0;
  v15 = a3;
  v16 = a12;
  v18 = a13;
  v19 = a2;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v58 = *(unsigned __int16 *)(a1 + 4);
    if ( v58 )
    {
      v21 = 0;
      v53 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        v53 = v21;
      }
      v22 = **(_WORD ***)(v15 + 152);
      if ( *v22 == *(_WORD *)SeAnonymousLogonSid )
      {
        v23 = memcmp(v22, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v16 = a12;
        v18 = a13;
        v15 = a3;
        v19 = a2;
        if ( !v23 )
        {
          v14 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
          Size = v14;
        }
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v61 = 0;
      v60 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v16 || *v18) && a6 <= 1 )
        {
LABEL_91:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) == 0 )
        {
          v27 = *v25;
          v57 = -1;
          Size_4 = -1;
          switch ( v27 )
          {
            case 2:
              LOBYTE(v18) = 1;
              if ( !(unsigned __int8)SepSidInToken(v15, a10, (__int64)(v25 + 8), (__int64)v18, 0, a11, 0)
                && (!v14 || *(_WORD *)SeWorldSid != *((_WORD *)v25 + 4) || memcmp(SeWorldSid, v25 + 8, v14)) )
              {
                goto LABEL_87;
              }
              v29 = *((_DWORD *)v25 + 1);
              if ( !a6 )
              {
                if ( *a8 >= 0 )
                {
                  if ( (v26 & 0x40) != 0 )
                  {
                    if ( (*a9 & v29) == 0 )
                    {
                      v30 = v21 == 64;
                      goto LABEL_75;
                    }
                    goto LABEL_76;
                  }
                  goto LABEL_87;
                }
                if ( v26 >= 0 )
                  goto LABEL_87;
                if ( (v29 & a4) == 0 )
                {
                  v31 = v21 == (char)0x80;
LABEL_80:
                  if ( !v31 )
                    goto LABEL_87;
                }
                goto LABEL_81;
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
              v25 = v60;
              v16 = a12;
              v13 = v59;
              v18 = a13;
LABEL_31:
              v24 = v61;
              break;
            case 7:
              v33 = *((_DWORD *)v25 + 1);
              v34 = *((_DWORD *)v25 + 2) & 1;
              LOBYTE(v18) = 1;
              v35 = (_DWORD *)((unsigned __int64)(v25 + 12) & -(__int64)(v34 != 0));
              v36 = &v25[16 * v34 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)];
              v37 = SepSidInToken(v15, a10, (__int64)v36, (__int64)v18, 0, a11, 0);
              if ( v35 )
              {
                if ( v37 || v14 && *(_WORD *)SeWorldSid == *(_WORD *)v36 && !memcmp(SeWorldSid, v36, v14) )
                {
                  v41 = a12;
                  if ( AuthzBasepObjectInTypeList(v35, a5, a6, &Size_4) )
                    v42 = Size_4;
                  else
                    v42 = -1;
LABEL_85:
                  if ( v42 != -1 )
                  {
                    LOBYTE(v40) = v26;
                    SepSetAuditInfoForObjectType(
                      v40,
                      v33,
                      a4,
                      a5,
                      a6,
                      a7,
                      v42,
                      (__int64)a8,
                      (__int64)a9,
                      (__int64)v41,
                      (__int64)a13);
                  }
                }
              }
              else if ( v37 || v14 && *(_WORD *)SeWorldSid == *(_WORD *)v36 && !memcmp(SeWorldSid, v36, v14) )
              {
                v39 = 0;
                if ( a6 )
                {
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
                  v25 = v60;
                  v16 = a12;
                  v13 = v59;
                  goto LABEL_88;
                }
              }
              goto LABEL_87;
            case 13:
              v33 = *((_DWORD *)v25 + 1);
              v43 = v25 + 8;
              v44 = 4 * (unsigned __int8)v25[9] + 8;
              if ( v19 && !v13 )
              {
                AuthzBasepInitializeResourceClaimsFromSacl(v19, &v59);
                v16 = a12;
                v24 = v61;
                v13 = v59;
              }
              v45 = *((unsigned __int16 *)v25 + 1) - v44;
              if ( (int)(v45 - 8) <= 0 )
                goto LABEL_89;
              v46 = *(_QWORD **)(a3 + 1096);
              if ( v46 )
                v47 = v46[75];
              else
                v47 = 0LL;
              if ( v46 )
                v48 = v46[73];
              else
                v48 = 0LL;
              if ( v46 )
                v49 = v46[74];
              else
                v49 = 0LL;
              if ( v46 )
                v50 = v46[72];
              else
                v50 = 0LL;
              AuthzBasepEvaluateAceCondition(
                a3,
                *(_QWORD *)(a3 + 776),
                (__int64)v13,
                v50,
                v49,
                v48,
                v47,
                (_WORD *)((char *)v43 + v44),
                v45 - 8,
                1u,
                0,
                &v56);
              if ( v56 != 1 )
                goto LABEL_87;
              LOBYTE(v51) = 1;
              if ( !(unsigned __int8)SepSidInToken(a3, a10, (__int64)(v25 + 8), v51, 0, a11, 0)
                && (!Size || *(_WORD *)SeWorldSid != *v43 || memcmp(SeWorldSid, v25 + 8, Size)) )
              {
                goto LABEL_87;
              }
              if ( a6 )
              {
                v52 = 0;
                v41 = a12;
                do
                {
                  LOBYTE(v40) = v26;
                  SepSetAuditInfoForObjectType(
                    v40,
                    v33,
                    a4,
                    a5,
                    a6,
                    a7,
                    v52++,
                    (__int64)a8,
                    (__int64)a9,
                    (__int64)a12,
                    (__int64)a13);
                }
                while ( v52 < a6 );
                v42 = v57;
                v25 = v60;
                v13 = v59;
                goto LABEL_85;
              }
              if ( *a8 >= 0 )
              {
                if ( (v26 & 0x40) != 0 )
                {
                  if ( (*a9 & v33) != 0 )
                    goto LABEL_76;
                  v30 = v53 == 64;
LABEL_75:
                  if ( v30 )
                  {
LABEL_76:
                    v16 = a12;
                    *a12 = 1;
LABEL_88:
                    v24 = v61;
LABEL_89:
                    v18 = a13;
                    break;
                  }
                }
LABEL_87:
                v16 = a12;
                goto LABEL_88;
              }
              if ( v26 >= 0 )
                goto LABEL_87;
              if ( (v33 & a4) == 0 )
              {
                v31 = v53 == (char)0x80;
                goto LABEL_80;
              }
LABEL_81:
              v18 = a13;
              v16 = a12;
              *a13 = 1;
              goto LABEL_31;
          }
        }
        ++v24;
        v14 = Size;
        v25 += *((unsigned __int16 *)v25 + 1);
        v21 = v53;
        v15 = a3;
        v19 = a2;
        v61 = v24;
        v60 = v25;
        if ( v24 >= v58 )
          goto LABEL_91;
      }
    }
  }
}
