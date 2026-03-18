/*
 * XREFs of ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C010E7CC
 * Callers:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C010E778 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

struct UmfdUMBuffer *UmfdUMBuffer::Create(void)
{
  PVOID v0; // rax
  PVOID v1; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF

  v0 = EngAllocMem(0, 0x28u, 0x6D554446u);
  v1 = v0;
  if ( !v0 )
    return (struct UmfdUMBuffer *)v1;
  memset(v0, 0, 0x28uLL);
  RegionSize = 0x400000LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v1 + 3, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
  {
    *((_DWORD *)v1 + 9) = RegionSize;
    return (struct UmfdUMBuffer *)v1;
  }
  EngFreeMem(v1);
  return 0LL;
}
