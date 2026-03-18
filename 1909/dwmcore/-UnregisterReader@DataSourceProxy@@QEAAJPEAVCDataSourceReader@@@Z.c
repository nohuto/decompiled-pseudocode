/*
 * XREFs of ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x180196E3C
 * Callers:
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180188390 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A5178 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ReaderUnregistered@DataProviderProxy@@QEAAXXZ @ 0x180197CF4 (-ReaderUnregistered@DataProviderProxy@@QEAAXXZ.c)
 */

__int64 __fastcall DataSourceProxy::UnregisterReader(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  struct CWeakResourceReference *v5; // rsi
  struct CWeakResourceReference *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( ((*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    v7 = 0LL;
    CWeakReference<CVisual>::Create(a2, &v7);
    v3 = (_QWORD *)*((_QWORD *)this + 26);
    v4 = (_QWORD *)*((_QWORD *)this + 25);
    v5 = v7;
    while ( v4 != v3 && (struct CWeakResourceReference *)*v4 != v7 )
      ++v4;
    if ( v4 != v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
      memmove_0(v4, v4 + 1, *((_QWORD *)this + 26) - (_QWORD)(v4 + 1));
      *((_QWORD *)this + 26) -= 8LL;
      DataProviderProxy::ReaderUnregistered(*((DataProviderProxy **)this + 24));
    }
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return 0LL;
}
