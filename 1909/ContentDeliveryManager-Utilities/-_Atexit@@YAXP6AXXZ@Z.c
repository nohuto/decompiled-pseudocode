/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x1800B6978
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800AEEF0 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  if ( !qword_18018E1F8 )
    abort();
  --qword_18018E1F8;
  qword_18018E4B0[qword_18018E1F8] = EncodePointer(a1);
}
