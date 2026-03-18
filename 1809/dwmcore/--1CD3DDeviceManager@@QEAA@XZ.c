/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800EB4DC
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800F17E0 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_180308A48 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_180308A50 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_180308A88 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_180308A88 + 3) + 192LL))(
      *((_QWORD *)qword_180308A88 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_180308A88 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_180308A88 + 16LL))(qword_180308A88);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_180308AC0);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_180308A90);
  DeleteCriticalSection(&CriticalSection);
}
