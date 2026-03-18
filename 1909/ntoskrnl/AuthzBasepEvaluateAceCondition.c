/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x1400D0200
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1400866E0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400A7380 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x1400A96D0 (SepFilterCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x1401562A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x140156D98 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156EB8 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14031CE64 (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x1408DE870 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408DF1A0 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400799A0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1400CFB50 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepResetOperands @ 0x1400D0874 (AuthzBasepResetOperands.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400D0CE0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepPushResult @ 0x1400D0E58 (AuthzBasepPushResult.c)
 *     AuthzBasepIsValidExpression @ 0x1400D0E80 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x1400D0FBC (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepEvaluateExpression @ 0x1400D2D80 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepGetConstantOperand @ 0x1400D2ECC (AuthzBasepGetConstantOperand.c)
 *     SepPotentialGlobalTableAttribute @ 0x14013028C (SepPotentialGlobalTableAttribute.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     __report_rangecheckfailure @ 0x14027BAEC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14031E3FC (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x1403469D4 (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x140346A5C (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x140346BA0 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x140346CB0 (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepEvaluateAceCondition(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        unsigned int a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        _DWORD *a12)
{
  _DWORD *v12; // r13
  _DWORD *v14; // r14
  int ConstantOperand; // r15d
  char v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // edi
  int v21; // r8d
  __int64 v22; // rbx
  unsigned int v23; // ecx
  unsigned int v24; // ebx
  char *v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // r14
  PVOID *v28; // r14
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  PVOID *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // eax
  _BYTE *v37; // rbx
  PVOID *v38; // rdi
  bool v40; // zf
  int v41; // eax
  __int64 v42; // r10
  int v43; // r8d
  int v44; // eax
  int v45; // r10d
  int v46; // r8d
  int v47; // r8d
  int v48; // eax
  char v49; // al
  char v50; // al
  char v51; // al
  char v52; // al
  __int64 v53; // r10
  int v54; // eax
  PVOID v55; // rbx
  char v56; // [rsp+30h] [rbp-D0h]
  _BYTE v57[3]; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v58[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  char v60; // [rsp+3Ch] [rbp-C4h] BYREF
  char v61; // [rsp+3Dh] [rbp-C3h]
  _DWORD *v62; // [rsp+40h] [rbp-C0h]
  unsigned int v63; // [rsp+48h] [rbp-B8h]
  int v64; // [rsp+4Ch] [rbp-B4h] BYREF
  char v65; // [rsp+50h] [rbp-B0h]
  bool v66; // [rsp+51h] [rbp-AFh]
  int v67; // [rsp+54h] [rbp-ACh] BYREF
  int v68; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h]
  PVOID *v70; // [rsp+68h] [rbp-98h]
  int v71[4]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v72[5]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  PVOID v76; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v77; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v78; // [rsp+F8h] [rbp-8h]
  __int64 v79; // [rsp+100h] [rbp+0h]
  __int64 v80; // [rsp+108h] [rbp+8h]
  __int64 v81; // [rsp+110h] [rbp+10h]
  __int64 v82; // [rsp+118h] [rbp+18h]
  PCUNICODE_STRING String2; // [rsp+120h] [rbp+20h]
  _DWORD *v84; // [rsp+128h] [rbp+28h]
  _QWORD v85[6]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v86; // [rsp+160h] [rbp+60h] BYREF
  PVOID P[16]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v88[256]; // [rsp+1F0h] [rbp+F0h] BYREF

  v12 = a8;
  v14 = a12;
  ConstantOperand = 0;
  v78 = a5;
  v81 = a6;
  v82 = a3;
  v74 = a2;
  v69 = a1;
  v80 = a7;
  v79 = a4;
  v84 = a8;
  v62 = a12;
  v64 = 0;
  LODWORD(v86) = 0;
  *((_QWORD *)&v86 + 1) = 0LL;
  memset(P, 0, sizeof(P));
  LOWORD(v72[0]) = 0;
  BYTE4(v72[0]) = 0;
  memset((char *)v72 + 5, 0, 0x4BuLL);
  memset(v85, 0, 0x28uLL);
  v59 = -1;
  v16 = 0;
  v77 = -1LL;
  v67 = 0;
  v17 = 2LL;
  v68 = 0;
  v71[0] = 0;
  v58[0] = 0;
  v61 = 0;
  v60 = 0;
  v57[0] = 0;
  v65 = 0;
  v56 = 0;
  v76 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  HIDWORD(v85[1]) = 1;
  if ( !a1 || !a8 )
  {
    ConstantOperand = -1073741811;
    goto LABEL_38;
  }
  v66 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    ConstantOperand = -2147483601;
    goto LABEL_176;
  }
  AuthzBasepResetOperands(v72, v58);
  LODWORD(v18) = 4;
  v63 = 0;
  v19 = 0LL;
  if ( a9 <= 4 )
  {
LABEL_176:
    v16 = 0;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v20 = *((unsigned __int8 *)v12 + (unsigned int)v18);
    if ( v20 != 248 )
    {
      if ( v20 == 162 )
      {
        LODWORD(v18) = v18 + 1;
        if ( !(unsigned __int8)AuthzBasepIsValidExpression(162LL, v72, v19, v57) )
          goto LABEL_171;
        if ( v21 == 1 )
        {
          v59 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
          AuthzBasepResetOperands(v72, v58);
        }
        else
        {
          ConstantOperand = AuthzBasepPopResult(v88, &v64, &v59);
          if ( ConstantOperand < 0 )
            goto LABEL_172;
        }
LABEL_11:
        ConstantOperand = AuthzBasepPushResult(v88, &v64);
        if ( ConstantOperand < 0 )
          goto LABEL_172;
      }
      else
      {
        switch ( *((_BYTE *)v12 + (unsigned int)v18) )
        {
          case 0:
            while ( 1 )
            {
              v18 = (unsigned int)(v18 + 1);
              v40 = (_DWORD)v18 == a9;
              if ( (unsigned int)v18 >= a9 )
                break;
              if ( *((_BYTE *)v12 + v18) )
              {
                v40 = (_DWORD)v18 == a9;
                break;
              }
            }
            if ( !v40 )
              goto LABEL_171;
            goto LABEL_35;
          case 1:
          case 2:
          case 3:
          case 4:
          case 0x10:
          case 0x18:
          case 0x50:
          case 0x51:
            if ( (_DWORD)v19 != 2 )
              goto LABEL_53;
            if ( HIDWORD(v72[0]) == 1 )
              goto LABEL_171;
            v59 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
            ConstantOperand = AuthzBasepPushResult(v88, &v64);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            if ( LOBYTE(v58[0]) )
              ExFreePoolWithTag(*(PVOID *)(v42 + 24), 0);
            v86 = *(_OWORD *)&P[7];
            *(_OWORD *)P = *(_OWORD *)&P[9];
            *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
            *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
            P[6] = P[15];
            v72[0] = *(_OWORD *)((char *)&v72[2] + 8);
            *(_OWORD *)((char *)&v72[1] + 8) = v72[4];
            *(_QWORD *)&v72[1] = &v86;
            v58[0] = HIBYTE(v58[0]);
            memset((char *)&v72[2] + 8, 0, 0x28uLL);
            memset(&P[7], 0, 0x48uLL);
            LODWORD(v19) = 1;
            v63 = 1;
LABEL_53:
            ConstantOperand = AuthzBasepGetConstantOperand(
                                (char *)v12 + (unsigned int)v18,
                                a9 - (unsigned int)v18,
                                (char *)v72 + 40 * (unsigned int)v19,
                                v71);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            v19 = v63 + 1;
            LODWORD(v18) = v71[0] + v18;
            goto LABEL_34;
          case 0x80:
          case 0x81:
          case 0x82:
          case 0x83:
          case 0x84:
          case 0x85:
          case 0x86:
          case 0x88:
          case 0x8E:
          case 0x8F:
            LODWORD(v18) = v18 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v20, v72, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_101:
              v59 = -1;
              goto LABEL_11;
            }
            if ( v57[0] )
              goto LABEL_101;
            AuthzBasepEvaluateExpression((unsigned __int8)v20, v72, &v59);
            if ( ((_BYTE)v20 == 0x8E || (_BYTE)v20 == 0x8F) && v59 != -1 )
              v59 = v59 == 0;
            goto LABEL_11;
          case 0x87:
          case 0x8D:
            LODWORD(v18) = v18 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v20, v72, v19, v57) )
              goto LABEL_171;
            v59 = *(_QWORD *)&v72[1] != 0LL;
            if ( (_BYTE)v20 == 0x8D )
              v59 = *(_QWORD *)&v72[1] == 0LL;
            goto LABEL_69;
          case 0x89:
          case 0x8B:
          case 0x90:
          case 0x92:
            LODWORD(v18) = v18 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v20, v72, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_114:
              v59 = -1;
              v48 = -1;
              goto LABEL_126;
            }
            if ( v57[0] )
            {
              v50 = v61;
            }
            else
            {
              v49 = (_BYTE)v20 == 0x89 || (_BYTE)v20 == 0x90;
              ConstantOperand = AuthzBasepMemberOf((unsigned int)v72, v69, a10, a11, v49, (__int64)&v60);
              v50 = v60;
              v61 = v60;
            }
            if ( ConstantOperand < 0 )
              goto LABEL_114;
            if ( v50 )
            {
              v59 = 1;
              v48 = 1;
            }
            else
            {
              v59 = 0;
              v48 = 0;
            }
LABEL_126:
            if ( (((_BYTE)v20 + 112) & 0xFD) == 0 && v48 != -1 )
              goto LABEL_128;
            goto LABEL_69;
          case 0x8A:
          case 0x8C:
          case 0x91:
          case 0x93:
            LODWORD(v18) = v18 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v20, v72, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_131:
              v59 = -1;
              v48 = -1;
              goto LABEL_143;
            }
            if ( v57[0] )
            {
              v52 = v61;
            }
            else
            {
              v51 = (_BYTE)v20 == 0x8A || (_BYTE)v20 == 0x91;
              ConstantOperand = AuthzBasepDeviceMemberOf((unsigned int)v72, v69, a10, a11, v51, (__int64)&v60);
              v52 = v60;
              v61 = v60;
            }
            if ( ConstantOperand < 0 )
              goto LABEL_131;
            if ( v52 )
            {
              v59 = 1;
              v48 = 1;
            }
            else
            {
              v59 = 0;
              v48 = 0;
            }
LABEL_143:
            if ( (((_BYTE)v20 + 111) & 0xFD) == 0 && v48 != -1 )
LABEL_128:
              v59 = v48 == 0;
LABEL_69:
            ConstantOperand = AuthzBasepPushResult(v88, &v64);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            break;
          case 0xA0:
          case 0xA1:
            LODWORD(v18) = v18 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v20, v72, v19, v57) )
              goto LABEL_171;
            if ( v43 == 2 )
            {
              v67 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
              v44 = AuthzBasepEvaluateAttribute(*((_QWORD *)&v72[3] + 1));
              v68 = v44;
            }
            else
            {
              if ( v43 == 1 )
              {
                v67 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
              }
              else
              {
                ConstantOperand = AuthzBasepPopResult(v88, &v64, &v67);
                if ( ConstantOperand < 0 )
                  goto LABEL_172;
              }
              ConstantOperand = AuthzBasepPopResult(v88, &v64, &v68);
              if ( ConstantOperand < 0 )
                goto LABEL_172;
              v44 = v68;
            }
            if ( (_BYTE)v20 == 0xA0 )
            {
              if ( !v45 || !v44 )
                goto LABEL_95;
              if ( v45 == -1 || v44 == -1 )
                goto LABEL_90;
            }
            else if ( v45 != 1 && v44 != 1 )
            {
              if ( v45 != -1 && v44 != -1 )
              {
LABEL_95:
                v59 = 0;
                goto LABEL_98;
              }
LABEL_90:
              v46 = -1;
              goto LABEL_97;
            }
            v46 = 1;
LABEL_97:
            v59 = v46;
LABEL_98:
            ConstantOperand = AuthzBasepPushResult(v88, &v64);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            break;
          case 0xA3:
            LODWORD(v18) = v18 + 1;
            if ( !(unsigned __int8)AuthzBasepIsValidExpression((unsigned __int8)v20, v72, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_106:
              v47 = -1;
              goto LABEL_107;
            }
            if ( v57[0] )
              goto LABEL_106;
            AuthzBasepComputeExpression((unsigned __int8)v20, v72, &v77);
            if ( v77 == -1 )
              goto LABEL_106;
            v47 = v77 != 0;
LABEL_107:
            v59 = v47;
            ConstantOperand = AuthzBasepPushResult(v88, &v64);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            AuthzBasepResetOperands(v72, v58);
            v19 = v63;
            goto LABEL_35;
          case 0xF9:
          case 0xFA:
          case 0xFB:
          case 0xFC:
            goto LABEL_13;
          default:
            goto LABEL_171;
        }
      }
      AuthzBasepResetOperands(v72, v58);
      v19 = 0LL;
      v63 = 0;
      goto LABEL_35;
    }
LABEL_13:
    v22 = (unsigned int)(v18 + 1);
    if ( (_DWORD)v19 == 2 )
    {
      if ( HIDWORD(v72[0]) == 1 )
        goto LABEL_171;
      v59 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
      ConstantOperand = AuthzBasepPushResult(v88, &v64);
      if ( ConstantOperand < 0 )
        goto LABEL_172;
      if ( LOBYTE(v58[0]) )
        ExFreePoolWithTag(*(PVOID *)(v53 + 24), 0);
      v86 = *(_OWORD *)&P[7];
      *(_OWORD *)P = *(_OWORD *)&P[9];
      *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
      *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
      P[6] = P[15];
      v72[0] = *(_OWORD *)((char *)&v72[2] + 8);
      *(_OWORD *)((char *)&v72[1] + 8) = v72[4];
      *(_QWORD *)&v72[1] = &v86;
      v58[0] = HIBYTE(v58[0]);
      memset((char *)&v72[2] + 8, 0, 0x28uLL);
      memset(&P[7], 0, 0x48uLL);
      LODWORD(v19) = 1;
      v63 = 1;
    }
    if ( a9 - (unsigned int)v22 < 4 || (v23 = *(_DWORD *)((char *)v12 + v22), v24 = v22 + 4, v73 = v23, a9 - v24 < v23) )
    {
LABEL_171:
      ConstantOperand = -1073741406;
LABEL_172:
      v14 = v62;
      v16 = v56;
      goto LABEL_38;
    }
    if ( v23 > 0xFFFE )
      break;
    LODWORD(v85[3]) = v23;
    v25 = (char *)v12 + v24;
    v26 = (unsigned int)v19;
    v85[4] = v25;
    v27 = 9LL * (unsigned int)v19;
    v75 = v27 * 8;
    String2 = (PCUNICODE_STRING)&P[v27];
    ConstantOperand = AuthzBasepUnicodeStringFromOperandValue(v85, 0LL, &P[v27], (char *)v58 + (unsigned int)v19);
    if ( ConstantOperand < 0 )
      goto LABEL_172;
    v28 = &P[v27 - 2];
    v29 = (__int64 *)((char *)&P[-1] + v75);
    v70 = (PVOID *)((char *)&P[-1] + v75);
    switch ( (_BYTE)v20 )
    {
      case 0xF9:
        v30 = v78;
        if ( !a11 )
          v30 = v79;
        *(_DWORD *)v28 = 3;
        goto LABEL_23;
      case 0xFB:
        v30 = v80;
        if ( !a11 )
          v30 = v81;
        *(_DWORD *)v28 = 5;
        goto LABEL_23;
      case 0xFA:
        v30 = v82;
        *(_DWORD *)v28 = 4;
        goto LABEL_23;
    }
    if ( (_BYTE)v20 != 0xFC )
    {
      v30 = v74;
      *(_DWORD *)v28 = 2;
LABEL_23:
      v31 = v69;
      goto LABEL_24;
    }
    v31 = v69;
    v30 = v69;
    *(_DWORD *)v28 = 6;
LABEL_24:
    *v29 = v30;
    v32 = 9 * v26;
    P[v32 + 5] = 0LL;
    P[v32 + 6] = 0LL;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues((__int64)v28);
    if ( ConstantOperand != -1073741275 )
      goto LABEL_31;
    if ( *(_DWORD *)v28 == 2
      && (SepSingletonGlobal[4] & 1) != 0
      && (*(_DWORD *)(v31 + 200) & 0x20000) == 0
      && (unsigned __int8)SepPotentialGlobalTableAttribute(String2)
      && !v65 )
    {
      if ( v56 )
        goto LABEL_167;
      v54 = SepValidateAndCopyGlobalEntry(v74, &v76);
      ConstantOperand = v54;
      if ( v54 >= 0 )
      {
        v56 = 1;
LABEL_167:
        v33 = v70;
        *v70 = v76;
        ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues((__int64)v28);
        if ( ConstantOperand != -1073741275 )
          goto LABEL_31;
        *v33 = (PVOID)v74;
        goto LABEL_28;
      }
      v65 = 1;
      if ( v54 != -1073741275 )
        goto LABEL_31;
    }
    v33 = v70;
LABEL_28:
    if ( v66 || *(_DWORD *)v28 != 2 )
      goto LABEL_60;
    *(_DWORD *)v28 = 7;
    *v33 = 0LL;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues((__int64)v28);
LABEL_31:
    if ( ConstantOperand >= 0 )
    {
      v34 = v75;
      v35 = 40 * v26;
      *(_WORD *)((char *)v72 + v35) = *(_WORD *)((char *)&P[2] + v75);
      *(_DWORD *)((char *)v72 + v35 + 4) = *(_DWORD *)((char *)&P[3] + v34);
      *(_QWORD *)((char *)&v72[1] + v35) = v28;
      goto LABEL_33;
    }
    if ( ConstantOperand != -1073741275 )
      goto LABEL_172;
LABEL_60:
    ConstantOperand = 0;
    v35 = 40 * v26;
    *(_WORD *)((char *)v72 + v35) = 0;
    *(_DWORD *)((char *)v72 + v35 + 4) = 0;
    *(_QWORD *)((char *)&v72[1] + v35) = 0LL;
    if ( *((_BYTE *)v58 + v26) )
    {
      ExFreePoolWithTag(*(PVOID *)((char *)&P[1] + v75), 0);
      if ( v26 >= 2 )
        _report_rangecheckfailure();
      *((_BYTE *)v58 + v26) = 0;
    }
LABEL_33:
    v36 = *(_DWORD *)v28;
    v19 = v63 + 1;
    LODWORD(v18) = v73 + v24;
    *(_DWORD *)((char *)&v72[1] + v35 + 8) = 0;
    *(_QWORD *)((char *)&v72[2] + v35) = 0LL;
    *(_DWORD *)((char *)v72 + v35 + 8) = 0;
    v12 = v84;
    *(_DWORD *)((char *)v72 + v35 + 12) = v36;
LABEL_34:
    v63 = v19;
LABEL_35:
    if ( (unsigned int)v18 >= a9 )
    {
      if ( v64 == 1 )
      {
        v14 = v62;
        v16 = v56;
        *v62 = v88[0];
        goto LABEL_38;
      }
      if ( !v64 && (_DWORD)v19 == 1 )
      {
        v41 = AuthzBasepEvaluateAttribute(*(_QWORD *)&v72[1]);
        v14 = v62;
        v16 = v56;
        *v62 = v41;
        goto LABEL_38;
      }
      goto LABEL_172;
    }
  }
  v14 = v62;
  ConstantOperand = -1073741562;
  v16 = v56;
LABEL_38:
  v37 = v58;
  v38 = &P[1];
  do
  {
    if ( *v37 )
      ExFreePoolWithTag(*v38, 0);
    ++v37;
    v38 += 9;
    --v17;
  }
  while ( v17 );
  if ( v16 )
  {
    v55 = v76;
    if ( v76 )
    {
      AuthzBasepFreeSecurityAttributesList(v76);
      ExFreePoolWithTag(v55, 0x74416553u);
    }
  }
  if ( ConstantOperand < 0 )
    *v14 = -1;
  return (unsigned int)ConstantOperand;
}
