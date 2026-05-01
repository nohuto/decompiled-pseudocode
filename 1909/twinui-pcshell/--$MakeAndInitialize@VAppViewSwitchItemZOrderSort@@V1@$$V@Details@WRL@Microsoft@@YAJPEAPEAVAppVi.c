/*
 * XREFs of ??$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewSwitchItemZOrderSort@@@Z @ 0x180328364
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x1803283FC (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18022F95C (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0AppViewSwitchItemZOrderSort@@QEAA@XZ @ 0x180328D54 (--0AppViewSwitchItemZOrderSort@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewSwitchItemZOrderSort,AppViewSwitchItemZOrderSort,>(
        AppViewSwitchItemZOrderSort **a1)
{
  unsigned int v1; // ebx
  AppViewSwitchItemZOrderSort *v3; // rax
  AppViewSwitchItemZOrderSort *v4; // rax
  volatile int *v5; // rdx
  AppViewSwitchItemZOrderSort *v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  AppViewSwitchItemZOrderSort *v10; // [rsp+30h] [rbp+8h] BYREF
  AppViewSwitchItemZOrderSort *v11; // [rsp+38h] [rbp+10h]

  v1 = 0;
  *a1 = 0LL;
  v3 = (AppViewSwitchItemZOrderSort *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v3;
  if ( v3 )
  {
    v4 = AppViewSwitchItemZOrderSort::AppViewSwitchItemZOrderSort(v3);
    v10 = v4;
    v6 = v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 7);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 7, v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_10:
    *a1 = v6;
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
