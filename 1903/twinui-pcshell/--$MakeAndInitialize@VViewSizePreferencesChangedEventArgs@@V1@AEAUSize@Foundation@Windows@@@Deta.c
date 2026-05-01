/*
 * XREFs of ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgs@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewSizePreferencesChangedEventArgs@@AEAUSize@Foundation@Windows@@@Z @ 0x18020A600
 * Callers:
 *     ?RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUSize@Foundation@5@@Z @ 0x180212530 (-RaiseSizePreferencesChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUS.c)
 *     ?RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@Z @ 0x18021B300 (-RaiseSizePreferencesChanged@ApplicationViewBackedViewHostItem@@UEAAJUSize@Foundation@Windows@@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewSizePreferencesChangedEventArgs@@QEAA@XZ @ 0x18020CC20 (--0ViewSizePreferencesChangedEventArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802105E0 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgs,ViewSizePreferencesChangedEventArgs,Windows::Foundation::Size &>(
        ViewSizePreferencesChangedEventArgs **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  ViewSizePreferencesChangedEventArgs *v5; // rax
  ViewSizePreferencesChangedEventArgs *v6; // rax
  __int64 v7; // xmm0_8
  ViewSizePreferencesChangedEventArgs *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  ViewSizePreferencesChangedEventArgs *v12; // [rsp+30h] [rbp+8h] BYREF
  ViewSizePreferencesChangedEventArgs *v13; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (ViewSizePreferencesChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v5;
  if ( v5 )
  {
    v6 = ViewSizePreferencesChangedEventArgs::ViewSizePreferencesChangedEventArgs(v5);
    v7 = *a2;
    v8 = v6;
    v12 = v6;
    *((_QWORD *)v6 + 8) = v7;
    v9 = *((_QWORD *)v6 + 7);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 7, v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_8:
    *a1 = v8;
    Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgs>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
