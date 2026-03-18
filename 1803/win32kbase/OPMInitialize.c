/*
 * XREFs of OPMInitialize @ 0x1C00C6ABC
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     ??0CMutex@@QEAA@PEAJ@Z @ 0x1C00BFEF0 (--0CMutex@@QEAA@PEAJ@Z.c)
 */

__int64 OPMInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  char *PoolWithTag; // rax
  char *v3; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  v5 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4D504F47u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_DWORD *)PoolWithTag + 4) = -1071774452;
    CMutex::CMutex((CMutex *)(PoolWithTag + 24), &v5);
    CMutex::CMutex((CMutex *)(v3 + 32), &v5);
    v1 = v5;
  }
  else
  {
    v3 = 0LL;
  }
  P = v3;
  if ( !v3 )
    return 3221225495LL;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v0;
}
