/*
 * XREFs of KiTpEmulateInstruction @ 0x14029EAEC
 * Callers:
 *     KiTpHandleTrap @ 0x14029C3B4 (KiTpHandleTrap.c)
 *     KiTpParseInstruction @ 0x140846F34 (KiTpParseInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x14029E290 (KiTpAccessMemory.c)
 *     KiTpDecodeModRm @ 0x14029E3B4 (KiTpDecodeModRm.c)
 *     KiTpDecodeModRmOperand @ 0x14029E49C (KiTpDecodeModRmOperand.c)
 *     KiTpEmulateGroup0Instruction @ 0x14029E600 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x14029E85C (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x14029E90C (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateMovRegImm @ 0x14029F150 (KiTpEmulateMovRegImm.c)
 *     KiTpEmulateMovzx @ 0x14029F1E0 (KiTpEmulateMovzx.c)
 *     KiTpEmulateRegisterPushPop @ 0x14029F2E0 (KiTpEmulateRegisterPushPop.c)
 *     KiTpFetchInstructionBytes @ 0x14029F408 (KiTpFetchInstructionBytes.c)
 *     KiTpGetRegisterAddressByIndex @ 0x14029F448 (KiTpGetRegisterAddressByIndex.c)
 *     KiTpReadOperandValue @ 0x14029F5AC (KiTpReadOperandValue.c)
 *     KiTpSetFlagsZeroSignParity @ 0x14029F7F8 (KiTpSetFlagsZeroSignParity.c)
 *     KiTpSetImmediateOperandSize @ 0x14029F868 (KiTpSetImmediateOperandSize.c)
 *     KiTpSignExtendOperandValue @ 0x14029F898 (KiTpSignExtendOperandValue.c)
 *     KiTpWriteRegisterValue @ 0x14029F8C0 (KiTpWriteRegisterValue.c)
 */

__int64 __fastcall KiTpEmulateInstruction(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int InstructionBytes; // ebx
  __int64 v6; // r8
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r8
  int v10; // r9d
  int v11; // r9d
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // r9d
  _QWORD *RegisterAddressByIndex; // rax
  char v17; // r14
  int v18; // r9d
  int v19; // r9d
  _QWORD *v20; // rax
  int v21; // r9d
  __int64 v22; // rax
  int v23; // r9d
  _DWORD *v24; // rax
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  __int64 v27; // [rsp+48h] [rbp-20h] BYREF
  __int64 v28[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+38h] BYREF
  char v30; // [rsp+A8h] [rbp+40h] BYREF
  int v31; // [rsp+B0h] [rbp+48h] BYREF
  volatile void *v32; // [rsp+B8h] [rbp+50h] BYREF

  v31 = *(unsigned __int8 *)(a1 + 21);
  InstructionBytes = KiTpFetchInstructionBytes(a1, &v29, 1LL, &v31);
  if ( InstructionBytes < 0 )
    goto LABEL_92;
  if ( (v29 & 0xF0) == 0x50 )
  {
    v7 = KiTpEmulateRegisterPushPop(a1, a2, (unsigned __int8)v29);
    goto LABEL_89;
  }
  if ( (v29 & 0xF0) == 0xB0 )
  {
    v7 = KiTpEmulateMovRegImm(a1, a2, (unsigned __int8)v29, &v31);
    goto LABEL_89;
  }
  if ( (v29 & 0xC4) == 0 )
  {
    v7 = KiTpEmulateGroup0Instruction((_BYTE *)a1, a2, v29, &v31);
    goto LABEL_89;
  }
  if ( (unsigned __int8)v29 > 0x8Au )
  {
    if ( (unsigned __int8)v29 > 0xC6u )
    {
      if ( (unsigned __int8)v29 != 199 )
        goto LABEL_77;
      if ( !a2 )
        goto LABEL_87;
    }
    else
    {
      if ( (unsigned __int8)v29 != 198 )
      {
        if ( (unsigned __int8)v29 == 139 )
        {
LABEL_59:
          InstructionBytes = KiTpDecodeModRm(a1, a2, &v31);
          if ( InstructionBytes < 0 )
            goto LABEL_92;
          if ( !a2 )
            goto LABEL_47;
          KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v32, &v30, &v29);
          LOBYTE(v23) = v30;
          InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v32, v23, v29, (__int64)&v27);
          if ( InstructionBytes < 0 )
            goto LABEL_92;
          v22 = v27;
          goto LABEL_56;
        }
        if ( (unsigned __int8)v29 == 141 )
        {
          InstructionBytes = KiTpDecodeModRm(a1, a2, &v31);
          if ( InstructionBytes < 0 )
            goto LABEL_92;
          if ( !a2 )
            goto LABEL_47;
          KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v32, &v30, &v29);
          if ( (_BYTE)v29 )
          {
            v24 = *(_DWORD **)a2;
            InstructionBytes = -1073741795;
            v24[6] = 0;
            *v24 = -1073741795;
            goto LABEL_92;
          }
          v22 = (__int64)v32;
LABEL_56:
          LOBYTE(v21) = (*(_BYTE *)(a1 + 25) & 4) != 0;
          KiTpWriteRegisterValue(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v21, v22);
          goto LABEL_90;
        }
        if ( (unsigned __int8)v29 != 144 )
        {
          if ( (unsigned __int8)v29 == 194 )
          {
            if ( a2 )
            {
LABEL_74:
              InstructionBytes = KiTpAccessMemory(
                                   a2,
                                   &v26,
                                   *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL),
                                   *(_BYTE *)(a2 + 16),
                                   0,
                                   8u,
                                   0);
              if ( InstructionBytes >= 0 )
              {
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) = v26;
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) += *(_QWORD *)(a1 + 32) + 8LL;
                InstructionBytes = 0;
              }
              goto LABEL_92;
            }
            InstructionBytes = KiTpFetchInstructionBytes(a1, a1 + 32, 2LL, &v31);
            if ( InstructionBytes < 0 )
              return (unsigned int)InstructionBytes;
          }
          else if ( (unsigned __int8)v29 != 195 )
          {
            goto LABEL_77;
          }
          if ( !a2 )
            goto LABEL_47;
          goto LABEL_74;
        }
        if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
          goto LABEL_90;
