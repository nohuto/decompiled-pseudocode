/*
 * XREFs of ??1DataProviderProxy@@UEAA@XZ @ 0x180198E9C
 * Callers:
 *     ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x180198FA0 (--_EDataProviderProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DataProviderProxy::~DataProviderProxy(DataProviderProxy *this)
{
  _QWORD *v2; // rdx
  _QWORD *i; // rax
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  void (__fastcall ***v10)(_QWORD); // rcx

  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &DataProviderProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataProviderProxy::`vftable'{for `IDataProviderProxy'};
  v2 = (_QWORD *)*((_QWORD *)this + 11);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 192LL) = 0LL;
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 15) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 11);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 11) + 8LL) = *((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v6 != v7 )
  {
    do
    {
      v8 = v6[3];
      v9 = (_QWORD *)*v6;
      if ( v8 )
      {
        v6[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      }
      std::_Deallocate<16,0>(v6, 0x20uLL);
      v7 = (_QWORD *)*((_QWORD *)this + 11);
      v6 = v9;
    }
    while ( v9 != v7 );
  }
  std::_Deallocate<16,0>(v7, 0x20uLL);
  v10 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 4);
  if ( v10 )
    (**v10)(v10);
}
