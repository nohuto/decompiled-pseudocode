/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x1800B2864
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800AADE0 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_180184188 )
    abort();
  --qword_180184188;
  qword_180184440[qword_180184188] = EncodePointer(a1);
}
