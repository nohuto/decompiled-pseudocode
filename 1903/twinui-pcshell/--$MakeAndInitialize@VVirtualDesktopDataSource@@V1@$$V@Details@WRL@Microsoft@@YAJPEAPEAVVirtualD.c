/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x180335F28
 * Callers:
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803383DC (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x1803369A0 (--0VirtualDesktopDataSource@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180337C3C (-InternalRelease@-$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSource,VirtualDesktopDataSource,>(
        VirtualDesktopDataSource **a1)
{
  unsigned int v2; // ebx
  VirtualDesktopDataSource *v3; // rax
  VirtualDesktopDataSource *v4; // rax
  VirtualDesktopDataSource *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  VirtualDesktopDataSource *v9; // [rsp+40h] [rbp+8h] BYREF
  VirtualDesktopDataSource *v10; // [rsp+48h] [rbp+10h]
  VirtualDesktopDataSource *v11; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (VirtualDesktopDataSource *)operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v3;
  v9 = v3;
  if ( v3 )
  {
    v11 = v3;
    v4 = VirtualDesktopDataSource::VirtualDesktopDataSource(v3);
    v5 = v4;
    v9 = v4;
    if ( v4 )
    {
      v6 = *((_QWORD *)v4 + 10);
      while ( v6 >= 0 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 10, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_9;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
    }
LABEL_9:
    *a1 = v5;
    Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
