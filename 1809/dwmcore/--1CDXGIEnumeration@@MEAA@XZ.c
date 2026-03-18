/*
 * XREFs of ??1CDXGIEnumeration@@MEAA@XZ @ 0x18007FB30
 * Callers:
 *     ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x18007FAF0 (--_ECDXGIEnumeration@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDXGIEnumeration::~CDXGIEnumeration(CDXGIEnumeration *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &CDXGIEnumeration::`vftable';
  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( !*((_DWORD *)this + 27) )
    {
      v3 = *((_QWORD *)this + 2);
      if ( !v3 )
        goto LABEL_6;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 184LL))(v3, *((unsigned int *)this + 26));
      v2 = (void *)*((_QWORD *)this + 12);
    }
    CloseHandle(v2);
  }
LABEL_6:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 64);
}
