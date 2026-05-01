/*
 * XREFs of ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEBK@Z @ 0x18015A458
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18015B100 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18004743C (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Z @ 0x180048828 (-RuntimeClassInitialize@CApplicationFrameWrapper@@QEAAJPEAUIApplicationFrameService@@PEAUIApplic.c)
 *     ??0CApplicationFrameWrapper@@QEAA@XZ @ 0x180048988 (--0CApplicationFrameWrapper@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@Z @ 0x18015B0C4 (-Attach@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@QEAAXPEAVCApplicationFrameWrapper@@@.c)
 *     ?Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z @ 0x18015BF34 (-Initialize@CApplicationFrameWrapper@@QEAAJPEBGK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *,Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,unsigned long const &>(
        volatile signed __int64 **a1,
        __int64 *a2,
        struct IApplicationFrameManager **a3,
        struct IApplicationFrame **a4,
        const unsigned __int16 **a5,
        unsigned int *a6)
{
  unsigned int v10; // edi
  CApplicationFrameWrapper *v11; // rax
  CApplicationFrameWrapper *v12; // rax
  __int64 v13; // rcx
  const unsigned __int16 *v14; // rbp
  unsigned int v15; // r14d
  struct IApplicationFrame *v16; // r9
  volatile signed __int64 *v17; // rbx
  int v18; // eax
  volatile int *v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  CApplicationFrameWrapper *v23; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0;
  *a1 = 0LL;
  v11 = (CApplicationFrameWrapper *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = CApplicationFrameWrapper::CApplicationFrameWrapper(v11);
    v23 = 0LL;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::Attach(&v23, v12);
    v13 = *a2;
    v14 = *a5;
    v15 = *a6;
    v16 = *a4;
    v17 = (volatile signed __int64 *)v23;
    v18 = CApplicationFrameWrapper::RuntimeClassInitialize(
            v23,
            (struct IApplicationFrameService *)((v13 + 40) & -(__int64)(v13 != 0)),
            *a3,
            v16);
    if ( v18 < 0 || (v18 = CApplicationFrameWrapper::Initialize((CApplicationFrameWrapper *)v17, v14, v15), v18 < 0) )
    {
      v10 = v18;
    }
    else
    {
      if ( v17 )
      {
        v20 = *((_QWORD *)v17 + 9);
        while ( v20 >= 0 )
        {
          if ( (_DWORD)v20 != 0x7FFFFFFF )
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange64(v17 + 9, v20 + 1, v20);
            if ( v21 != v20 )
              continue;
          }
          goto LABEL_12;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
          (Microsoft::WRL::Details *)(2 * v20 + 16),
          v19);
LABEL_12:
        v17 = (volatile signed __int64 *)v23;
      }
      *a1 = v17;
    }
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v23);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v10;
}
