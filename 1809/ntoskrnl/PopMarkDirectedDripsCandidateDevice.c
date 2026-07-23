/*
 * XREFs of PopMarkDirectedDripsCandidateDevice @ 0x14087E044
 * Callers:
 *     PopReportDirectedDripsCandidateChildren @ 0x14087E0E4 (PopReportDirectedDripsCandidateChildren.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     PopDirectedDripsIsExcludedDevice @ 0x14087DE04 (PopDirectedDripsIsExcludedDevice.c)
 */

char __fastcall PopMarkDirectedDripsCandidateDevice(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **v3; // rax
  __int64 v6; // rbx
  int v7; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  char v10; // [rsp+40h] [rbp+18h] BYREF
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = &retaddr;
  v6 = a1;
  if ( (a3 & 8) == 0 )
    goto LABEL_5;
  LODWORD(v3) = PopDirectedDripsIsExcludedDevice(a1, &v10, &v11);
  if ( (int)v3 < 0 )
    return (char)v3;
  if ( v10 || v11 )
  {
    while ( v6 != a2 )
    {
      *(_DWORD *)(v6 + 296) &= ~0x80u;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  else
  {
LABEL_5:
    if ( (a3 & 4) != 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        LOBYTE(v3) = RtlPrefixUnicodeString(
                       (PCUNICODE_STRING)&PopDripsIncludeInstancePrefix[8 * v7],
                       (PCUNICODE_STRING)(v6 + 40),
                       1u);
        if ( (_BYTE)v3 )
          break;
        if ( ++v7 )
          return (char)v3;
      }
      *(_DWORD *)(v6 + 296) |= 0x80u;
    }
  }
  return (char)v3;
}
