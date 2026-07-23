/*
 * XREFs of sub_18010A524 @ 0x18010A524
 * Callers:
 *     sub_1801070F4 @ 0x1801070F4 (sub_1801070F4.c)
 * Callees:
 *     sub_18010B09C @ 0x18010B09C (sub_18010B09C.c)
 *     sub_18010BA90 @ 0x18010BA90 (sub_18010BA90.c)
 */

__int64 __fastcall sub_18010A524(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  qword_180166A58 = 0LL;
  result = sub_18010BA90(qword_180166A60);
  if ( (int)result >= 0 )
  {
    result = sub_18010B09C(&unk_180166AA8, v6, v7, a4 - 1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