LABEL_77:
        InstructionBytes = -1073741637;
        goto LABEL_92;
      }
      if ( !a2 )
      {
        *(_BYTE *)(a1 + 1) = 8;
LABEL_87:
        LOBYTE(v4) = 16;
        LOBYTE(v6) = 32;
        KiTpSetImmediateOperandSize(a1, v4, v6);
      }
    }
    v7 = KiTpEmulateGroup11Instruction(a1, a2, &v31);
    goto LABEL_89;
  }
  if ( (unsigned __int8)v29 == 138 )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 1) = 8;
    goto LABEL_59;
  }
  if ( (unsigned __int8)v29 > 0x84u )
  {
    if ( (unsigned __int8)v29 == 133 )
      goto LABEL_33;
    if ( (unsigned __int8)v29 == 134 )
    {
      if ( !a2 )
        *(_BYTE *)(a1 + 1) = 8;
    }
    else if ( (unsigned __int8)v29 != 135 )
    {
      if ( (unsigned __int8)v29 == 136 )
      {
        if ( !a2 )
          *(_BYTE *)(a1 + 1) = 8;
      }
      else if ( (unsigned __int8)v29 != 137 )
      {
        goto LABEL_77;
      }
      InstructionBytes = KiTpDecodeModRm(a1, a2, &v31);
      if ( InstructionBytes < 0 )
        goto LABEL_92;
      if ( a2 )
      {
        KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v32, &v30, &v29);
        LOBYTE(v15) = (*(_BYTE *)(a1 + 25) & 4) != 0;
        RegisterAddressByIndex = (_QWORD *)KiTpGetRegisterAddressByIndex(
                                             a1,
                                             a2,
                                             (*(unsigned __int8 *)(a1 + 26) >> 3) & 7,
                                             v15,
                                             1);
        v27 = KiTpSignExtendOperandValue(a1, *RegisterAddressByIndex);
        v28[0] = v27;
        v7 = KiTpAccessMemory(a2, v28, v32, v30, v29, *(_BYTE *)(a1 + 1) >> 3, 1);
        goto LABEL_89;
      }
LABEL_47:
      InstructionBytes = 0;
LABEL_94:
      *(_BYTE *)(a1 + 24) = v31;
      return (unsigned int)InstructionBytes;
    }
    InstructionBytes = KiTpDecodeModRm(a1, a2, &v31);
    if ( InstructionBytes < 0 )
      goto LABEL_92;
    if ( !a2 )
      goto LABEL_47;
    KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v32, &v30, &v29);
    v17 = v29;
    LOBYTE(v18) = v30;
    InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v32, v18, v29, (__int64)&v26);
    if ( InstructionBytes >= 0 )
    {
      LOBYTE(v19) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      v20 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v19, 1);
      v27 = KiTpSignExtendOperandValue(a1, *v20);
      v29 = v27;
      InstructionBytes = KiTpAccessMemory(a2, &v29, v32, v30, v17, *(_BYTE *)(a1 + 1) >> 3, 1);
      if ( InstructionBytes >= 0 )
      {
        v22 = v26;
        goto LABEL_56;
      }
    }
