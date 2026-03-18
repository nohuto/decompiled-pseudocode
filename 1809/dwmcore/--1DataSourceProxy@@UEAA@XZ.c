/*
 * XREFs of ??1DataSourceProxy@@UEAA@XZ @ 0x18016F39C
 * Callers:
 *     ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x18016F510 (--_GDataSourceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DataSourceProxy::~DataSourceProxy(DataSourceProxy *this)
{
  __int64 *v2; // rsi
  __int64 *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  void *v6; // rax
  void *v7; // rcx
  _QWORD **v8; // rax
  _QWORD *v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  void (__fastcall ***v12)(_QWORD); // rcx

  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  v2 = (__int64 *)*((_QWORD *)this + 26);
  for ( i = (__int64 *)*((_QWORD *)this + 25); i != v2; ++i )
  {
    v4 = *i;
    v5 = *(_QWORD *)(*i + 16);
    if ( v5 )
    {
      *(_QWORD *)(v5 + 56) = 0LL;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_BYTE *)(v5 + 72) &= ~1u;
      v4 = *i;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (void *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 26) = v6;
  *((_QWORD *)this + 24) = 0LL;
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 27) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 20);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 16);
  v7 = (void *)*((_QWORD *)this + 11);
  if ( v7 )
  {
    std::_Deallocate<16,0>(v7, (*((_QWORD *)this + 13) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v8 = (_QWORD **)*((_QWORD *)this + 9);
  v9 = *v8;
  *v8 = v8;
  *(_QWORD *)(*((_QWORD *)this + 9) + 8LL) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 10) = 0LL;
  v10 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v9 != v10 )
  {
    do
    {
      v11 = (_QWORD *)*v9;
      std::_Deallocate<16,0>(v9, 0x18uLL);
      v10 = (_QWORD *)*((_QWORD *)this + 9);
      v9 = v11;
    }
    while ( v11 != v10 );
  }
  std::_Deallocate<16,0>(v10, 0x18uLL);
  v12 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v12 )
    (**v12)(v12);
}
