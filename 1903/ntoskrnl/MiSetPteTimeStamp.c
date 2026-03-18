/*
 * XREFs of MiSetPteTimeStamp @ 0x1400763C0
 * Callers:
 *     MiInitializeTbFlushStamps @ 0x140076374 (MiInitializeTbFlushStamps.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiSetPteTimeStamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8

  v4 = 0;
  v5 = a2;
  if ( a1 )
  {
    a2 = qword_140465B00;
    if ( qword_140465B00 )
    {
      if ( (a1 & 0x10) != 0 )
      {
        LODWORD(a1) = a1 & 0xFFFFFFEF;
      }
      else
      {
        a2 = ~qword_140465B00;
        LODWORD(a1) = ~(_DWORD)qword_140465B00 & a1;
      }
    }
    v4 = a1;
  }
  return MiSwizzleInvalidPte((v5 << 32) | v4, a2, v5 << 32, a4);
}
