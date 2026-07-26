/*
 * XREFs of ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C2D8
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0039EE8 (ndisIfFindInterfaceByNetLuid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeDeviceReset(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        _LIST_ENTRY **a3,
        enum _NDIS_MP_REFTAG a4)
{
  unsigned int v5; // ebx
  KIRQL v6; // bl
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi

  if ( *(_BYTE *)a1 )
  {
    if ( a2 >= 0x14 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a3[1]);
      v8 = (__int64)InterfaceByNetLuid;
      if ( InterfaceByNetLuid && (v9 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid), (v11 = v9) != 0) )
      {
        if ( (*(_DWORD *)(v9 + 124) & 0x1080110) == 0
          && *(_DWORD *)(v9 + 1520) == 1
          && (unsigned __int8)ndisReferenceMiniport(v9) )
        {
          ndisIfDereferenceMiniport(v8, v10, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          if ( (*(_DWORD *)(v11 + 120) & 0x80u) == 0 )
            v5 = -1073741637;
          else
            v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v11 + 3760) + 360LL) + 136LL))(
                   *(_QWORD *)(v11 + 24),
                   *((unsigned int *)a3 + 4));
          ndisDereferenceMiniport(v11, 0x6Bu);
        }
        else
        {
          ndisIfDereferenceMiniport(v8, v10, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          return (unsigned int)-1073741436;
        }
      }
      else
      {
        KeReleaseSpinLock(&ndisIfListLock, v6);
        return (unsigned int)-1071448058;
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
