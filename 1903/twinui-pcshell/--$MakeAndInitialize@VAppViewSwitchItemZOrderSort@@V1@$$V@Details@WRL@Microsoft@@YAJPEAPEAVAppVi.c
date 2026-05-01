/*
 * XREFs of ??$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewSwitchItemZOrderSort@@@Z @ 0x180308E64
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x180308EF0 (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802105BC (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppViewSwitchItemZOrderSort@@QEAA@XZ @ 0x180309848 (--0AppViewSwitchItemZOrderSort@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewSwitchItemZOrderSort,AppViewSwitchItemZOrderSort,>(
        AppViewSwitchItemZOrderSort **a1)
{
  unsigned int v1; // ebx
  AppViewSwitchItemZOrderSort *v3; // rax
  AppViewSwitchItemZOrderSort *v4; // rax
  AppViewSwitchItemZOrderSort *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  AppViewSwitchItemZOrderSort *v9; // [rsp+30h] [rbp+8h] BYREF
  AppViewSwitchItemZOrderSort *v10; // [rsp+38h] [rbp+10h]

  v1 = 0;
  *a1 = 0LL;
  v3 = (AppViewSwitchItemZOrderSort *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v3;
  if ( v3 )
  {
    v4 = AppViewSwitchItemZOrderSort::AppViewSwitchItemZOrderSort(v3);
    v9 = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = *((_QWORD *)v4 + 7);
      while ( v6 >= 0 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 7, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
    }
LABEL_9:
    *a1 = v5;
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((volatile signed __int64 **)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
