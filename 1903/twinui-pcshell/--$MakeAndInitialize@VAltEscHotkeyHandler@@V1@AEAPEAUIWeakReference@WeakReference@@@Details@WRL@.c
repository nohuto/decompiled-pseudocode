/*
 * XREFs of ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x180358CE8
 * Callers:
 *     ?AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180358F18 (-AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AltEscHotkeyHandler@@QEAA@XZ @ 0x180358D90 (--0AltEscHotkeyHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180359028 (-InternalRelease@-$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x18035905C (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AltEscHotkeyHandler,AltEscHotkeyHandler,WeakReference::IWeakReference * &>(
        AltEscHotkeyHandler **a1,
        struct IWeakReference **a2)
{
  AltEscHotkeyHandler *v4; // rax
  int v5; // edi
  AltEscHotkeyHandler *v6; // rax
  struct IWeakReference *v7; // rdx
  AltEscHotkeyHandler *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  AltEscHotkeyHandler *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (AltEscHotkeyHandler *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = AltEscHotkeyHandler::AltEscHotkeyHandler(v4);
    v7 = *a2;
    v8 = v6;
    v12 = v6;
    v5 = AltEscHotkeyHandler::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        v9 = *((_QWORD *)v8 + 5);
        while ( v9 >= 0 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 5, v9 + 1, v9);
          if ( v10 == v9 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
      }
LABEL_10:
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
