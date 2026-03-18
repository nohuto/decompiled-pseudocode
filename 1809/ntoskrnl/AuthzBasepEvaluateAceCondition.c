/*
 * XREFs of AuthzBasepEvaluateAceCondition @ 0x1400A62E0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepMaximumAccessCheck @ 0x1400AAD80 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB350 (SepNormalAccessCheck.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepMaximumAccessCheckEx @ 0x14015C194 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C2B4 (SepNormalAccessCheckEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF0CC (SepVerifyDesktopAppxPackageName.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeExamineSacl @ 0x1408A06B0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408A0FE0 (SepExamineSaclEx.c)
 * Callees:
 *     SepPotentialGlobalTableAttribute @ 0x140014114 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400175F0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepGetConstantOperand @ 0x1400A4978 (AuthzBasepGetConstantOperand.c)
 *     AuthzBasepEvaluateExpression @ 0x1400A4A20 (AuthzBasepEvaluateExpression.c)
 *     AuthzBasepEvaluateAttribute @ 0x1400A5700 (AuthzBasepEvaluateAttribute.c)
 *     AuthzBasepIsValidExpression @ 0x1400A5C64 (AuthzBasepIsValidExpression.c)
 *     AuthzBasepPushResult @ 0x1400A5DA0 (AuthzBasepPushResult.c)
 *     AuthzBasepResetOperands @ 0x1400A6924 (AuthzBasepResetOperands.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1400A6F88 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     __report_rangecheckfailure @ 0x140268CCC (__report_rangecheckfailure.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300638 (SepValidateAndCopyGlobalEntry.c)
 *     AuthzBasepComputeExpression @ 0x1403255EC (AuthzBasepComputeExpression.c)
 *     AuthzBasepDeviceMemberOf @ 0x140325674 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x1403257A8 (AuthzBasepMemberOf.c)
 *     AuthzBasepPopResult @ 0x1403258AC (AuthzBasepPopResult.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
  char v51; // al
  __int64 v52; // r10
  int v53; // eax
  PVOID v54; // rbx
  char v55; // [rsp+30h] [rbp-D0h]
  _BYTE v56[3]; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v57[2]; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v59[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD *v60; // [rsp+40h] [rbp-C0h]
  int v61; // [rsp+48h] [rbp-B8h]
  int v62; // [rsp+4Ch] [rbp-B4h] BYREF
  char v63; // [rsp+50h] [rbp-B0h]
  bool v64; // [rsp+51h] [rbp-AFh]
  int v65; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v66; // [rsp+58h] [rbp-A8h]
  int v67; // [rsp+60h] [rbp-A0h] BYREF
  int v68[3]; // [rsp+64h] [rbp-9Ch] BYREF
  _OWORD v69[5]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-40h]
  unsigned int v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  PVOID v73; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v74; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-18h]
  __int64 v76; // [rsp+F0h] [rbp-10h]
  PCUNICODE_STRING String2; // [rsp+F8h] [rbp-8h]
  _DWORD *v78; // [rsp+100h] [rbp+0h]
  _QWORD v79[5]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v80; // [rsp+130h] [rbp+30h] BYREF
  PVOID P[16]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v82[256]; // [rsp+1C0h] [rbp+C0h] BYREF

  v12 = a8;
  v13 = a12;
  v76 = a3;
  ConstantOperand = 0;
  v72 = a2;
  v70 = a1;
  v78 = a8;
  v60 = a12;
  v62 = 0;
  LODWORD(v80) = 0;
  *((_QWORD *)&v80 + 1) = 0LL;
  v75 = a4;
  memset(P, 0, sizeof(P));
  LOWORD(v69[0]) = 0;
  BYTE4(v69[0]) = 0;
  memset((char *)v69 + 5, 0, 0x4BuLL);
  memset(v79, 0, sizeof(v79));
  v16 = 0;
  v58 = -1;
  v74 = -1LL;
  v17 = 2LL;
  v65 = 0;
  v67 = 0;
  v68[0] = 0;
  v57[0] = 0;
  v59[0] = 0;
  v56[0] = 0;
  v63 = 0;
  v55 = 0;
  v73 = 0LL;
  *a12 = -1;
  P[1] = 0LL;
  P[10] = 0LL;
  HIDWORD(v79[1]) = 1;
  if ( !a1 || !a8 )
  {
    ConstantOperand = -1073741811;
    goto LABEL_39;
  }
  v64 = KeGetCurrentIrql() >= 2u;
  if ( a9 < 4 || *a8 != 2020897377 )
  {
    *a12 = 1;
    ConstantOperand = -2147483601;
    goto LABEL_176;
  }
  AuthzBasepResetOperands(v69, v57);
  LODWORD(v18) = 4;
  v61 = 0;
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
        if ( !AuthzBasepIsValidExpression(162LL, (__int64)v69, v19, v56) )
          goto LABEL_171;
        if ( v21 == 1 )
        {
          v58 = AuthzBasepEvaluateAttribute(*(__int64 *)&v69[1]);
          v22 = v58;
          AuthzBasepResetOperands(v69, v57);
        }
        else
        {
          ConstantOperand = AuthzBasepPopResult(v82, &v62, &v58);
          if ( ConstantOperand < 0 )
            goto LABEL_172;
          v22 = v58;
        }
        if ( v22 == -1 )
          v23 = -1;
        else
          v23 = v22 == 0;
LABEL_13:
        ConstantOperand = AuthzBasepPushResult((__int64)v82, &v62, v23);
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
            if ( HIDWORD(v69[0]) == 1 )
              goto LABEL_171;
            v58 = AuthzBasepEvaluateAttribute(*(__int64 *)&v69[1]);
            ConstantOperand = AuthzBasepPushResult((__int64)v82, &v62, v58);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            if ( LOBYTE(v57[0]) )
              ExFreePoolWithTag(*(PVOID *)(v43 + 24), 0);
            v80 = *(_OWORD *)&P[7];
            *(_OWORD *)P = *(_OWORD *)&P[9];
            *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
            P[6] = P[15];
            *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
            v69[0] = *(_OWORD *)((char *)&v69[2] + 8);
            *(_OWORD *)((char *)&v69[1] + 8) = v69[4];
            *(_QWORD *)&v69[1] = &v80;
            v57[0] = HIBYTE(v57[0]);
            memset((char *)&v69[2] + 8, 0, 0x28uLL);
            memset(&P[7], 0, 0x48uLL);
            v19 = 1;
            v61 = 1;
LABEL_54:
            ConstantOperand = AuthzBasepGetConstantOperand(
                                (char *)v12 + (unsigned int)v18,
                                a9 - (unsigned int)v18,
                                (__int64)v69 + 40 * v19,
                                v68);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            v19 = v61 + 1;
            LODWORD(v18) = v68[0] + v18;
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
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v69, v19, v56) )
            {
              ConstantOperand = -1073741406;
              if ( !v56[0] )
                goto LABEL_172;
LABEL_102:
              v23 = -1;
              v58 = -1;
              goto LABEL_13;
            }
            if ( v56[0] )
              goto LABEL_102;
            AuthzBasepEvaluateExpression(v20, (__int64)v69, &v58);
            v23 = v58;
            if ( ((_BYTE)v20 == 0x8E || (_BYTE)v20 == 0x8F) && v58 != -1 )
            {
              v23 = v58 == 0;
              v58 = v23;
            }
            goto LABEL_13;
          case 0x87:
          case 0x8D:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v69, v19, v56) )
              goto LABEL_171;
            v42 = *(_QWORD *)&v69[1] != 0LL;
            v58 = v42;
            if ( (_BYTE)v20 == 0x8D )
            {
              v42 = *(_QWORD *)&v69[1] == 0LL;
              v58 = v42;
            }
            goto LABEL_70;
          case 0x89:
          case 0x8B:
          case 0x90:
          case 0x92:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v69, v19, v56) )
            {
              ConstantOperand = -1073741406;
              if ( !v56[0] )
                goto LABEL_172;
LABEL_115:
              v42 = -1;
              v58 = -1;
              v49 = -1;
              goto LABEL_126;
            }
            if ( !v56[0] )
            {
              v50 = (_BYTE)v20 == 0x89 || (_BYTE)v20 == 0x90;
              ConstantOperand = AuthzBasepMemberOf((unsigned int)v69, v70, a10, a11, v50, (__int64)v59);
            }
            if ( ConstantOperand < 0 )
              goto LABEL_115;
            if ( v59[0] )
            {
              v42 = 1;
              v58 = 1;
              v49 = 1;
            }
            else
            {
              v42 = 0;
              v58 = 0;
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
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v69, v19, v56) )
            {
              ConstantOperand = -1073741406;
              if ( !v56[0] )
                goto LABEL_172;
LABEL_131:
              v42 = -1;
              v58 = -1;
              v49 = -1;
              goto LABEL_142;
            }
            if ( !v56[0] )
            {
              v51 = (_BYTE)v20 == 0x8A || (_BYTE)v20 == 0x91;
              ConstantOperand = AuthzBasepDeviceMemberOf((unsigned int)v69, v70, a10, a11, v51, (__int64)v59);
            }
            if ( ConstantOperand < 0 )
              goto LABEL_131;
            if ( v59[0] )
            {
              v42 = 1;
              v58 = 1;
              v49 = 1;
            }
            else
            {
              v42 = 0;
              v58 = 0;
              v49 = 0;
            }
LABEL_142:
            if ( (((_BYTE)v20 + 111) & 0xFD) == 0 && v49 != -1 )
            {
LABEL_128:
              v42 = v49 == 0;
              v58 = v42;
            }
LABEL_70:
            ConstantOperand = AuthzBasepPushResult((__int64)v82, &v62, v42);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            break;
          case 0xA0:
          case 0xA1:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v69, v19, v56) )
              goto LABEL_171;
            if ( v44 == 2 )
            {
              v65 = AuthzBasepEvaluateAttribute(*(__int64 *)&v69[1]);
              v45 = AuthzBasepEvaluateAttribute(*((__int64 *)&v69[3] + 1));
              v67 = v45;
            }
            else
            {
              if ( v44 == 1 )
              {
                v65 = AuthzBasepEvaluateAttribute(*(__int64 *)&v69[1]);
              }
              else
              {
                ConstantOperand = AuthzBasepPopResult(v82, &v62, &v65);
                if ( ConstantOperand < 0 )
                  goto LABEL_172;
              }
              ConstantOperand = AuthzBasepPopResult(v82, &v62, &v67);
              if ( ConstantOperand < 0 )
                goto LABEL_172;
              v45 = v67;
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
                v58 = 0;
                goto LABEL_99;
              }
LABEL_91:
              v47 = -1;
              goto LABEL_98;
            }
            v47 = 1;
LABEL_98:
            v58 = v47;
LABEL_99:
            ConstantOperand = AuthzBasepPushResult((__int64)v82, &v62, v47);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            break;
          case 0xA3:
            LODWORD(v18) = v18 + 1;
            if ( !AuthzBasepIsValidExpression((unsigned __int8)v20, (__int64)v69, v19, v56) )
            {
              ConstantOperand = -1073741406;
              if ( !v56[0] )
                goto LABEL_172;
LABEL_107:
              v48 = -1;
              goto LABEL_108;
            }
            if ( v56[0] )
              goto LABEL_107;
            AuthzBasepComputeExpression((unsigned __int8)v20, v69, &v74);
            if ( v74 == -1 )
              goto LABEL_107;
            v48 = v74 != 0;
LABEL_108:
            v58 = v48;
            ConstantOperand = AuthzBasepPushResult((__int64)v82, &v62, v48);
            if ( ConstantOperand < 0 )
              goto LABEL_172;
            AuthzBasepResetOperands(v69, v57);
            v19 = v61;
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
      AuthzBasepResetOperands(v69, v57);
      v19 = 0;
      v61 = 0;
      goto LABEL_36;
    }
LABEL_15:
    v24 = (unsigned int)(v18 + 1);
    if ( v19 == 2 )
    {
      if ( HIDWORD(v69[0]) == 1 )
        goto LABEL_171;
      v58 = AuthzBasepEvaluateAttribute(*(__int64 *)&v69[1]);
      ConstantOperand = AuthzBasepPushResult((__int64)v82, &v62, v58);
      if ( ConstantOperand < 0 )
        goto LABEL_172;
      if ( LOBYTE(v57[0]) )
        ExFreePoolWithTag(*(PVOID *)(v52 + 24), 0);
      v80 = *(_OWORD *)&P[7];
      *(_OWORD *)P = *(_OWORD *)&P[9];
      *(_OWORD *)&P[2] = *(_OWORD *)&P[11];
      P[6] = P[15];
      *(_OWORD *)&P[4] = *(_OWORD *)&P[13];
      v69[0] = *(_OWORD *)((char *)&v69[2] + 8);
      *(_OWORD *)((char *)&v69[1] + 8) = v69[4];
      *(_QWORD *)&v69[1] = &v80;
      v57[0] = HIBYTE(v57[0]);
      memset((char *)&v69[2] + 8, 0, 0x28uLL);
      memset(&P[7], 0, 0x48uLL);
      v19 = 1;
      v61 = 1;
    }
    if ( a9 - (unsigned int)v24 < 4 || (v25 = *(_DWORD *)((char *)v12 + v24), v26 = v24 + 4, v71 = v25, a9 - v26 < v25) )
    {
LABEL_171:
      ConstantOperand = -1073741406;
LABEL_172:
      v13 = v60;
      v16 = v55;
      goto LABEL_39;
    }
    if ( v25 > 0xFFFE )
      break;
    LODWORD(v79[3]) = v25;
    v27 = (char *)v12 + v26;
    v28 = v19;
    v79[4] = v27;
    v29 = 9LL * v19;
    v66 = v29 * 8;
    String2 = (PCUNICODE_STRING)&P[v29];
    ConstantOperand = AuthzBasepUnicodeStringFromOperandValue(
                        (__int64)v79,
                        0,
                        (unsigned __int16 *)&P[v29],
                        (_BYTE *)v57 + v19);
    if ( ConstantOperand < 0 )
      goto LABEL_172;
    if ( (_BYTE)v20 == 0xF9 )
    {
      LODWORD(P[v29 - 2]) = 3;
      v32 = (PVOID *)((char *)&P[-1] + v66);
      v30 = &P[v29 - 2];
      if ( a11 )
        v31 = a5;
      else
        v31 = v75;
    }
    else if ( (_BYTE)v20 == 0xFB )
    {
      LODWORD(P[v29 - 2]) = 5;
      v32 = (PVOID *)((char *)&P[-1] + v66);
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
        v31 = v76;
        *(_DWORD *)v30 = 4;
      }
      else if ( (_BYTE)v20 == 0xFC )
      {
        v31 = v70;
        *(_DWORD *)v30 = 6;
      }
      else
      {
        v31 = v72;
        *(_DWORD *)v30 = 2;
      }
      v32 = (PVOID *)((char *)&P[-1] + v66);
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
      && (*(_DWORD *)(v70 + 200) & 0x20000) == 0
      && SepPotentialGlobalTableAttribute(String2)
      && !v63 )
    {
      if ( !v55 )
      {
        v53 = SepValidateAndCopyGlobalEntry(v72, &v73);
        ConstantOperand = v53;
        if ( v53 < 0 )
        {
          v63 = 1;
          if ( v53 != -1073741275 )
            goto LABEL_32;
          goto LABEL_29;
        }
        v55 = 1;
      }
      *v32 = v73;
      ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v30);
      if ( ConstantOperand != -1073741275 )
        goto LABEL_32;
      *v32 = v72;
    }
LABEL_29:
    if ( v64 || *(_DWORD *)v30 != 2 )
      goto LABEL_61;
    *(_DWORD *)v30 = 7;
    *v32 = 0LL;
    ConstantOperand = AuthzBasepQuerySecurityAttributeAndValues(v30);
LABEL_32:
    if ( ConstantOperand >= 0 )
    {
      v34 = v66;
      v35 = 40 * v28;
      *(_WORD *)((char *)v69 + v35) = *(_WORD *)((char *)&P[2] + v66);
      *(_DWORD *)((char *)v69 + v35 + 4) = *(_DWORD *)((char *)&P[3] + v34);
      *(_QWORD *)((char *)&v69[1] + v35) = v30;
      goto LABEL_34;
    }
    if ( ConstantOperand != -1073741275 )
      goto LABEL_172;
LABEL_61:
    ConstantOperand = 0;
    v35 = 40 * v28;
    *(_WORD *)((char *)v69 + v35) = 0;
    *(_DWORD *)((char *)v69 + v35 + 4) = 0;
    *(_QWORD *)((char *)&v69[1] + v35) = 0LL;
    if ( *((_BYTE *)v57 + v28) )
    {
      ExFreePoolWithTag(*(PVOID *)((char *)&P[1] + v66), 0);
      if ( v28 >= 2 )
        _report_rangecheckfailure();
      *((_BYTE *)v57 + v28) = 0;
    }
LABEL_34:
    v36 = *(_DWORD *)v30;
    v19 = v61 + 1;
    LODWORD(v18) = v71 + v26;
    *(_DWORD *)((char *)&v69[1] + v35 + 8) = 0;
    *(_QWORD *)((char *)&v69[2] + v35) = 0LL;
    *(_DWORD *)((char *)v69 + v35 + 8) = 0;
    v12 = v78;
    *(_DWORD *)((char *)v69 + v35 + 12) = v36;
LABEL_35:
    v61 = v19;
LABEL_36:
    if ( (unsigned int)v18 >= a9 )
    {
      if ( v62 == 1 )
      {
        v13 = v60;
        v16 = v55;
        *v60 = v82[0];
        goto LABEL_39;
      }
      if ( !v62 && v19 == 1 )
      {
        v41 = AuthzBasepEvaluateAttribute(*(__int64 *)&v69[1]);
        v13 = v60;
        v16 = v55;
        *v60 = v41;
        goto LABEL_39;
      }
      goto LABEL_172;
    }
  }
  v13 = v60;
  ConstantOperand = -1073741562;
  v16 = v55;
LABEL_39:
  v37 = v57;
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
    v54 = v73;
    if ( v73 )
    {
      AuthzBasepFreeSecurityAttributesList(v73);
      ExFreePoolWithTag(v54, 0x74416553u);
    }
  }
  if ( ConstantOperand < 0 )
    *v13 = -1;
  return (unsigned int)ConstantOperand;
}
