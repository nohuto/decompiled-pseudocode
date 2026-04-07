/*
 * XREFs of ??1CPerMonitorWindowRepresentation@@MEAA@XZ @ 0x1800B6698
 * Callers:
 *     ??_ECPerMonitorWindowRepresentation@@MEAAPEAXI@Z @ 0x1800B6790 (--_ECPerMonitorWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPerMonitorWindowRepresentation::~CPerMonitorWindowRepresentation(
        CPerMonitorWindowRepresentation *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rdi
  __int64 *i; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  CBaseObject *v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64, __int64); // rcx

  *(_QWORD *)this = &CPerMonitorWindowRepresentation::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = 0LL;
  for ( i = (__int64 *)((char *)this + 32); (unsigned int)v4 < *((_DWORD *)this + 14); v4 = (unsigned int)(v4 + 1) )
  {
    v6 = *i;
    v7 = *i;
    v8 = *(CBaseObject **)(*(_QWORD *)(*(_QWORD *)(*i + 8 * v4) + 8LL) + 96LL);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      v6 = *i;
      v7 = *i;
    }
    v9 = *(void (__fastcall ****)(_QWORD, __int64, __int64))(*(_QWORD *)(v6 + 8 * v4) + 8LL);
    if ( v9 )
    {
      (**v9)(v9, 1LL, v7);
      *(_QWORD *)(*(_QWORD *)(*i + 8 * v4) + 8LL) = 0LL;
      v7 = *i;
    }
    if ( *(_QWORD *)(v7 + 8 * v4) )
    {
      (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *(_QWORD *)(*i + 8 * v4) = 0LL;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
