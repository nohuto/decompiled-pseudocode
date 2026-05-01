/*
 * XREFs of ?_EnsureInit@DefaultMarshaler@Streams@Storage@Windows@@AEAAJXZ @ 0x1802B0618
 * Callers:
 *     ?GetMarshalSizeMax@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1802A5530 (-GetMarshalSizeMax@-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windo_ea_1802A5530.c)
 *     ?GetUnmarshalClass@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAU5@@Z @ 0x1802A5BA0 (-GetUnmarshalClass@-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windo_ea_1802A5BA0.c)
 *     ?MarshalInterface@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1802A6C60 (-MarshalInterface@-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Window_ea_1802A6C60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Storage::Streams::DefaultMarshaler::_EnsureInit(
        Windows::Storage::Streams::DefaultMarshaler *this)
{
  int BufferMarshaler; // ebx
  signed __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  BufferMarshaler = 0;
  if ( !*(_QWORD *)this )
  {
    v4 = 0LL;
    BufferMarshaler = RoGetBufferMarshaler(&v4);
    if ( BufferMarshaler >= 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this, v4, 0LL) )
        (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return (unsigned int)BufferMarshaler;
}
