/*
 * XREFs of ?_GetViews@ViewEventDispatcher@@AEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18027439C
 * Callers:
 *     ?GetViews@ViewEventDispatcher@@UEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18026BF00 (-GetViews@ViewEventDispatcher@@UEAAXAEAV-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180267D54 (--$_Emplace_reallocate@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@M.c)
 *     ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x180276414 (-reserve@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::_GetViews(RTL_SRWLOCK *a1, char **a2)
{
  RTL_SRWLOCK *v4; // rbp
  __int64 *Ptr; // rsi
  __int64 *v6; // r14
  __int64 v7; // rbx
  char *v8; // rdx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+78h] [rbp+20h]

  v4 = a1 + 35;
  AcquireSRWLockShared(a1 + 35);
  v11 = v4;
  std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::reserve(
    a2,
    a1[45].Ptr);
  Ptr = (__int64 *)a1[44].Ptr;
  v6 = &Ptr[(__int64)a1[45].Ptr];
  while ( Ptr != v6 )
  {
    v10 = *Ptr;
    v7 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v9 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v8 = a2[1];
    if ( a2[2] == v8 )
    {
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
        a2,
        v8,
        &v9);
    }
    else
    {
      *(_QWORD *)v8 = 0LL;
      if ( v8 != (char *)&v9 )
      {
        *(_QWORD *)v8 = v7;
        v9 = 0LL;
      }
      a2[1] += 8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    ++Ptr;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
}
