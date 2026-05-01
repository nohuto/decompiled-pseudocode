/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@IAEKXZ @ 0x10010C52
 * Callers:
 *     ?AddRef@CProcessMemoryReport@System@Windows@@UAGKXZ @ 0x10010680 (-AddRef@CProcessMemoryReport@System@Windows@@UAGKXZ.c)
 * Callees:
 *     <none>
 */

signed __int32 __thiscall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::InternalAddRef(
        volatile signed __int32 *this)
{
  volatile signed __int32 *v1; // esi
  signed __int32 i; // ecx
  signed __int32 v3; // eax

  v1 = this + 4;
  for ( i = *((_DWORD *)this + 4); i >= 0; i = v3 )
  {
    v3 = _InterlockedCompareExchange(v1, i + 1, i);
    if ( v3 == i )
      return i + 1;
  }
  return _InterlockedIncrement((volatile signed __int32 *)(2 * i + 12));
}
