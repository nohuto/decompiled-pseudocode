/*
 * XREFs of EtwpCaptureRegistryData @ 0x1408BC19C
 * Callers:
 *     EtwpRegTraceCallback @ 0x1408BC230 (EtwpRegTraceCallback.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureRegistryData(_QWORD *a1, const void *a2, unsigned int a3)
{
  size_t v3; // rbx
  PVOID v6; // rdi
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax

  LOWORD(v3) = a3;
  v6 = 0LL;
  if ( a3 )
  {
    v7 = 2048;
    if ( a3 <= 0x800 )
      v7 = a3;
    v3 = v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x31777445u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, a2, v3);
    else
      LOWORD(v3) = 0;
  }
  *a1 = v6;
  return (unsigned __int16)v3;
}
