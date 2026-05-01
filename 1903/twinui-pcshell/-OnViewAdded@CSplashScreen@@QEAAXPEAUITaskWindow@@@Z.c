/*
 * XREFs of ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18001511C
 * Callers:
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x180014F70 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800151A0 (--$_Emplace_reallocate@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x180032328 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSplashScreen::OnViewAdded(CSplashScreen *this, struct ITaskWindow *a2)
{
  struct ITaskWindow **v4; // rdx
  const char *v5; // r9
  int (__fastcall *v6)(struct ITaskWindow *, GUID *, struct ITaskWindow **); // rbx
  __int64 v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct ITaskWindow *v10; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v10 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = (struct ITaskWindow **)*((_QWORD *)this + 13);
    if ( *((struct ITaskWindow ***)this + 14) == v4 )
    {
      std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ITaskWindow>>(
        (char *)this + 96,
        v4,
        &v10);
    }
    else
    {
      *v4 = 0LL;
      if ( v4 != &v10 )
      {
        *v4 = a2;
        v10 = 0LL;
      }
      *((_QWORD *)this + 13) += 8LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    if ( *((_BYTE *)this + 128) && !*((_BYTE *)this + 129) )
    {
      v10 = 0LL;
      v6 = *(int (__fastcall **)(struct ITaskWindow *, GUID *, struct ITaskWindow **))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      if ( v6(a2, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v10) >= 0 )
      {
        CSplashScreen::_get_ImageLocationInternal(this, &v8);
        (*(void (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)v10 + 48LL))(v10, &v8);
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(struct ITaskWindow *, __int64))(*(_QWORD *)v10 + 56LL))(v10, v7);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x37,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\splashscreen.cpp",
      v5);
  }
}
