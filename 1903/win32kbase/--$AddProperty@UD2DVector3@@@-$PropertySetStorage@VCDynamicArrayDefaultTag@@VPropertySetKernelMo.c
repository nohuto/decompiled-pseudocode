/*
 * XREFs of ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1C009E1EC
 * Callers:
 *     ??$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C00BFB58 (--$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 * Callees:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C0011428 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DVector3>(
        __int64 a1,
        int a2,
        __int64 *a3,
        _DWORD *a4)
{
  __int64 v5; // rbp
  int v7; // r12d
  __int64 result; // rax
  unsigned int v10; // esi
  int v11; // ebx
  void *v12; // rax
  void *v13; // r14
  const void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // xmm0_8
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1;
  v5 = *(unsigned int *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  if ( (v5 & 0xE0000000) != 0 )
    return 2147483659LL;
  LODWORD(v17) = a2;
  HIDWORD(v17) = v5 & 0x1FFFFFFF;
  result = CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
             a1,
             &v17);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 24) + 12;
    if ( *(_DWORD *)(a1 + 24) < 0xFFFFFFF4 )
    {
      v11 = 0;
      if ( v10 <= *(_DWORD *)(a1 + 28) )
        goto LABEL_10;
      if ( is_mul_ok(v10, 1uLL) )
      {
        v12 = (void *)Win32AllocPool(v10, 0x77707355u);
        v13 = v12;
        if ( v12 )
        {
          v14 = *(const void **)(a1 + 16);
          if ( v14 )
          {
            memmove(v12, v14, *(unsigned int *)(a1 + 24));
            Win32FreePool(*(_QWORD *)(a1 + 16));
          }
          *(_QWORD *)(a1 + 16) = v13;
          *(_DWORD *)(a1 + 28) = v10;
        }
        else
        {
          v11 = -1073741801;
        }
LABEL_10:
        if ( v11 >= 0 )
        {
          *(_DWORD *)(a1 + 24) += 12;
          v15 = *(_QWORD *)(a1 + 16);
          v16 = *a3;
          *a4 = v7;
          *(_QWORD *)(v5 + v15) = v16;
          *(_DWORD *)(v5 + v15 + 8) = *((_DWORD *)a3 + 2);
          return 0LL;
        }
        return (unsigned int)v11;
      }
    }
    return (unsigned int)-1073741675;
  }
  return result;
}
