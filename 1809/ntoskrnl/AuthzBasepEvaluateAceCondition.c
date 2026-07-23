/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x1400A6240
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1400AACE0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB2B0 (SepNormalAccessCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x14015C2B4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C3D4 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF3BC (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408A2220 (SepExamineSaclEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x140014114 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400175F0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepGetConstantOperand @ 0x1400A48D8 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepEvaluateExpression @ 0x1400A4980 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x1400A5660 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepIsValidExpression @ 0x1400A5BC4 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepPushResult @ 0x1400A5D00 (AuthzBasepPushResult.c)
 *     AuthzBasepResetOperands @ 0x1400A6884 (AuthzBasepResetOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1400A6EE8 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300928 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x1403258DC (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x140325964 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x140325A98 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x140325B9C (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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
  _DWORD *v13; // r15
  int ConstantOperand; // r14d
  char v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // r8d
  int v20; // edi
  int v21; // r8d
  int v22; // edi
  int v23; // r8d
  __int64 v24; // rbx
  unsigned int v25; // ecx
  unsigned int v26; // ebx
  char *v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r15
  PVOID *v30; // r15
  __int64 v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // eax
  _BYTE *v37; // rbx
  PVOID *v38; // rdi
  bool v40; // zf
  int v41; // eax
  int v42; // r8d
  __int64 v43; // r10
  int v44; // r8d
  int v45; // eax
  int v46; // r10d
  int v47; // r8d
  int v48; // r8d
  int v49; // eax
  char v50; // al
  bool v51; // al
  __int64 v52; // r10
  int v53; // eax
  PVOID v54; // rbx
  int v55; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+30h] [rbp-D0h]
  _BYTE v57[3]; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v58[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v59; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v60[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD *v61; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+48h] [rbp-B8h]
  int v63; // [rsp+4Ch] [rbp-B4h] BYREF
  char v64; // [rsp+50h] [rbp-B0h]
  bool v65; // [rsp+51h] [rbp-AFh]
  int v66; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v67; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+60h] [rbp-A0h] BYREF
  int v69[3]; // [rsp+64h] [rbp-9Ch] BYREF
  _OWORD v70[5]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-40h]
  unsigned int v72; // [rsp+C8h] [rbp-38h]
  __int64 v73; // [rsp+D0h] [rbp-30h]
  PVOID v74; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v76; // [rsp+E8h] [rbp-18h]
  __int64 v77; // [rsp+F0h] [rbp-10h]
  PCUNICODE_STRING String2; // [rsp+F8h] [rbp-8h]
  _DWORD *v79; // [rsp+100h] [rbp+0h]
  _QWORD v80[5]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v81; // [rsp+130h] [rbp+30h] BYREF
  PVOID P[16]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v83[256]; // [rsp+1C0h] [rbp+C0h] BYREF

  v12 = a8;
  v13 = a12;
  v77 = a3;
  ConstantOperand = 0;
  v73 = a2;
  v71 = a1;
  v79 = a8;
  v61 = a12;
  v63 = 0;
  LODWORD(v81) = 0;
  *((_QWORD *)&v81 + 1) = 0LL;
  v76 = a4;
  memset(P, 0, sizeof(P));
  LOWORD(v70[0]) = 0;
  BYTE4(v70[0]) = 0;
  memset((char *)v70 + 5, 0, 0x4BuLL);
  memset(v80, 0, sizeof(v80));
  v16 = 0;
  v59 = -1;
  v75 = -1LL;
  v17 = 2LL;
  v66 = 0;
  v68 = 0;
  v69[0] = 0;
  v58[0] = 0;
  v60[0] = 0;
  v57[0] = 0;
  v64 = 0;
  v56 = 0;
  v74 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  HIDWORD(v80[1]) = 1;
  if ( !a1 || !a8 )
  {
    ConstantOperand = -1073741811;
    goto LABEL_39;
  }
  v65 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    ConstantOperand = -2147483601;
    goto LABEL_176;
  }
  AuthzBasepResetOperands(v70, v58);
  LODWORD(v18) = 4;
  v62 = 0;
  v19 = 0;
  if ( a9 <= 4 )
  {
LABEL_176:
    v16 = 0;
    goto LABEL_39;
  }
  while ( 1 )
  {
    v20 = *((unsigned __int8 *)v12 + (unsigned int)v18);
    if ( v20 != 248 )
    {
      if ( v20 == 162 )
      {
        LODWORD(v18) = v18 + 1;
        if ( !AuthzBasepIsValidExpression(162LL, (__int64)v70, v19, v57) )
          goto LABEL_171;
        if ( v21 == 1 )
        {
          v59 = AuthzBasepEvaluateAttribute(*(__int64 *)&v70[1]);
          v22 = v59;
          AuthzBasepResetOperands(v70, v58);
        }
        else
        {
          ConstantOperand = AuthzBasepPopResult(v83, &v63, &v59);
          if ( ConstantOperand < 0 )
            goto LABEL_172;
          v22 = v59;
        }
        if ( v22 == -1 )
          v23 = -1;
        else
          v23 = v22 == 0;
LABEL_13:
        ConstantOperand = AuthzBasepPushResult((__int64)v83, &v63, v23);
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
            goto LABEL_36;
          case 1:
          case 2:
          case 3:
          case 4:
          case 0x10:
          case 0x18:
          case 0x50:
          case 0x51:
            if ( v19 != 2 )
              goto LABEL_54;
            if ( HIDWORD(v70[0]) == 1 )
              goto LABEL_171;
            v59 = AuthzBasepEvaluateAttribute(*(__int64 *)&v70[1]);
            ConstantOperand = AuthzBasepPushResult((__int64)v83, &v63, v59);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            if ( LOBYTE(v58[0]) )
              ExFreePoolWithTag(*(PVOID *)(v43 + 24), 0);
            v81 = *(_OWORD *)&P[7];
            *(_OWORD *)P = *(_OWORD *)&P[9];
            *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
            P[6] = P[15];
            *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
            v70[0] = *(_OWORD *)((char *)&v70[2] + 8);
            *(_OWORD *)((char *)&v70[1] + 8) = v70[4];
            *(_QWORD *)&v70[1] = &v81;
            v58[0] = HIBYTE(v58[0]);
            memset((char *)&v70[2] + 8, 0, 0x28uLL);
            memset(&P[7], 0, 0x48uLL);
            v19 = 1;
            v62 = 1;
LABEL_54:
            ConstantOperand = AuthzBasepGetConstantOperand(
                                (char *)v12 + (unsigned int)v18,
                                a9 - (unsigned int)v18,
                                (__int64)v70 + 40 * v19,
                                v69);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            v19 = v62 + 1;
            LODWORD(v18) = v69[0] + v18;
            goto LABEL_35;
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
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v70, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_102:
              v23 = -1;
              v59 = -1;
              goto LABEL_13;
            }
            if ( v57[0] )
              goto LABEL_102;
            AuthzBasepEvaluateExpression(v20, (__int64)v70, &v59);
            v23 = v59;
            if ( ((_BYTE)v20 == 0x8E || (_BYTE)v20 == 0x8F) && v59 != -1 )
            {
              v23 = v59 == 0;
              v59 = v23;
            }
            goto LABEL_13;
          case 0x87:
          case 0x8D:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v70, v19, v57) )
              goto LABEL_171;
            v42 = *(_QWORD *)&v70[1] != 0LL;
            v59 = v42;
            if ( (_BYTE)v20 == 0x8D )
            {
              v42 = *(_QWORD *)&v70[1] == 0LL;
              v59 = v42;
            }
            goto LABEL_70;
          case 0x89:
          case 0x8B:
          case 0x90:
          case 0x92:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v70, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_115:
              v42 = -1;
              v59 = -1;
              v49 = -1;
              goto LABEL_126;
            }
            if ( !v57[0] )
            {
              v50 = (_BYTE)v20 == 0x89 || (_BYTE)v20 == 0x90;
              ConstantOperand = AuthzBasepMemberOf((unsigned int)v70, v71, a10, a11, v50, (__int64)v60);
            }
            if ( ConstantOperand < 0 )
              goto LABEL_115;
            if ( v60[0] )
            {
              v42 = 1;
              v59 = 1;
              v49 = 1;
            }
            else
            {
              v42 = 0;
              v59 = 0;
              v49 = 0;
            }
LABEL_126:
            if ( (((_BYTE)v20 + 112) & 0xFD) == 0 && v49 != -1 )
              goto LABEL_128;
            goto LABEL_70;
          case 0x8A:
          case 0x8C:
          case 0x91:
          case 0x93:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v70, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_131:
              v42 = -1;
              v59 = -1;
              v49 = -1;
              goto LABEL_142;
            }
            if ( !v57[0] )
            {
              v51 = (_BYTE)v20 == 0x8A || (_BYTE)v20 == 0x91;
              LOBYTE(v55) = v51;
              ConstantOperand = AuthzBasepDeviceMemberOf(v70, v71, a10, a11, v55, v60);
            }
            if ( ConstantOperand < 0 )
              goto LABEL_131;
            if ( v60[0] )
            {
              v42 = 1;
              v59 = 1;
              v49 = 1;
            }
            else
            {
              v42 = 0;
              v59 = 0;
              v49 = 0;
            }
LABEL_142:
            if ( (((_BYTE)v20 + 111) & 0xFD) == 0 && v49 != -1 )
            {
LABEL_128:
              v42 = v49 == 0;
              v59 = v42;
            }
LABEL_70:
            ConstantOperand = AuthzBasepPushResult((__int64)v83, &v63, v42);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            break;
          case 0xA0:
          case 0xA1:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v70, v19, v57) )
              goto LABEL_171;
            if ( v44 == 2 )
            {
              v66 = AuthzBasepEvaluateAttribute(*(__int64 *)&v70[1]);
              v45 = AuthzBasepEvaluateAttribute(*((__int64 *)&v70[3] + 1));
              v68 = v45;
            }
            else
            {
              if ( v44 == 1 )
              {
                v66 = AuthzBasepEvaluateAttribute(*(__int64 *)&v70[1]);
              }
              else
              {
                ConstantOperand = AuthzBasepPopResult(v83, &v63, &v66);
                if ( ConstantOperand < 0 )
                  goto LABEL_172;
              }
              ConstantOperand = AuthzBasepPopResult(v83, &v63, &v68);
              if ( ConstantOperand < 0 )
                goto LABEL_172;
              v45 = v68;
            }
            if ( (_BYTE)v20 == 0xA0 )
            {
              if ( !v46 || !v45 )
                goto LABEL_96;
              if ( v46 == -1 || v45 == -1 )
                goto LABEL_91;
            }
            else if ( v46 != 1 && v45 != 1 )
            {
              if ( v46 != -1 && v45 != -1 )
              {
LABEL_96:
                v47 = 0;
                v59 = 0;
                goto LABEL_99;
              }
LABEL_91:
              v47 = -1;
              goto LABEL_98;
            }
            v47 = 1;
