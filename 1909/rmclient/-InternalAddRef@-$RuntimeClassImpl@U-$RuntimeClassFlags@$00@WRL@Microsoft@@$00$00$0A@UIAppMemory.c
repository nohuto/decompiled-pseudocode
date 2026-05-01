/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@IAEKXZ @ 0x10007454
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10008680 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@S.c)
 * Callees:
 *     <none>
 */

signed __int32 __thiscall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::InternalAddRef(
        volatile signed __int32 *this)
{
  volatile signed __int32 *v1; // esi
  signed __int32 i; // ecx
  signed __int32 v3; // eax

  v1 = this + 5;
  for ( i = *((_DWORD *)this + 5); i >= 0; i = v3 )
  {
    v3 = _InterlockedCompareExchange(v1, i + 1, i);
    if ( v3 == i )
      return i + 1;
  }
  return _InterlockedIncrement((volatile signed __int32 *)(2 * i + 12));
}
