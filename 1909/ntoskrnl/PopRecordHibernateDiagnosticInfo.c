/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x1405AD030
 * Callers:
 *     PopRequestWrite @ 0x14059A114 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A8E8 (PopWriteHiberPages.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140443B96;
  v3 = 0;
  qword_140443E08 = qword_140443670;
  v4 = 0;
  qword_140443E10 = qword_140443678;
  qword_140443E18 = qword_140443698;
  qword_140443E20 = qword_140443688;
  qword_140443E28 = qword_140443680;
  qword_140443E30 = qword_1404436A0;
  qword_140443E38 = qword_140443690;
  qword_140443E40 = qword_1404436A8;
  dword_140443E48 = dword_1404436B0;
  result = (unsigned int)dword_1404433C4;
  dword_140443E54 = dword_1404433C4;
  for ( qword_140443E4C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140443E4C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140443E4C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
