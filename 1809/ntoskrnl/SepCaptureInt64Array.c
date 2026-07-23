/*
 * XREFs of SepCaptureInt64Array @ 0x1406C5174
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureInt64Array(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r15
  unsigned int v8; // edi
  PVOID PoolWithTag; // rbx

  v6 = 8LL * a2;
  v7 = 0xFFFFFFFFLL;
  if ( v6 <= 0xFFFFFFFF )
    v7 = (unsigned int)v6;
  v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v6 > 0xFFFFFFFF )
    return v8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v7, 0x74416553u);
  if ( PoolWithTag )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v7] > 0x7FFFFFFF0000LL || &Src[v7] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src, (unsigned int)v7);
    if ( (v8 & 0x80000000) != 0 )
      ExFreePoolWithTag(PoolWithTag, 0);
    else
      *a4 = PoolWithTag;
    return v8;
  }
  return 3221225626LL;
}
