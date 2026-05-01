/*
 * XREFs of ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEA_N@Z @ 0x18020A39C
 * Callers:
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180215CB4 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x18021C898 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x18020CA38 (--0PresentationReadyChangedEventArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x180210598 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool &>(
        PresentationReadyChangedEventArgs **a1,
        char *a2)
{
  unsigned int v2; // ebx
  PresentationReadyChangedEventArgs *v5; // rax
  PresentationReadyChangedEventArgs *v6; // rax
  char v7; // cl
  PresentationReadyChangedEventArgs *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  PresentationReadyChangedEventArgs *v12; // [rsp+30h] [rbp+8h] BYREF
  PresentationReadyChangedEventArgs *v13; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (PresentationReadyChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v5;
  if ( v5 )
  {
    v6 = PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(v5);
    v7 = *a2;
    v8 = v6;
    v12 = v6;
    *((_BYTE *)v6 + 72) = v7;
    v9 = *((_QWORD *)v6 + 8);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 8, v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_8:
    *a1 = v8;
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