LABEL_98:
            v59 = v47;
LABEL_99:
            ConstantOperand = AuthzBasepPushResult((__int64)v83, &v63, v47);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            break;
          case 0xA3:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v70, v19, v57) )
            {
              ConstantOperand = -1073741406;
              if ( !v57[0] )
                goto LABEL_172;
LABEL_107:
              v48 = -1;
              goto LABEL_108;
            }
            if ( v57[0] )
              goto LABEL_107;
            AuthzBasepComputeExpression((unsigned __int8)v20, v70, &v75);
            if ( v75 == -1 )
              goto LABEL_107;
            v48 = v75 != 0;
LABEL_108:
            v59 = v48;
            ConstantOperand = AuthzBasepPushResult((__int64)v83, &v63, v48);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            AuthzBasepResetOperands(v70, v58);
            v19 = v62;
            goto LABEL_36;
          case 0xF9:
          case 0xFA:
          case 0xFB:
          case 0xFC:
            goto LABEL_15;
          default:
            goto LABEL_171;
        }
      }
      AuthzBasepResetOperands(v70, v58);
      v19 = 0;
      v62 = 0;
      goto LABEL_36;
    }
LABEL_15:
    v24 = (unsigned int)(v18 + 1);
    if ( v19 == 2 )
    {
      if ( HIDWORD(v70[0]) == 1 )
        goto LABEL_171;
      v59 = AuthzBasepEvaluateAttribute(*(__int64 *)&v70[1]);
      ConstantOperand = AuthzBasepPushResult((__int64)v83, &v63, v59);
      if ( ConstantOperand < 0 )
        goto LABEL_172;
      if ( LOBYTE(v58[0]) )
        ExFreePoolWithTag(*(PVOID *)(v52 + 24), 0);
      v81 = *(_OWORD *)&P[7];
      *(_OWORD *)P = *(_OWORD *)&P[9];
      *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
      P[6] = P[15];
      *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
      v70[0] = *(_OWORD *)((char *)&v70[2] + 8);
      *(_OWORD *)((char *)&v70[1] + 8) = v70[4];
      *(_QWORD *)&v70[1] = &v81;
      v58[0] = HIBYTE(v58[0]);
      memset((char *)&v70[2] + 8, 0, 0x28uLL);
      memset(&P[7], 0, 0x48uLL);
      v19 = 1;
      v62 = 1;
    }
    if ( a9 - (unsigned int)v24 < 4 || (v25 = *(_DWORD *)((char *)v12 + v24), v26 = v24 + 4, v72 = v25, a9 - v26 < v25) )
    {
LABEL_171:
      ConstantOperand = -1073741406;
LABEL_172:
      v13 = v61;
      v16 = v56;
      goto LABEL_39;
    }
    if ( v25 > 0xFFFE )
      break;
    LODWORD(v80[3]) = v25;
    v27 = (char *)v12 + v26;
    v28 = v19;
    v80[4] = v27;
    v29 = 9LL * v19;
    v67 = v29 * 8;
    String2 = (PCUNICODE_STRING)&P[v29];
    ConstantOperand = AuthzBasepUnicodeStringFromOperandValue(
                        (__int64)v80,
                        0,
                        (unsigned __int16 *)&P[v29],
                        (_BYTE *)v58 + v19);
    if ( ConstantOperand < 0 )
      goto LABEL_172;
    if ( (_BYTE)v20 == 0xF9 )
    {
      LODWORD(P[v29 - 2]) = 3;
      v32 = (PVOID *)((char *)&P[-1] + v67);
      v30 = &P[v29 - 2];
      if ( a11 )
        v31 = a5;
      else
        v31 = v76;
    }
    else if ( (_BYTE)v20 == 0xFB )
    {
      LODWORD(P[v29 - 2]) = 5;
      v32 = (PVOID *)((char *)&P[-1] + v67);
      v30 = &P[v29 - 2];
      if ( a11 )
        v31 = a7;
      else
        v31 = a6;
    }
    else
    {
      v30 = &P[v29 - 2];
      if ( (_BYTE)v20 == 0xFA )
      {
        v31 = v77;
        *(_DWORD *)v30 = 4;
      }
      else if ( (_BYTE)v20 == 0xFC )
      {
        v31 = v71;
        *(_DWORD *)v30 = 6;
      }
      else
      {
        v31 = v73;
        *(_DWORD *)v30 = 2;
      }
      v32 = (PVOID *)((char *)&P[-1] + v67);
    }
    *v32 = v31;
    v33 = 9 * v28;
    P[v33 + 5] = 0LL;
    P[v33 + 6] = 0LL;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v30);
    if ( ConstantOperand != -1073741275 )
      goto LABEL_32;
    if ( *(_DWORD *)v30 == 2
      && (SepSingletonGlobal[4] & 1) != 0
      && (*(_DWORD *)(v71 + 200) & 0x20000) == 0
      && SepPotentialGlobalTableAttribute(String2)
      && !v64 )
    {
      if ( !v56 )
      {
        v53 = SepValidateAndCopyGlobalEntry(v73, &v74);
        ConstantOperand = v53;
        if ( v53 < 0 )
        {
          v64 = 1;
          if ( v53 != -1073741275 )
            goto LABEL_32;
          goto LABEL_29;
        }
        v56 = 1;
      }
      *v32 = v74;
      ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v30);
      if ( ConstantOperand != -1073741275 )
        goto LABEL_32;
      *v32 = v73;
    }
