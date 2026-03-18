/*
 * XREFs of ?Grow@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0019BE8
 * Callers:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0019AFC (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Grow(
        _QWORD *a1)
{
  unsigned int v1; // esi
  unsigned int v3; // ebx
  void *v4; // rax
  void *v5; // rbp

  v1 = -1;
  if ( *((_DWORD *)a1 + 2) != -1 )
    v1 = *((_DWORD *)a1 + 2) + 1;
  v3 = *((_DWORD *)a1 + 2) == -1 ? 0xC0000095 : 0;
  if ( *((_DWORD *)a1 + 2) != -1 && v1 > *((_DWORD *)a1 + 3) )
  {
    v3 = 0;
    if ( is_mul_ok(v1, 8uLL) )
    {
      v4 = (void *)Win32AllocPool(8LL * v1, 2003858261LL);
      v5 = v4;
      if ( v4 )
      {
        if ( *a1 )
        {
          memmove(v4, (const void *)*a1, 8LL * *((unsigned int *)a1 + 2));
          Win32FreePool(*a1);
        }
        *a1 = v5;
        *((_DWORD *)a1 + 3) = v1;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v3;
}
