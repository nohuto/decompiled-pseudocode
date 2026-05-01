/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@Z @ 0x18003491C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA?AV?$ComPtr@VViewEventArgsForPropertyChanged@@@WRL@Microsoft@@AEAY0BC@$$CBG@Z @ 0x180099FC0 (--$MakeAndInitializeOrThrow@VViewEventArgsForPropertyChanged@@AEAY0BC@$$CBG@wil@@YA-AV-$ComPtr@V.c)
 * Callees:
 *     ??0ViewEventArgsForPropertyChanged@@QEAA@XZ @ 0x180034864 (--0ViewEventArgsForPropertyChanged@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800349D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800349D0.c)
 *     ?RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z @ 0x180034A3C (-RuntimeClassInitialize@ViewEventArgsForPropertyChanged@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,ViewEventArgsForPropertyChanged,unsigned short const (&)[18]>(
        volatile signed __int64 **a1,
        const unsigned __int16 *a2)
{
  ViewEventArgsForPropertyChanged *v4; // rax
  volatile signed __int64 *v5; // rbx
  int v6; // edi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  *a1 = 0LL;
  v4 = (ViewEventArgsForPropertyChanged *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = (volatile signed __int64 *)ViewEventArgsForPropertyChanged::ViewEventArgsForPropertyChanged(v4);
    v6 = ViewEventArgsForPropertyChanged::RuntimeClassInitialize((ViewEventArgsForPropertyChanged *)v5, a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
      {
        v7 = *((_QWORD *)v5 + 11);
        while ( v7 >= 0 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64(v5 + 11, v7 + 1, v7);
          if ( v8 == v7 )
            goto LABEL_7;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
      }
LABEL_7:
      *a1 = v5;
      v6 = 0;
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
