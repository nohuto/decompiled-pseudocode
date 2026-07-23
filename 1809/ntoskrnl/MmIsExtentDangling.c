/*
 * XREFs of MmIsExtentDangling @ 0x1408541B0
 * Callers:
 *     FsRtlIsExtentDangling @ 0x1408168D0 (FsRtlIsExtentDangling.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiIsPfn @ 0x1400A8820 (MiIsPfn.c)
 */

unsigned __int64 __fastcall MmIsExtentDangling(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v3; // rdx
  unsigned __int64 v4; // r9

  v2 = a1;
  if ( v2 < v2 + a2 )
  {
    do
    {
      if ( (unsigned int)MiIsPfn(v2) && (*v3 & 0x10000000000000LL) != 0 )
        break;
      ++v2;
    }
    while ( v2 < v4 );
  }
  return v2;
}
