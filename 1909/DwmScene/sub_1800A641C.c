/*
 * XREFs of sub_1800A641C @ 0x1800A641C
 * Callers:
 *     sub_1800A8040 @ 0x1800A8040 (sub_1800A8040.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EDA30 @ 0x1800EDA30 (sub_1800EDA30.c)
 *     sub_1800EE370 @ 0x1800EE370 (sub_1800EE370.c)
 *     sub_1800EE508 @ 0x1800EE508 (sub_1800EE508.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 * Callees:
 *     sub_18006DEEC @ 0x18006DEEC (sub_18006DEEC.c)
 *     sub_1800A6768 @ 0x1800A6768 (sub_1800A6768.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A641C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = sub_18006DEEC();
  *(_QWORD *)a1 = v2;
  try
  {
    sub_1800A6768(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_1800A5D2C((_QWORD **)a1);
    throw;
  }
  return result;
}
