/*
 * XREFs of sub_18000456C @ 0x18000456C
 * Callers:
 *     sub_1800059B8 @ 0x1800059B8 (sub_1800059B8.c)
 *     sub_180086DAC @ 0x180086DAC (sub_180086DAC.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     sub_18010D214 @ 0x18010D214 (sub_18010D214.c)
 */

__int64 __fastcall sub_18000456C(PUNICODE_STRING String2, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !String2 )
    return 4201LL;
  v4 = 0;
  while ( 1 )
  {
    v5 = v4 & 0xFFFF7FFF;
    LODWORD(v10) = v4 & 0xFFFF7FFF;
    if ( qword_180163518 )
      break;
LABEL_4:
    if ( ++v4 >= 0x40 )
      return 4201LL;
  }
  if ( v5 >= 0x40 )
  {
    if ( (unsigned int)sub_18010D214(v4, &v10) )
      goto LABEL_4;
    v5 = v10;
  }
  v7 = 2LL * v5;
  _InterlockedIncrement((volatile signed __int32 *)(qword_180163518 + 16LL * v5 + 8));
  v8 = *(_QWORD *)(qword_180163518 + 16LL * v5);
  if ( (v8 & 1) != 0 )
  {
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 8 * v7 + 8));
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(qword_180163518 + 16LL * v5);
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)(v8 + 152), String2, 1u) )
  {
    v7 = 2LL * v4;
    goto LABEL_8;
  }
  *a2 = v9;
  return 0LL;
}
