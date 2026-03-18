/*
 * XREFs of ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015F764
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161C90 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00E1C9C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F57CC (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::FinalizeInitialization(ADAPTER_RENDER *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // rax

  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
    return 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v6 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)Global + 125), this, 1);
  if ( v6 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v5, v4, v7);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v6;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 68) + 8LL) + 848LL))(*((_QWORD *)this + 69));
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v9, v8, v11);
      *(_QWORD *)(v16 + 24) = this;
      WdLogEvent5_WdError(v16);
    }
    else
    {
      v12 = *((_QWORD *)this + 2);
      v13 = *(_DWORD *)(v12 + 2512);
      if ( (v13 & 1) != 0 && ((*(_DWORD *)(v12 + 1916) & 0x800) != 0 || (v13 & 8) != 0) )
      {
        v10 = ADAPTER_RENDER::EnableIoMmuIsolation(
                this,
                (*(_DWORD *)(v12 + 2512) & 2) != 0,
                (*(_DWORD *)(v12 + 2512) & 4) != 0);
        if ( v10 < 0 && (v13 & 0x10) != 0 )
          return 0;
      }
    }
    return (unsigned int)v10;
  }
}
