/*
 * XREFs of FsRtlpPrepareExtraCreateParametersForCreate @ 0x14058294C
 * Callers:
 *     IoCreateFileEx @ 0x14060C870 (IoCreateFileEx.c)
 *     IoQueryInformationByName @ 0x14081D740 (IoQueryInformationByName.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlpPrepareExtraCreateParametersForCreate(ULONG_PTR BugCheckParameter4)
{
  int v1; // edx
  int v2; // r8d
  int v3; // edx
  __int64 *v5; // rax

  v1 = *(_DWORD *)(BugCheckParameter4 + 4);
  v2 = v1 & 9;
  if ( (v1 & 9) != 0 )
  {
    if ( (v1 & 0x3F0) == 0x3F0 )
      return 3221226539LL;
    v3 = v1 + 16;
  }
  else
  {
    v3 = v1 | 1;
  }
  *(_DWORD *)(BugCheckParameter4 + 4) = v3;
  v5 = *(__int64 **)(BugCheckParameter4 + 8);
  if ( v5 == (__int64 *)(BugCheckParameter4 + 8) )
    KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, BugCheckParameter4);
  do
  {
    if ( !v2 )
      *((_DWORD *)v5 + 10) |= 1u;
    v5 = (__int64 *)*v5;
  }
  while ( v5 != (__int64 *)(BugCheckParameter4 + 8) );
  return 0LL;
}
