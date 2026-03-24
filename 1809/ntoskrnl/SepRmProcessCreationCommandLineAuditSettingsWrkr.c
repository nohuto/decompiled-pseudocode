/*
 * XREFs of SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x14013E400
 * Callers:
 *     SepRmCommandServerThread @ 0x1407402A0 (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

char __fastcall SepRmProcessCreationCommandLineAuditSettingsWrkr(__int64 a1, __int64 a2)
{
  char result; // al

  *(_DWORD *)(a2 + 40) = 0;
  result = *(_BYTE *)(a1 + 44);
  SepRmAuditProcessCommandLine = result;
  SepRmAuditingEnabled = 1;
  return result;
}
