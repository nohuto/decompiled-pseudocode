/*
 * XREFs of ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CE10
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

__int64 __fastcall ndisQueryDeviceReset(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        _LIST_ENTRY **a4)
{
  unsigned int v5; // ebx
  KIRQL v6; // bl
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( *(_BYTE *)a1 )
  {
    if ( a2 < 0x14 || a3 < 0x14 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(a4[1]);
      v8 = (__int64)InterfaceByNetLuid;
      if ( InterfaceByNetLuid && (v9 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid), (v10 = v9) != 0) )
      {
        if ( (unsigned __int8)ndisReferenceMiniport(v9) )
        {
          ndisIfDereferenceMiniport(v8, v11, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          if ( (*(_DWORD *)(v10 + 120) & 0x80u) == 0 )
            v5 = -1073741637;
          else
            v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(v10 + 3760) + 360LL) + 144LL))(
                   *(_QWORD *)(v10 + 24),
                   (char *)a4 + 16);
          ndisDereferenceMiniport(v10, 0x6Cu);
        }
        else
        {
          ndisIfDereferenceMiniport(v8, v11, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          return (unsigned int)-1073676282;
        }
      }
      else
      {
        KeReleaseSpinLock(&ndisIfListLock, v6);
        return (unsigned int)-1071448058;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
