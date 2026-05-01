/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopController@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopController@@@Z @ 0x180338F8C
 * Callers:
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18033A414 (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopController@@QEAA@XZ @ 0x180339018 (--0VirtualDesktopController@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ @ 0x180339870 (-InternalRelease@-$ComPtr@VVirtualDesktopController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopController,VirtualDesktopController,>(
        VirtualDesktopController **a1)
{
  unsigned int v1; // ebx
  VirtualDesktopController *v3; // rax
  VirtualDesktopController *v4; // rax
  VirtualDesktopController *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  VirtualDesktopController *v9; // [rsp+30h] [rbp+8h] BYREF
  VirtualDesktopController *v10; // [rsp+38h] [rbp+10h]

  v1 = 0;
  *a1 = 0LL;
  v3 = (VirtualDesktopController *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v3;
  if ( v3 )
  {
    v4 = VirtualDesktopController::VirtualDesktopController(v3);
    v9 = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = *((_QWORD *)v4 + 8);
      while ( v6 >= 0 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 8, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
    }
LABEL_9:
    *a1 = v5;
    Microsoft::WRL::ComPtr<VirtualDesktopController>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
