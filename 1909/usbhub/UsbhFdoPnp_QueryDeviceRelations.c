/*
 * XREFs of UsbhFdoPnp_QueryDeviceRelations @ 0x1C0010B80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueryBusRelations @ 0x1C0010C30 (UsbhQueryBusRelations.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhFdoChainIrp @ 0x1C002AE68 (UsbhFdoChainIrp.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoPnp_QueryDeviceRelations(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // eax
  int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // r10

  v2 = *(_QWORD *)(a2 + 184);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( (UsbhLogMask & 2) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
    *(_DWORD *)v5 = 1380209000;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = a2;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  v6 = *(_DWORD *)(v2 + 8);
  if ( !v6 )
    return UsbhQueryBusRelations(a1, a2);
  v8 = 1363431999;
  if ( v6 == 4 )
    v8 = 1363432052;
  Log(a1, 2, v8, a2, 0LL);
  return UsbhFdoChainIrp(v10, v9);
}
