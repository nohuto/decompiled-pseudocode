/*
 * XREFs of ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEA_N@Z @ 0x1801BB934
 * Callers:
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ @ 0x1801BF8E0 (-RaisePresentationNotReady@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z @ 0x1801C1220 (-put_Visibility@Win32BackedViewHostItem@@UEAAJE@Z.c)
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x1801C48B4 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0PresentationReadyChangedEventArgs@@QEAA@XZ @ 0x1801BC77C (--0PresentationReadyChangedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801BD3E4 (-Attach@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationReadyC.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BE650 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PresentationReadyChangedEventArgs,PresentationReadyChangedEventArgs,bool &>(
        _QWORD *a1,
        _BYTE *a2)
{
  unsigned int v2; // ebx
  PresentationReadyChangedEventArgs *v5; // rax
  PresentationReadyChangedEventArgs *v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  PresentationReadyChangedEventArgs *v12; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (PresentationReadyChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  if ( v5 )
  {
    v6 = PresentationReadyChangedEventArgs::PresentationReadyChangedEventArgs(v5);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::Attach(&v11, v6);
    v7 = v11;
    *(_BYTE *)(v11 + 72) = *a2;
    v8 = *(_QWORD *)(v7 + 64);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v8 + 16),
      (volatile int *)((unsigned __int64)v8 >> 63));
LABEL_9:
    *a1 = v11;
    Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
