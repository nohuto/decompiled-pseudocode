/*
 * XREFs of PfpRpInitialize @ 0x1409D5B8C
 * Callers:
 *     PfInitializeSuperfetch @ 0x1409D5634 (PfInitializeSuperfetch.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     PfpRpStart @ 0x140754268 (PfpRpStart.c)
 */

__int64 __fastcall PfpRpInitialize(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 result; // rax

  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v2 = 8;
  *(_QWORD *)a1 = 0LL;
  v3 = 8;
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = -1;
  v5 = -1;
  do
  {
    ++v5;
    v3 >>= 1;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_DWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 56) = 0LL;
  do
  {
    ++v4;
    v2 >>= 1;
  }
  while ( v2 );
  *(_DWORD *)(a1 + 104) = v4;
  *(_QWORD *)(a1 + 108) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 136));
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  result = (unsigned int)xmmword_14043CF84;
  if ( (xmmword_14043CF84 & 2) != 0 )
    return PfpRpStart(a1);
  return result;
}
