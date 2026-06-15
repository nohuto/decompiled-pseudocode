/*
 * XREFs of ?ZeroOutObject@SpatialBlock@@QEAAJII@Z @ 0x14005D43C
 * Callers:
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14005D400 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

__int64 __fastcall SpatialBlock::ZeroOutObject(SpatialBlock *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rbp
  unsigned int v7; // ecx

  v3 = 0;
  if ( a3 >= *(_DWORD *)(*(_QWORD *)this + 8LL) || a2 >= 2 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v6 = 3LL * a2;
    memset_0(
      (void *)(*((_QWORD *)this + 3 * a2 + 3) + a3 * *(_DWORD *)(*(_QWORD *)this + 20LL)),
      0,
      *(unsigned int *)(*(_QWORD *)this + 20LL));
    memset_0(
      (void *)(*((_QWORD *)this + v6 + 1) + a3 * *(_DWORD *)(*(_QWORD *)this + 12LL)),
      0,
      *(unsigned int *)(*(_QWORD *)this + 12LL));
    v7 = *(_DWORD *)(*(_QWORD *)this + 16LL);
    if ( v7 )
      memset_0((void *)(*((_QWORD *)this + v6 + 2) + a3 * v7), 0, v7);
  }
  return v3;
}
