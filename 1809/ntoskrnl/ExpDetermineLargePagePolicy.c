/*
 * XREFs of ExpDetermineLargePagePolicy @ 0x14018D5E8
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x14018D3B8 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1406269DC (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall ExpDetermineLargePagePolicy(_QWORD *a1)
{
  unsigned __int128 v1; // rax
  unsigned __int64 *v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  *((_BYTE *)a1 + 16) = 80;
  *(_QWORD *)&v1 = MmGetNumberOfPhysicalPages(0LL);
  v3 = (unsigned __int64)v1 >> 9;
  v4 = (unsigned __int64)v1 >> 8;
  *v2 = (unsigned __int64)v1 >> 9;
  if ( (unsigned __int64)v1 >> 8 < 0x1000 )
  {
    v5 = (unsigned __int64)v1 >> 14;
  }
  else
  {
    if ( v4 < 0x4000 )
    {
      v1 = v3 * (unsigned __int128)0x47AE147AE147AE15uLL;
      v3 = *((_QWORD *)&v1 + 1) + ((v3 - *((_QWORD *)&v1 + 1)) >> 1);
    }
    v5 = v3 >> 4;
  }
  v2[1] = -1LL;
  *v2 = v5;
  if ( v4 <= 0x200 )
  {
    v2[1] = 0LL;
  }
  else
  {
    *(_QWORD *)&v1 = v2[1];
    if ( v4 < 0x800 )
      *(_QWORD *)&v1 = 2LL;
    v2[1] = v1;
  }
  return v1;
}
