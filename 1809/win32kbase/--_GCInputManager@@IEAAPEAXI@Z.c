/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0093A98
 * Callers:
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C0093A70 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C0093CC0 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0037EE8 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  void *v2; // rcx
  __int64 i; // rsi
  __int64 v5; // rcx

  v2 = *(void **)this;
  if ( v2 )
    ZwClose(v2);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
    if ( v5 )
      Win32FreePool(v5);
  }
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((__int64)this + 112);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((__int64)this + 112);
  Win32FreePool((__int64)this);
  return this;
}
