/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x1405AD050
 * Callers:
 *     PopRequestWrite @ 0x14059A134 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A908 (PopWriteHiberPages.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140443C16;
  v3 = 0;
  qword_140443E88 = qword_1404436F0;
  v4 = 0;
  qword_140443E90 = qword_1404436F8;
  qword_140443E98 = qword_140443718;
  qword_140443EA0 = qword_140443708;
  qword_140443EA8 = qword_140443700;
  qword_140443EB0 = qword_140443720;
  qword_140443EB8 = qword_140443710;
  qword_140443EC0 = qword_140443728;
  dword_140443EC8 = dword_140443730;
  result = (unsigned int)dword_140443444;
  dword_140443ED4 = dword_140443444;
  for ( qword_140443ECC = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140443ECC) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140443ECC) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
