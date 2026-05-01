/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x1802D4F1C
 * Callers:
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D744C (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x1802D5A1C (--0VirtualDesktopDataSource@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D6C9C (-InternalRelease@-$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSource,VirtualDesktopDataSource,>(
        VirtualDesktopDataSource **a1)
{
  unsigned int v2; // ebx
  VirtualDesktopDataSource *v3; // rax
  VirtualDesktopDataSource *v4; // rax
  volatile int *v5; // rdx
  VirtualDesktopDataSource *v6; // r10
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  VirtualDesktopDataSource *v10; // [rsp+40h] [rbp+8h] BYREF
  VirtualDesktopDataSource *v11; // [rsp+48h] [rbp+10h]
  VirtualDesktopDataSource *v12; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (VirtualDesktopDataSource *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v3;
  v10 = v3;
  if ( v3 )
  {
    v12 = v3;
    v4 = VirtualDesktopDataSource::VirtualDesktopDataSource(v3);
    v6 = v4;
    v10 = v4;
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 10);
      while ( v7 >= 0 )
      {
        if ( (_DWORD)v7 != 0x7FFFFFFF )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 10, v7 + 1, v7);
          if ( v8 != v7 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
    }
LABEL_10:
    *a1 = v6;
    Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