LABEL_92:
    if ( a2 )
      return (unsigned int)InstructionBytes;
    goto LABEL_93;
  }
  if ( (unsigned __int8)v29 == 132 )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 1) = 8;
LABEL_33:
    InstructionBytes = KiTpDecodeModRm(a1, a2, &v31);
    if ( InstructionBytes < 0 )
      goto LABEL_92;
    if ( a2 )
    {
      KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v32, &v30, &v29);
      LOBYTE(v10) = v30;
      InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v32, v10, v29, (__int64)&v26);
      if ( InstructionBytes < 0 )
        goto LABEL_92;
      LOBYTE(v11) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      v12 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v11, 1);
      v27 = KiTpSignExtendOperandValue(a1, *v12);
      v13 = v26 & v27;
      *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
      KiTpSetFlagsZeroSignParity(v14, a2, v13);
      goto LABEL_90;
    }
    goto LABEL_47;
  }
  if ( (unsigned __int8)v29 != 15 )
  {
    if ( (unsigned __int8)v29 == 128 )
    {
      if ( a2 )
        goto LABEL_23;
      *(_BYTE *)(a1 + 1) = 8;
    }
    else if ( (unsigned __int8)v29 != 129 )
    {
      if ( (unsigned __int8)v29 == 130 )
      {
        if ( a2 )
          goto LABEL_23;
        *(_BYTE *)(a1 + 1) = 8;
      }
      else if ( (unsigned __int8)v29 != 131 )
      {
        goto LABEL_77;
      }
      if ( !a2 )
      {
        LOBYTE(v6) = 8;
        LOBYTE(v4) = 8;
LABEL_22:
        KiTpSetImmediateOperandSize(a1, v4, v6);
      }
LABEL_23:
      v7 = KiTpEmulateGroup1Instruction(a1, a2, &v31);
      goto LABEL_89;
    }
    if ( a2 )
      goto LABEL_23;
    LOBYTE(v4) = 16;
    LOBYTE(v6) = 32;
    goto LABEL_22;
  }
  InstructionBytes = KiTpFetchInstructionBytes(a1, &v29, 1LL, &v31);
  if ( InstructionBytes < 0 )
    goto LABEL_92;
  if ( (unsigned __int8)(v29 + 74) > 1u )
    goto LABEL_77;
  LOBYTE(v8) = v29 & 1;
  v9 = (unsigned int)(v8 + 1);
  LOBYTE(v9) = 8 * ((v29 & 1) + 1);
  v7 = KiTpEmulateMovzx(a1, a2, v9, &v31);
LABEL_89:
  InstructionBytes = v7;
  if ( v7 < 0 )
    goto LABEL_92;
LABEL_90:
  if ( a2 )
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) += *(unsigned __int8 *)(a1 + 24);
    goto LABEL_92;
  }
LABEL_93:
  if ( InstructionBytes >= 0 )
    goto LABEL_94;
  return (unsigned int)InstructionBytes;
}
