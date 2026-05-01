/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEBQEBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEBQEBG@Z @ 0x18027799C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEBQEBG@Z @ 0x180277E38 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEBQEBG@wil@@YA-AV-$ComPtr@VViewEv.c)
 * Callees:
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x180034864 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x180034A3C (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784D0 (-InternalRelease@-$ComPtr@VViewEventArgsForSelectTargetView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNavigationRequest@@@Z @ 0x18026A564 (-Attach@-$ComPtr@VViewEventArgsForNavigationRequest@@@WRL@Microsoft@@QEAAXPEAVViewEventArgsForNa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const * const &>(
        ViewEventArgsForPropertyChanged **a1,
        const unsigned __int16 **a2)
{
  ViewEventArgsForPropertyChanged *v4; // rax
  int v5; // edi
  volatile signed __int64 *v6; // rax
  const unsigned __int16 *v7; // rdx
  ViewEventArgsForPropertyChanged *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  ViewEventArgsForPropertyChanged *v12; // [rsp+30h] [rbp+8h] BYREF
  ViewEventArgsForPropertyChanged *v13; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v4;
  if ( v4 )
  {
    v6 = (volatile signed __int64 *)ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v4);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<ViewEventArgsForNavigationRequest>::Attach((volatile signed __int64 **)&v12, v6);
    v7 = *a2;
    v8 = v12;
    v5 = ViewEventArgsForPropertyChanged::RuntimeClassInitialize(v12, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        v9 = *((_QWORD *)v8 + 11);
        while ( v9 >= 0 )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 11, v9 + 1, v9);
          if ( v10 == v9 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_10:
        v8 = v12;
      }
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ViewEventArgsForSelectTargetView>::InternalRelease((volatile signed __int64 **)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
