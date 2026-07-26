/*
 * XREFs of NdisMRegisterWdiMiniportDriver @ 0x1C0107B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00267F4 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C0107808 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0107920 (-ReferenceWdi@@YA_NXZ.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C0107EF8 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 */

NDIS_STATUS __stdcall NdisMRegisterWdiMiniportDriver(
        DRIVER_OBJECT *DriverObject,
        PCUNICODE_STRING RegistryPath,
        NDIS_MINIPORT_DRIVER_CONTEXT NdisDriverContext,
        NDIS_MINIPORT_DRIVER_CHARACTERISTICS *MiniportDriverCharacteristics,
        NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *MiniportWdiCharacteristics,
        NDIS_MINIPORT_DRIVER_HANDLE *NdisMiniportDriverHandle)
{
  size_t v9; // rdi
  PVOID PoolWithTag; // rbx
  NDIS_STATUS v12; // edi
  USHORT Size; // ax
  _DWORD *v14; // rdi
  ULONG v15; // edx
  PVOID v17; // rsi
  PVOID v18; // rcx
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  PEX_RUNDOWN_REF RunRef; // [rsp+48h] [rbp-30h]
  ULONG Count; // [rsp+50h] [rbp-28h]

  v9 = 160LL;
  *NdisMiniportDriverHandle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6843704Du);
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_17;
  }
  Size = MiniportDriverCharacteristics->Header.Size;
  if ( Size < 0xA0u )
    v9 = Size;
  memmove(PoolWithTag, MiniportDriverCharacteristics, v9);
  if ( !ReferenceWdi() )
  {
    v12 = -1073741637;
    goto LABEL_17;
  }
  ndisMpHookGetHook(&v19);
  if ( v19 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, DRIVER_OBJECT *, PCUNICODE_STRING, NDIS_MINIPORT_DRIVER_CONTEXT, NDIS_MINIPORT_DRIVER_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_HANDLE *))(v19 + 8))(
            *(_QWORD *)v19,
            DriverObject,
            RegistryPath,
            NdisDriverContext,
            MiniportDriverCharacteristics,
            MiniportWdiCharacteristics,
            NdisMiniportDriverHandle);
    if ( !v12 )
    {
      v14 = *NdisMiniportDriverHandle;
      if ( *NdisMiniportDriverHandle )
      {
        v17 = PoolWithTag;
        v14[226] = 1;
        *((_BYTE *)v14 + 908) = 1;
        PoolWithTag = 0LL;
        v18 = (PVOID)*((_QWORD *)v14 + 44);
        if ( v17 != v18 )
        {
          if ( v18 )
            operator delete(v18);
          *((_QWORD *)v14 + 44) = v17;
        }
        ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v19 - 16));
        v12 = 0;
        goto LABEL_15;
      }
      v12 = -1073741823;
    }
    if ( v19 )
    {
      v19 = 0LL;
      --Count;
      ExReleaseRundownProtection(RunRef);
    }
  }
  else
  {
    v12 = -1073741637;
  }
  DereferenceWdi();
LABEL_15:
  v15 = Count;
  if ( Count )
  {
    Count = 0;
    ExReleaseRundownProtectionEx(RunRef, v15);
  }
LABEL_17:
  if ( PoolWithTag )
    operator delete(PoolWithTag);
  return v12;
}
