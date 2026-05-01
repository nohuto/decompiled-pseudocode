/*
 * XREFs of ??_GActivationHints@@UEAAPEAXI@Z @ 0x18032B470
 * Callers:
 *     ??_EActivationHints@@WCI@EAAPEAXI@Z @ 0x1800A9050 (--_EActivationHints@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800E5970 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800E59D4 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x18032B3E4 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

ActivationHints *__fastcall ActivationHints::`scalar deleting destructor'(ActivationHints *this, char a2)
{
  ActivationHints::Hint *v2; // rdi
  ActivationHints::Hint *v5; // rsi

  v2 = (ActivationHints::Hint *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    v5 = (ActivationHints::Hint *)*((_QWORD *)this + 21);
    if ( v2 != v5 )
    {
      do
      {
        ActivationHints::Hint::~Hint(v2);
        v2 = (ActivationHints::Hint *)((char *)v2 + 80);
      }
      while ( v2 != v5 );
      v2 = (ActivationHints::Hint *)*((_QWORD *)this + 20);
    }
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(80 * ((*((_QWORD *)this + 22) - (_QWORD)v2) / 80LL)));
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  *((_DWORD *)this + 37) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  CImmersiveShellComponent::~CImmersiveShellComponent((ActivationHints *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
