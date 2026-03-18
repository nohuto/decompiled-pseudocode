/*
 * XREFs of Win32UAFMAllocPoolZInit @ 0x1C00F4A50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 *     Win32UAFMAllocPool @ 0x1C00F4880 (Win32UAFMAllocPool.c)
 */

void *__fastcall Win32UAFMAllocPoolZInit(size_t Size, unsigned int a2, __int64 a3)
{
  void *v4; // rax
  void *v5; // rbx

  v4 = (void *)Win32UAFMAllocPool(Size, a2, a3);
  v5 = v4;
  if ( v4 )
    memset(v4, 0, Size);
  return v5;
}
