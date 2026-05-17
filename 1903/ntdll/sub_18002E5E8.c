/*
 * XREFs of sub_18002E5E8 @ 0x18002E5E8
 * Callers:
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E4A8 @ 0x18002E4A8 (sub_18002E4A8.c)
 * Callees:
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002E5E8(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v9; // ebx
  _OWORD *v11; // r8
  _WORD *v12; // rax
  _BYTE v13[8]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v14[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( byte_180166014 || byte_180166015 )
  {
    v9 = a5;
    v11 = a2;
    v13[0] = 0;
    if ( a5 < 0 )
      v11 = (_OWORD *)a1;
    ((void (__fastcall *)(unsigned __int16 *, _BYTE *, _OWORD *))(__ROR8__(
                                                                    qword_18017A248,
                                                                    64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
      v14,
      v13,
      v11);
    if ( v13[0] )
    {
      *(_DWORD *)(a1 + 32) |= 0x10000u;
      sub_18002E1A4((__int64)a2);
      v12 = *(_WORD **)(a4 + 8);
      *(_WORD *)a4 = 0;
      *v12 = 0;
      return (unsigned int)sub_180029CEC(v14, a4, a3, a2, *(_DWORD *)(a1 + 32));
    }
  }
  else
  {
    return (unsigned int)a5;
  }
  return v9;
}
