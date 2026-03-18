/*
 * XREFs of OPMInitialize @ 0x1C008F084
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     ??0COPM@@QEAA@PEAJ@Z @ 0x1C008F0F4 (--0COPM@@QEAA@PEAJ@Z.c)
 */

__int64 OPMInitialize()
{
  unsigned int v0; // ebx
  int v1; // edi
  COPM *PoolWithTag; // rax
  OPM *v3; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  v5 = 0;
  PoolWithTag = (COPM *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x4D504F47u);
  if ( PoolWithTag )
  {
    v3 = COPM::COPM(PoolWithTag, &v5);
    v1 = v5;
  }
  else
  {
    v3 = 0LL;
  }
  qword_1C01CD640 = v3;
  if ( !v3 )
    return 3221225495LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v0;
}
