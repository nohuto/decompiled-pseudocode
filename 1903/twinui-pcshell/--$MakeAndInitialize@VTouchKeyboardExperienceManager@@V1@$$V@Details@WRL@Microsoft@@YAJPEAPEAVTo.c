/*
 * XREFs of ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18030C394
 * Callers:
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18030E350 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18030CBC0 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180310338 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180314200 (-RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TouchKeyboardExperienceManager,TouchKeyboardExperienceManager,>(
        volatile signed __int64 **a1)
{
  TouchKeyboardExperienceManager *v2; // rax
  int v3; // edi
  volatile signed __int64 *v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  void *v8; // [rsp+58h] [rbp+10h] BYREF
  TouchKeyboardExperienceManager *v9; // [rsp+60h] [rbp+18h]

  *a1 = 0LL;
  v2 = (TouchKeyboardExperienceManager *)operator new(0x3A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  if ( v2 )
  {
    v9 = v2;
    v4 = (volatile signed __int64 *)TouchKeyboardExperienceManager::TouchKeyboardExperienceManager(v2);
    v8 = (void *)v4;
    v3 = TouchKeyboardExperienceManager::RuntimeClassInitialize((TouchKeyboardExperienceManager *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 30);
        while ( v5 >= 0 )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64(v4 + 30, v5 + 1, v5);
          if ( v6 == v5 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
      }
LABEL_10:
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
