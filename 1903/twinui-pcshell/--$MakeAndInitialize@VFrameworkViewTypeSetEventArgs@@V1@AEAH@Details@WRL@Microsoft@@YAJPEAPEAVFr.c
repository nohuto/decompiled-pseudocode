/*
 * XREFs of ??$MakeAndInitialize@VFrameworkViewTypeSetEventArgs@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVFrameworkViewTypeSetEventArgs@@AEAH@Z @ 0x180219838
 * Callers:
 *     ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18021B200 (-RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802105BC (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0FrameworkViewTypeSetEventArgs@@QEAA@XZ @ 0x180219EEC (--0FrameworkViewTypeSetEventArgs@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<FrameworkViewTypeSetEventArgs,FrameworkViewTypeSetEventArgs,int &>(
        FrameworkViewTypeSetEventArgs **a1,
        int *a2)
{
  unsigned int v2; // ebx
  FrameworkViewTypeSetEventArgs *v5; // rax
  FrameworkViewTypeSetEventArgs *v6; // rax
  int v7; // ecx
  FrameworkViewTypeSetEventArgs *v8; // rdx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  FrameworkViewTypeSetEventArgs *v12; // [rsp+30h] [rbp+8h] BYREF
  FrameworkViewTypeSetEventArgs *v13; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (FrameworkViewTypeSetEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v5;
  if ( v5 )
  {
    v6 = FrameworkViewTypeSetEventArgs::FrameworkViewTypeSetEventArgs(v5);
    v7 = *a2;
    v8 = v6;
    v12 = v6;
    *((_DWORD *)v6 + 16) = v7;
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
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((volatile signed __int64 **)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