LABEL_29:
    if ( v65 || *(_DWORD *)v30 != 2 )
      goto LABEL_61;
    *(_DWORD *)v30 = 7;
    *v32 = 0LL;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v30);
LABEL_32:
    if ( ConstantOperand >= 0 )
    {
      v34 = v67;
      v35 = 40 * v28;
      *(_WORD *)((char *)v70 + v35) = *(_WORD *)((char *)&P[2] + v67);
      *(_DWORD *)((char *)v70 + v35 + 4) = *(_DWORD *)((char *)&P[3] + v34);
      *(_QWORD *)((char *)&v70[1] + v35) = v30;
      goto LABEL_34;
    }
    if ( ConstantOperand != -1073741275 )
      goto LABEL_172;
LABEL_61:
    ConstantOperand = 0;
    v35 = 40 * v28;
    *(_WORD *)((char *)v70 + v35) = 0;
    *(_DWORD *)((char *)v70 + v35 + 4) = 0;
    *(_QWORD *)((char *)&v70[1] + v35) = 0LL;
    if ( *((_BYTE *)v58 + v28) )
    {
      ExFreePoolWithTag(*(PVOID *)((char *)&P[1] + v67), 0);
      if ( v28 >= 2 )
        _report_rangecheckfailure();
      *((_BYTE *)v58 + v28) = 0;
    }
