/*
 * XREFs of ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAVViewManagerBridge@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180267564
 * Callers:
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x18026E3A0 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewManagerBridge@@QEAA@XZ @ 0x180268914 (--0ViewManagerBridge@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z @ 0x18026A600 (-Attach@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x18026C500 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180289C14 (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
        ViewManagerBridge **a1,
        struct ViewEventDispatcher **a2)
{
  ViewManagerBridge *v4; // rax
  int v5; // edi
  ViewManagerBridge *v6; // rax
  struct ViewEventDispatcher *v7; // rdx
  ViewManagerBridge *v8; // rbx
  ViewManagerBridge *v10; // [rsp+30h] [rbp+8h] BYREF
  ViewManagerBridge *v11; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (ViewManagerBridge *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( v4 )
  {
    v6 = ViewManagerBridge::ViewManagerBridge(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ViewManagerBridge>::Attach(&v10, v6);
    v7 = *a2;
    v8 = v10;
    v5 = ViewManagerBridge::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v8 + 19);
        v8 = v10;
      }
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ViewManagerBridge>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
