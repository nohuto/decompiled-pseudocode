/*
 * XREFs of FsRtlpPrepareExtraCreateParametersForCreate @ 0x1405B093C
 * Callers:
 *     IoCreateFileEx @ 0x140616F50 (IoCreateFileEx.c)
 *     IoQueryInformationByName @ 0x140856560 (IoQueryInformationByName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlpPrepareExtraCreateParametersForCreate(ULONG_PTR BugCheckParameter4)
{
  int v1; // edx
  char v2; // r8
  int v4; // edx
  __int64 *v5; // rax

  v1 = *(_DWORD *)(BugCheckParameter4 + 4);
  if ( (v1 & 9) != 0 )
  {
    v2 = 0;
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x3F0) == 0x3F0 )
      return 3221226539LL;
    v4 = v1 + 16;
  }
  else
  {
    v2 = 1;
    v4 = v1 | 1;
  }
  *(_DWORD *)(BugCheckParameter4 + 4) = v4;
  v5 = *(__int64 **)(BugCheckParameter4 + 8);
  if ( v5 == (__int64 *)(BugCheckParameter4 + 8) )
    KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, BugCheckParameter4);
  do
  {
    if ( v2 )
      *((_DWORD *)v5 + 10) |= 1u;
    v5 = (__int64 *)*v5;
  }
  while ( v5 != (__int64 *)(BugCheckParameter4 + 8) );
  return 0LL;
}
