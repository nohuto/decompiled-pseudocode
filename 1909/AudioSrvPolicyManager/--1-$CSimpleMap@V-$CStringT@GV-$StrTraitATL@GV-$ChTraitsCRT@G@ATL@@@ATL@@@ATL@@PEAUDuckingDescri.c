/*
 * XREFs of ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180014ED4
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18001261C (--1CProcess@@MEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180022A38 (--1TSSession@@QEAA@XZ.c)
 *     _CProcess::CProcess_::_1_::dtor$13 @ 0x180036780 (_CProcess--CProcess_--_1_--dtor$13.c)
 *     _CProcess::CProcess_::_1_::dtor$14 @ 0x180036799 (_CProcess--CProcess_--_1_--dtor$14.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>(
        __int64 a1)
{
  void *v2; // rcx
  int v3; // edi
  __int64 v4; // rsi
  volatile signed __int32 *v5; // rdx
  void *v6; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0;
    if ( *(int *)(a1 + 16) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = (volatile signed __int32 *)(*(_QWORD *)(v4 + *(_QWORD *)a1) - 24LL);
        if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
      v2 = *(void **)a1;
    }
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    free(v6);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
