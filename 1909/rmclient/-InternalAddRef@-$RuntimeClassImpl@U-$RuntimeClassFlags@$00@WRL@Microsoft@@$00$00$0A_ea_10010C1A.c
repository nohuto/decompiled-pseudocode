/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IAEKXZ @ 0x10010C1A
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x10010660 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMe_ea_10010660.c)
 * Callees:
 *     <none>
 */

signed __int32 __thiscall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::InternalAddRef(
        volatile signed __int32 *this)
{
  volatile signed __int32 *v1; // esi
  signed __int32 i; // ecx
  signed __int32 v3; // eax

  v1 = this + 7;
  for ( i = *((_DWORD *)this + 7); i >= 0; i = v3 )
  {
    v3 = _InterlockedCompareExchange(v1, i + 1, i);
    if ( v3 == i )
      return i + 1;
  }
  return _InterlockedIncrement((volatile signed __int32 *)(2 * i + 12));
}
