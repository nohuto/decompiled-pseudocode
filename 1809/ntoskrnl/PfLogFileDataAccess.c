/*
 * XREFs of PfLogFileDataAccess @ 0x1402D3368
 * Callers:
 *     MiLogRelocationRva @ 0x14064C34C (MiLogRelocationRva.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     PfLogEvent @ 0x1400D5478 (PfLogEvent.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]

  if ( (unsigned int)PsGetPagePriorityThread(a2) < dword_14043B9AC )
    return 0LL;
  v10 = *(_QWORD *)(v5 + 544);
  v11 = *(_QWORD *)(v10 + 736);
  v13[2] = v7 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v12 = *(_QWORD *)(v10 + 776);
  v15 = v11;
  v13[1] = v6 >> 12;
  v13[3] = (v11 ^ v12) & 0x1FFFFFFFFFFFFFFFLL;
  v14 = dword_1404D8610;
  v13[0] = v8;
  return PfLogEvent(
           10,
           dword_14043D15C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v13,
           0x28u);
}
