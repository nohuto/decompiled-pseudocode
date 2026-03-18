/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x1C0160B14
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C0160AA4 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

char *__fastcall RITORDIT(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // zf
  char *result; // rax

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) == gptiRit )
    return "Rit";
  v6 = (unsigned __int8)IsInputThread(gptiRit, v4, v5) == 0;
  result = "Mit";
  if ( v6 )
    return (char *)&unk_1C02DC591;
  return result;
}
