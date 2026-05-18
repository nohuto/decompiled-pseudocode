/*
 * XREFs of sub_1800A630C @ 0x1800A630C
 * Callers:
 *     sub_1800A7F30 @ 0x1800A7F30 (sub_1800A7F30.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800ED920 @ 0x1800ED920 (sub_1800ED920.c)
 *     sub_1800EE260 @ 0x1800EE260 (sub_1800EE260.c)
 *     sub_1800EE3F8 @ 0x1800EE3F8 (sub_1800EE3F8.c)
 *     sub_1800FF368 @ 0x1800FF368 (sub_1800FF368.c)
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 * Callees:
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 *     sub_1800A6658 @ 0x1800A6658 (sub_1800A6658.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A630C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_18006DDDC();
  *(_QWORD *)a1 = v2;
  try
  {
    sub_1800A6658(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_1800A5C1C((_QWORD **)a1);
    throw;
  }
  return result;
}
