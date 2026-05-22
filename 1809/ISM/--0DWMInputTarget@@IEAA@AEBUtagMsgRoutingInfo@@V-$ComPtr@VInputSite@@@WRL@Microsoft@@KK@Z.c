/*
 * XREFs of ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KK@Z @ 0x18008F690
 * Callers:
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x18008F8F8 (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::DWMInputTarget(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)(a1 + 56) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 64) = 1;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)a1 = &DWMInputTarget::`vftable'{for `IInputTarget'};
  *(_QWORD *)(a1 + 8) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
  *(_QWORD *)(a1 + 16) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
  *(_QWORD *)(a1 + 24) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
  *(_QWORD *)(a1 + 32) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
  *(_QWORD *)(a1 + 40) = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
  *(_QWORD *)(a1 + 48) = &DWMInputTarget::`vftable'{for `IInputSiteTarget'};
  *(_QWORD *)(a1 + 56) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
  *(_OWORD *)(a1 + 80) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 32);
  v8 = *a3;
  *(_QWORD *)(a1 + 120) = *a3;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_DWORD *)(a1 + 132) = a5;
  *(_DWORD *)(a1 + 128) = a4;
  v9 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return a1;
}
