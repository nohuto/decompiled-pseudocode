/*
 * XREFs of FontDriverQueryRoutineApiExt @ 0x1C00DB3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FontDriverQueryRoutineApiExt(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax

  result = IsFontDriverQueryRoutineSupported();
  if ( (int)result >= 0 )
    return FontDriverQueryRoutine(a1, a2, a3, a4, a5, a6);
  return result;
}
