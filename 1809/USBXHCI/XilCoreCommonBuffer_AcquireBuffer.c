/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffer @ 0x1C0041E34
 * Callers:
 *     CommonBuffer_AcquireBuffer @ 0x1C000A890 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x1C0041F80 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C00422A4 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffer(__int64 a1, unsigned int a2, int a3, int a4, _BYTE *a5)
{
  unsigned int v5; // r10d
  unsigned int *v6; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r8

  v5 = 0;
  v6 = (unsigned int *)(a1 + 32);
  do
  {
    v11 = v6;
    if ( a2 <= *v6 )
      break;
    ++v5;
    v6 += 16;
  }
  while ( v5 < 2 );
  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v12 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, (_DWORD)v11, a3, a4, (__int64)a5);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  if ( !v12 || *a5 )
  {
    if ( KeGetCurrentIrql() )
    {
      *a5 = 1;
    }
    else
    {
      v13 = v12 == 0;
      if ( *a5 )
        v13 = v11[4] + (unsigned int)v13;
      XilCoreCommonBuffer_AllocateBuffers(a1, v11, v13);
      *a5 = 0;
      if ( v12 )
        goto LABEL_13;
      *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
      v12 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, (_DWORD)v11, a3, a4, (__int64)a5);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
    }
  }
  if ( v12 )
  {
LABEL_13:
    *(_DWORD *)(v12 + 44) = a2;
    *(_DWORD *)(v12 + 80) = 1;
  }
  return v12;
}
