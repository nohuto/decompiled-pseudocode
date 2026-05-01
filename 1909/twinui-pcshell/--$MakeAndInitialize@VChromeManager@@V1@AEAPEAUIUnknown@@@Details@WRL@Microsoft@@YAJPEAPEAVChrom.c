/*
 * XREFs of ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x1803D9D38
 * Callers:
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803D9FE0 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801334C8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ??0ChromeManager@@QEAA@XZ @ 0x1803D9DC4 (--0ChromeManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1803DA184 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x1803DA278 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ChromeManager,ChromeManager,IUnknown * &>(
        __int64 *a1,
        struct IUnknown **a2)
{
  ChromeManager *v4; // rax
  int v5; // ebx
  ChromeManager *v6; // rax
  struct IUnknown *v7; // rdx
  __int64 v8; // rdi
  volatile int *v9; // rdx
  ChromeManager *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ChromeManager *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ChromeManager::ChromeManager(v4);
    v7 = *a2;
    v8 = (__int64)v6;
    v11 = v6;
    v5 = ChromeManager::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
          v8,
          v9);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
