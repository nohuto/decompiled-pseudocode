/*
 * XREFs of ??$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1801F7F44
 * Callers:
 *     ?Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1801F8700 (-Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArb.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1801F82E4 (--0AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F8D90 (-InternalRelease@-$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ?RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITaskDataArbiter@23456@@Z @ 0x1801F93FC (-RuntimeClassInitialize@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAAJPEAUITa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        volatile signed __int64 **a1,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter **a2)
{
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  void *v10; // [rsp+50h] [rbp+8h] BYREF
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v11; // [rsp+60h] [rbp+18h]
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *v12; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v4 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)operator new(
                                                                            0x118uLL,
                                                                            (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  v10 = v4;
  if ( v4 )
  {
    v12 = v4;
    v6 = (volatile signed __int64 *)Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::AppViewListener(v4);
    v10 = (void *)v6;
    v5 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::RuntimeClassInitialize(
           (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *)v6,
           *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
      {
        v7 = *((_QWORD *)v6 + 10);
        while ( v7 >= 0 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64(v6 + 10, v7 + 1, v7);
          if ( v8 == v7 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
      }
LABEL_10:
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
