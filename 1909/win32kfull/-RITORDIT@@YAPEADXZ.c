/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x1C0161AD4
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C0161A64 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

char *__fastcall RITORDIT(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  bool v5; // zf
  char *result; // rax

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) == gptiRit )
    return "Rit";
  v5 = (unsigned __int8)IsInputThread(gptiRit, v3, v4) == 0;
  result = "Mit";
  if ( v5 )
    return (char *)&unk_1C02DA5C1;
  return result;
}
