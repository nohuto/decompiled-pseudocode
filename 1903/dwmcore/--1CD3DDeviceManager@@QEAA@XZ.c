/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800D67E8
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800EDBE0 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_180340368 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_180340370 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_1803403A8 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_1803403A8 + 3) + 192LL))(
      *((_QWORD *)qword_1803403A8 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_1803403A8 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_1803403A8 + 16LL))(qword_1803403A8);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&qword_1803403E0);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&qword_1803403B0);
  DeleteCriticalSection(&CriticalSection);
}
