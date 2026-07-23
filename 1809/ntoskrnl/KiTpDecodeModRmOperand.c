/*
 * XREFs of KiTpDecodeModRmOperand @ 0x14029E49C
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x14029E600 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x14029E85C (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x14029E90C (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x14029EAEC (KiTpEmulateInstruction.c)
 *     KiTpEmulateMovzx @ 0x14029F1E0 (KiTpEmulateMovzx.c)
 * Callees:
 *     KiTpGetRegisterAddressByIndex @ 0x14029F448 (KiTpGetRegisterAddressByIndex.c)
 */

__int64 __fastcall KiTpDecodeModRmOperand(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v5; // rdi
  __int64 v6; // r11
  unsigned __int8 v7; // cl
  int v9; // esi
  __int64 RegisterAddressByIndex; // rbx
  _BYTE *v11; // r10
  unsigned __int8 v12; // r10
  _QWORD *v13; // rax
  unsigned __int64 v14; // r10
  __int64 result; // rax

  v5 = 0LL;
  v6 = a1;
  v7 = *(_BYTE *)(a1 + 26);
  *a4 = *(_BYTE *)(a2 + 16);
  v9 = a2;
  *a5 = 0;
  RegisterAddressByIndex = 0LL;
  if ( (v7 & 0xC0) == 0xC0 )
  {
    LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
    RegisterAddressByIndex = KiTpGetRegisterAddressByIndex(v6, a2, v7 & 7, (_DWORD)a4, 1);
    *v11 = 0;
    *a5 = 1;
  }
  else if ( (v7 & 7) == 4 )
  {
    v12 = *(_BYTE *)(v6 + 27);
    if ( (v12 & 7) != 5 || v7 >= 0x40u )
    {
      LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
      RegisterAddressByIndex = *(_QWORD *)KiTpGetRegisterAddressByIndex(v6, a2, v12 & 7, (_DWORD)a4, 0);
    }
    if ( (v12 & 0x38) != 0x20 || (*(_BYTE *)(v6 + 25) & 2) != 0 )
    {
      LOBYTE(a4) = (*(_BYTE *)(v6 + 25) & 2) != 0;
      v13 = (_QWORD *)KiTpGetRegisterAddressByIndex(v6, v9, (v12 >> 3) & 7, (_DWORD)a4, 0);
      v5 = *v13 << (v14 >> 6);
    }
  }
  else if ( v7 >= 0x40u || (v7 & 7) != 5 || (*(_BYTE *)(v6 + 25) & 1) != 0 )
  {
    LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
    RegisterAddressByIndex = *(_QWORD *)KiTpGetRegisterAddressByIndex(v6, a2, v7 & 7, (_DWORD)a4, 0);
  }
  else
  {
    RegisterAddressByIndex = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) + *(unsigned __int8 *)(v6 + 24);
  }
  result = RegisterAddressByIndex + v5 + *(int *)(v6 + 28);
  *a3 = result;
  return result;
}
