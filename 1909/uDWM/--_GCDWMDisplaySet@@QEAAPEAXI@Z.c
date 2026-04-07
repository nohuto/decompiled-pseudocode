/*
 * XREFs of ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x18002C414
 * Callers:
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002C3EC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18002C4A4 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CDWMDisplaySet *__fastcall CDWMDisplaySet::`scalar deleting destructor'(CDWMDisplaySet *this)
{
  _QWORD *v1; // rsi
  int v2; // eax
  __int64 i; // rbx
  CDWMDisplay *v5; // rcx
  __int64 v6; // rcx

  v1 = (_QWORD *)((char *)this + 40);
  v2 = *((_DWORD *)this + 16) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v5 = *(CDWMDisplay **)(*v1 + 8 * i);
    if ( v5 )
    {
      CDWMDisplay::Release(v5);
      *(_QWORD *)(*v1 + 8 * i) = 0LL;
    }
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  DynArrayImpl<0>::~DynArrayImpl<0>(v1);
  (*(void (__fastcall **)(WPF::HeapBase *, CDWMDisplaySet *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
