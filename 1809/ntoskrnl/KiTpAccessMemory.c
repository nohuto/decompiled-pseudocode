/*
 * XREFs of KiTpAccessMemory @ 0x14029E290
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x14029E600 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x14029E85C (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x14029E90C (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x14029EAEC (KiTpEmulateInstruction.c)
 *     KiTpEmulateMovzx @ 0x14029F1E0 (KiTpEmulateMovzx.c)
 *     KiTpEmulateRegisterPushPop @ 0x14029F2E0 (KiTpEmulateRegisterPushPop.c)
 *     KiTpReadOperandValue @ 0x14029F5AC (KiTpReadOperandValue.c)
 * Callees:
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

__int64 __fastcall KiTpAccessMemory(
        __int64 a1,
        _BYTE *a2,
        volatile void *a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // rax

  if ( a4 == 1 )
  {
    if ( a7 )
    {
      ProbeForWrite(a3, a6, 1u);
    }
    else if ( a6 )
    {
      v9 = (unsigned __int64)a3 + a6;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v10 = a2;
  if ( !a7 )
    v10 = a3;
  v11 = a3;
  if ( !a7 )
    v11 = a2;
  switch ( a6 )
  {
    case 1u:
      *v11 = *v10;
      return 0LL;
    case 2u:
      *(_WORD *)v11 = *(_WORD *)v10;
      return 0LL;
    case 4u:
      if ( !a7 || !a5 )
      {
        *(_DWORD *)v11 = *(_DWORD *)v10;
        return 0LL;
      }
      v12 = *(unsigned int *)v10;
      break;
    default:
      v12 = *(_QWORD *)v10;
      break;
  }
  *(_QWORD *)v11 = v12;
  return 0LL;
}
