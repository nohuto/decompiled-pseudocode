/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015E510
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E04F8 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rax
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v4 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 129), this, 1);
  if ( v4 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return (unsigned int)v4;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 848LL))(*((_QWORD *)this + 69));
    if ( v6 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v11 + 24) = this;
      WdLogEvent5_WdError(v11);
    }
    else
    {
      v7 = *((_QWORD *)this + 2);
      v8 = *(_DWORD *)(v7 + 2480);
      if ( (v8 & 1) != 0 && ((*(_DWORD *)(v7 + 1892) & 0x800) != 0 || (v8 & 8) != 0) )
      {
        v6 = ADAPTER_RENDER::EnableIoMmuIsolation(
               this,
               (*(_DWORD *)(v7 + 2480) & 2) != 0,
               (*(_DWORD *)(v7 + 2480) & 4) != 0);
        if ( v6 < 0 && (v8 & 0x10) != 0 )
          return 0;
      }
    }
    return (unsigned int)v6;
  }
}
