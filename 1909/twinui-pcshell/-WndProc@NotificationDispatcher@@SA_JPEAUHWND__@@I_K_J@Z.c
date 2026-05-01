/*
 * XREFs of ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18005BA10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801334C8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall NotificationDispatcher::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile int *v5; // rdx
  LONG_PTR v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rsi
  _QWORD *v9; // r15
  _QWORD *i; // rdi
  _QWORD *v11; // rdi

  if ( a2 != 1025 )
    return DefWindowProcW(a1, a2, a3, a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v6 = WindowLongPtrW;
  if ( WindowLongPtrW )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(WindowLongPtrW);
  if ( v6 && !*(_BYTE *)(v6 + 88) )
  {
    *(_BYTE *)(v6 + 88) = 1;
    AcquireSRWLockExclusive((PSRWLOCK)(v6 + 80));
    v7 = *(_QWORD **)(v6 + 48);
    v8 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
    if ( v6 != -80 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v6 + 80));
    v9 = &v7[v8];
    for ( i = v7; i != v9; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, 0LL);
    *(_BYTE *)(v6 + 88) = 0;
    AcquireSRWLockShared((PSRWLOCK)(v6 + 80));
    if ( *(_QWORD *)(v6 + 56) )
      PostMessageW(*(HWND *)(v6 + 40), 0x401u, 0LL, 0LL);
    if ( v6 != -80 )
      ReleaseSRWLockShared((PSRWLOCK)(v6 + 80));
    if ( v7 )
    {
      if ( v8 )
      {
        v11 = v7;
        do
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11++);
          --v8;
        }
        while ( v8 );
      }
      CoTaskMemFree(v7);
    }
  }
  if ( v6 && !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v6 + 36), v5) )
  {
    (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
