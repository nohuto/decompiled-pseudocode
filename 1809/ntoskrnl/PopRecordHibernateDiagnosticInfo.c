/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x14057E190
 * Callers:
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
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
  PopHibernateDiagnosticInfo = byte_1404192F6;
  v3 = 0;
  qword_140419568 = qword_140418DD0;
  v4 = 0;
  qword_140419570 = qword_140418DD8;
  qword_140419578 = qword_140418DF8;
  qword_140419580 = qword_140418DE8;
  qword_140419588 = qword_140418DE0;
  qword_140419590 = qword_140418E00;
  qword_140419598 = qword_140418DF0;
  qword_1404195A0 = qword_140418E08;
  dword_1404195A8 = dword_140418E10;
  result = (unsigned int)dword_140418904;
  dword_1404195B4 = dword_140418904;
  for ( qword_1404195AC = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_1404195AC) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_1404195AC) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
