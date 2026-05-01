/*
 * XREFs of ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostViewModeChangeRequestedEventArgs@@AEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BBB10
 * Callers:
 *     ?EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x1801BDD60 (-EnterFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ @ 0x1801BDE10 (-ExitFullScreen@Win32BackedViewHostItem@@UEAAJXZ.c)
 *     ?EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1801C2BD0 (-EnterFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 *     ?ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1801C2C80 (-ExitFullScreen@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0ViewHostViewModeChangeRequestedEventArgs@@QEAA@XZ @ 0x1801BC8CC (--0ViewHostViewModeChangeRequestedEventArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BE674 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostViewModeChangeRequestedEventArgs,ViewHostViewModeChangeRequestedEventArgs,enum Windows::Internal::Shell::Holographic::ViewMode &>(
        ViewHostViewModeChangeRequestedEventArgs **a1,
        int *a2)
{
  unsigned int v2; // ebx
  ViewHostViewModeChangeRequestedEventArgs *v5; // rax
  ViewHostViewModeChangeRequestedEventArgs *v6; // rax
  volatile int *v7; // rdx
  int v8; // ecx
  ViewHostViewModeChangeRequestedEventArgs *v9; // r10
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  ViewHostViewModeChangeRequestedEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF
  ViewHostViewModeChangeRequestedEventArgs *v14; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (ViewHostViewModeChangeRequestedEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  if ( v5 )
  {
    v6 = ViewHostViewModeChangeRequestedEventArgs::ViewHostViewModeChangeRequestedEventArgs(v5);
    v8 = *a2;
    v9 = v6;
    v13 = v6;
    *((_DWORD *)v6 + 16) = v8;
    v10 = *((_QWORD *)v6 + 7);
    while ( v10 >= 0 )
    {
      if ( (_DWORD)v10 != 0x7FFFFFFF )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 7, v10 + 1, v10);
        if ( v11 != v10 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v10 + 16), v7);
LABEL_9:
    *a1 = v9;
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
