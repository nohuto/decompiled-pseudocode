/*
 * XREFs of ?AddHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXPEBV?$function@$$A6AXXZ@std@@0@Z @ 0x180152FFC
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C010 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEBV?$function@$$A6AXXZ@std@@@?$vector@PEBV?$function@$$A6AXXZ@std@@V?$allocator@PEBV?$function@$$A6AXXZ@std@@@2@@std@@QEAAPEAPEBV?$function@$$A6AXXZ@1@QEAPEBV21@AEBQEBV21@@Z @ 0x18014C058 (--$_Emplace_reallocate@AEBQEBV-$function@$$A6AXXZ@std@@@-$vector@PEBV-$function@$$A6AXXZ@std@@V-.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::AddHandleOpenCloseCallbacks(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v6; // rbx
  _BYTE *Ptr; // rdx
  _BYTE *v8; // rdx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v6 = a1 + 7;
  AcquireSRWLockExclusive(a1 + 7);
  if ( a2 )
  {
    Ptr = a1[12].Ptr;
    if ( a1[13].Ptr == Ptr )
    {
      std::vector<std::function<void (void)> const *,std::allocator<std::function<void (void)> const *>>::_Emplace_reallocate<std::function<void (void)> const * const &>(
        (const void **)&a1[11].Ptr,
        Ptr,
        &v9);
    }
    else
    {
      *(_QWORD *)Ptr = a2;
      a1[12].Ptr = (char *)a1[12].Ptr + 8;
    }
  }
  if ( a3 )
  {
    v8 = a1[9].Ptr;
    if ( a1[10].Ptr == v8 )
    {
      std::vector<std::function<void (void)> const *,std::allocator<std::function<void (void)> const *>>::_Emplace_reallocate<std::function<void (void)> const * const &>(
        (const void **)&a1[8].Ptr,
        v8,
        &v10);
    }
    else
    {
      *(_QWORD *)v8 = a3;
      a1[9].Ptr = (char *)a1[9].Ptr + 8;
    }
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
