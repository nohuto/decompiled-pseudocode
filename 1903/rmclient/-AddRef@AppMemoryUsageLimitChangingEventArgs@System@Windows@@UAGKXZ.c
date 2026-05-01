/*
 * XREFs of ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UAGKXZ @ 0x1000B710
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KGJPAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@123@ABU_GUID@@PAPAX@Z @ 0x10009690 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageL.c)
 *     ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W3AGKXZ @ 0x1000D500 (-AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W3AGKXZ.c)
 *     ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7AGKXZ @ 0x1000D510 (-AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7AGKXZ.c)
 * Callees:
 *     <none>
 */

signed __int32 __stdcall Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  signed __int32 i; // ecx
  signed __int32 v2; // eax

  for ( i = *((_DWORD *)this + 7); i >= 0; i = v2 )
  {
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)this + 7, i + 1, i);
    if ( v2 == i )
      return i + 1;
  }
  return _InterlockedIncrement((volatile signed __int32 *)(2 * i + 12));
}
