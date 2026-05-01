/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x180157F58
 * Callers:
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801585BC (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x180158124 (--0ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x180158A7C (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18015901C (-RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewColl.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagerVisibilityDebouncer,ApplicationViewManagerVisibilityDebouncer,IApplicationViewCollection * &>(
        volatile signed __int32 **a1,
        struct IApplicationViewCollection **a2)
{
  ApplicationViewManagerVisibilityDebouncer *v4; // rax
  int v5; // edi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (ApplicationViewManagerVisibilityDebouncer *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int32 *)ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerVisibilityDebouncer(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = ApplicationViewManagerVisibilityDebouncer::RuntimeClassInitialize(
           (ApplicationViewManagerVisibilityDebouncer *)v6,
           *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        _InterlockedIncrement(v6 + 17);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
