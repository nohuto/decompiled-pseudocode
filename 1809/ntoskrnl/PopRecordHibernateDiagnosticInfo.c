/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x14057D190
 * Callers:
 *     PopWriteHiberPages @ 0x140569C48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056A5F4 (PopRequestWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  PopHibernateDiagnosticInfo = byte_140418236;
  v3 = 0;
  qword_1404184C8 = qword_140417D30;
  v4 = 0;
  qword_1404184D0 = qword_140417D38;
  qword_1404184D8 = qword_140417D58;
  qword_1404184E0 = qword_140417D48;
  qword_1404184E8 = qword_140417D40;
  qword_1404184F0 = qword_140417D60;
  qword_1404184F8 = qword_140417D50;
  qword_140418500 = qword_140417D68;
  dword_140418508 = dword_140417D70;
  result = (unsigned int)dword_140417864;
  dword_140418514 = dword_140417864;
  for ( qword_14041850C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_14041850C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_14041850C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
