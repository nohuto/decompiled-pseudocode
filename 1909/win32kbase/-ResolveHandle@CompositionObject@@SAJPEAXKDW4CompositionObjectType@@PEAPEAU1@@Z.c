/*
 * XREFs of ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C007CCC0
 * Callers:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007CC40 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007CC80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C01A0170 (NtDCompositionDuplicateHandleToProcess.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01A1B94 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::ResolveHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, int a4, PVOID Object)
{
  _QWORD *v6; // rsi
  NTSTATUS v7; // ebx
  _QWORD **v8; // rdi

  v6 = Object;
  *(_QWORD *)Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  if ( v7 >= 0 )
  {
    v8 = (_QWORD **)Object;
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v8[1] + 16LL))(v8[1]) == a4 )
        *v6 = v8;
      else
        v7 = -1073741788;
    }
    else
    {
      v7 = -1073741816;
    }
    if ( v7 < 0 )
      ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
