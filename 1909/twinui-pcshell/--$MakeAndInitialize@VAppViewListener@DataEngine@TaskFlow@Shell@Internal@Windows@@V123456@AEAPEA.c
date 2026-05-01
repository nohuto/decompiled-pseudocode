/*
 * XREFs of ??$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x180217064
 * Callers:
 *     ?Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x180217830 (-Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArb.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x180217414 (--0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180217EC0 (-InternalRelease@-$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ?RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITaskDataArbiter@23456@@Z @ 0x1802184BC (-RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        volatile signed __int64 **a1,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter **a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rbx
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  void *v11; // [rsp+50h] [rbp+8h] BYREF
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v12; // [rsp+60h] [rbp+18h]
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v13; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v4 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)operator new(
                                                                            0x118uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v11 = v4;
  if ( v4 )
  {
    v13 = v4;
    v6 = (volatile signed __int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener(v4);
    v11 = (void *)v6;
    v5 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::RuntimeClassInitialize(
           (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)v6,
           *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v8 = *((_QWORD *)v6 + 10);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v6 + 10, v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
      }
LABEL_11:
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
