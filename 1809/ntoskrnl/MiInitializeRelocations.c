/*
 * XREFs of MiInitializeRelocations @ 0x1409BAA40
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeRelocations()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rax
  PVOID v2; // rax
  unsigned int *v3; // rax
  unsigned int v4; // r8d
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !PoolWithTag )
    return 0LL;
  dword_140439E48 = 10240;
  qword_140439E50 = (__int64)PoolWithTag;
  memset(PoolWithTag, 0, 0x500uLL);
  v1 = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !v1 )
    return 0LL;
  dword_140439E60 = 10240;
  qword_140439E68 = (__int64)v1;
  memset(v1, 0, 0x500uLL);
  v2 = ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x69526D4Du);
  if ( !v2 )
    return 0LL;
  dword_140439E70 = 0x7FFFF;
  qword_140439E78 = (__int64)v2;
  memset(v2, 0, 0x10000uLL);
  v3 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
  if ( !v3 )
    return 0LL;
  Destination.SizeOfBitMap = 10240;
  Destination.Buffer = v3;
  memset(v3, 0, 0x500uLL);
  dword_140439E3C = (unsigned __int8)ExGenRandom(1);
  dword_140439E58 = (unsigned int)ExGenRandom(1) % 0x2800;
  v4 = ExGenRandom(1);
  result = 1LL;
  dword_140439E5C = v4 % 0x7FFFF;
  return result;
}
