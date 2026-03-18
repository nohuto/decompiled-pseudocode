/*
 * XREFs of AcpiTranslateBusNumberRequirements @ 0x1C00B1960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiTranslateBusNumberRequirements(int a1, _OWORD *a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  _OWORD *PoolWithTag; // rax
  int v10; // ebx

  *a5 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x52706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = a1 << 8;
  *PoolWithTag = *a2;
  PoolWithTag[1] = a2[1];
  *((_DWORD *)PoolWithTag + 3) |= v10;
  *((_DWORD *)PoolWithTag + 4) |= v10;
  *a4 = 1;
  *a5 = PoolWithTag;
  return 288LL;
}
