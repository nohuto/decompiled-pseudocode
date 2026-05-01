/*
 * XREFs of ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x18031BD90
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803248B0 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x18031D7D0 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x1803208D0 (-InternalRelease@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x18032C578 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapterPolicy,KeyboardHosting::TabTipAdapterPolicy,>(
        volatile signed __int64 **a1)
{
  KeyboardHosting::TabTipAdapterPolicy *v2; // rax
  int v3; // edi
  volatile signed __int64 *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  void *v8; // [rsp+58h] [rbp+10h] BYREF
  KeyboardHosting::TabTipAdapterPolicy *v9; // [rsp+60h] [rbp+18h]

  *a1 = 0LL;
  v2 = (KeyboardHosting::TabTipAdapterPolicy *)operator new(0x258uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( v2 )
  {
    v9 = v2;
    v4 = (volatile signed __int64 *)KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(v2);
    v8 = (void *)v4;
    v3 = KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize((KeyboardHosting::TabTipAdapterPolicy *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 8);
        while ( v5 >= 0 )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64(v4 + 8, v5 + 1, v5);
          if ( v6 == v5 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
      }
LABEL_10:
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
