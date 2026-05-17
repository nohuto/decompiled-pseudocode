/*
 * XREFs of RtlGetNtProductType @ 0x18002DCD0
 * Callers:
 *     sub_180009A9C @ 0x180009A9C (sub_180009A9C.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     sub_180072D8C @ 0x180072D8C (sub_180072D8C.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EADE0 (RtlRestoreBootStatusDefaults.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180087EB8 @ 0x180087EB8 (sub_180087EB8.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
  int v3; // eax

  v2 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
  {
    v3 = *((_DWORD *)NtCurrentPeb()->HotpatchInformation + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v3 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v3;
    return 1;
  }
  if ( (int)sub_180087EB8(a1) < 0 )
  {
    *a1 = 1;
    return v2;
  }
  return 1;
}
