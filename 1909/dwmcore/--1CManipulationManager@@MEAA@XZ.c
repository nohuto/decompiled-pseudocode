/*
 * XREFs of ??1CManipulationManager@@MEAA@XZ @ 0x1802363AC
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802362F0 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x180236700 (--_ECManipulationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  _DWORD *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = (_DWORD *)((char *)this + 104);
  *(_QWORD *)this = &CManipulationManager::`vftable';
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  do
  {
    v4 = 0LL;
    EnterCriticalSection(v3);
    v5 = *(_QWORD **)v2;
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v2 = v6;
    *(_QWORD *)(v6 + 8) = v2;
    if ( v5 != (_QWORD *)v2 )
    {
      v4 = v5[2];
      operator delete(v5);
      --v2[4];
    }
    LeaveCriticalSection(v3);
  }
  while ( v4 );
  DeleteCriticalSection(v3);
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 11);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 8);
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 5);
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
