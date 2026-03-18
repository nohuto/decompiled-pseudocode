/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800D6A98
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800F18A0 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_18033D448 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_18033D450 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_18033D488 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_18033D488 + 3) + 192LL))(
      *((_QWORD *)qword_18033D488 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_18033D488 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_18033D488 + 16LL))(qword_18033D488);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&qword_18033D4C0);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&qword_18033D490);
  DeleteCriticalSection(&stru_18033D458);
}
