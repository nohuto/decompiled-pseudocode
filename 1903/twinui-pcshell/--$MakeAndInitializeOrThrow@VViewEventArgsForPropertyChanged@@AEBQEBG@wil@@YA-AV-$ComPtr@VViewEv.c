/*
 * XREFs of ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEBQEBG@Z @ 0x180277E38
 * Callers:
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001D9C0 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784D0 (-InternalRelease@-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEBQEBG@Z @ 0x18027799C (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAP.c)
 */

// Hidden C++ exception states: #wind=1
volatile signed __int64 **__fastcall wil::MakeAndInitializeOrThrow<ViewEventArgsForPropertyChanged,unsigned short const * const &>(
        volatile signed __int64 **a1,
        const unsigned __int16 **a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease(a1);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const * const &>(
         (ViewEventArgsForPropertyChanged **)a1,
         a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      27LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return a1;
}