LABEL_34:
    v36 = *(_DWORD *)v30;
    v19 = v62 + 1;
    LODWORD(v18) = v72 + v26;
    *(_DWORD *)((char *)&v70[1] + v35 + 8) = 0;
    *(_QWORD *)((char *)&v70[2] + v35) = 0LL;
    *(_DWORD *)((char *)v70 + v35 + 8) = 0;
    v12 = v79;
    *(_DWORD *)((char *)v70 + v35 + 12) = v36;
LABEL_35:
    v62 = v19;
LABEL_36:
    if ( (unsigned int)v18 >= a9 )
    {
      if ( v63 == 1 )
      {
        v13 = v61;
        v16 = v56;
        *v61 = v83[0];
        goto LABEL_39;
      }
      if ( !v63 && v19 == 1 )
      {
        v41 = AuthzBasepEvaluateAttribute(*(__int64 *)&v70[1]);
        v13 = v61;
        v16 = v56;
        *v61 = v41;
        goto LABEL_39;
      }
      goto LABEL_172;
    }
  }
  v13 = v61;
  ConstantOperand = -1073741562;
  v16 = v56;
LABEL_39:
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
    v54 = v74;
    if ( v74 )
    {
      AuthzBasepFreeSecurityAttributesList(v74);
      ExFreePoolWithTag(v54, 0x74416553u);
    }
  }
  if ( ConstantOperand < 0 )
    *v13 = -1;
  return (unsigned int)ConstantOperand;
}
