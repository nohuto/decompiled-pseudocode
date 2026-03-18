/*
 * XREFs of ??0COPM@@QEAA@PEAJ@Z @ 0x1C00A310C
 * Callers:
 *     OPMInitialize @ 0x1C00A309C (OPMInitialize.c)
 * Callees:
 *     ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x1C00A32B0 (--0CMutex@OPM@@QEAA@PEAJ@Z.c)
 */

COPM *__fastcall COPM::COPM(COPM *this, int *a2)
{
  struct _LOOKASIDE_LIST_EX *PoolWithTag; // rax
  struct _LOOKASIDE_LIST_EX *v5; // rax
  struct _LOOKASIDE_LIST_EX *v6; // rax

  *(_QWORD *)this = 0LL;
  if ( *a2 >= 0 )
  {
    PoolWithTag = (struct _LOOKASIDE_LIST_EX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4D504F47u);
    *(_QWORD *)this = PoolWithTag;
    if ( PoolWithTag )
      *a2 = ExInitializeLookasideListEx(PoolWithTag, 0LL, 0LL, PagedPool, 2u, 0x1010uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( *a2 >= 0 )
  {
    v5 = (struct _LOOKASIDE_LIST_EX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4D504F47u);
    *((_QWORD *)this + 1) = v5;
    if ( v5 )
      *a2 = ExInitializeLookasideListEx(v5, 0LL, 0LL, PagedPool, 2u, 0x1000uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  *((_QWORD *)this + 2) = 0LL;
  if ( *a2 >= 0 )
  {
    v6 = (struct _LOOKASIDE_LIST_EX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x60uLL, 0x4D504F47u);
    *((_QWORD *)this + 2) = v6;
    if ( v6 )
      *a2 = ExInitializeLookasideListEx(v6, 0LL, 0LL, PagedPool, 2u, 0x1000uLL, 0x4D504F47u, 0);
    else
      *a2 = -1073741670;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = -1071774452;
  OPM::CMutex::CMutex((COPM *)((char *)this + 48), a2);
  OPM::CMutex::CMutex((COPM *)((char *)this + 56), a2);
  return this;
}
