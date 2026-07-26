/*
 * XREFs of ndisQueryDeviceReset @ 0x1C0050914
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C000A8E0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C000E020 (ndisIfReferenceMiniport.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C00241D4 (ndisIfFindInterfaceByNetLuid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisQueryDeviceReset(_BYTE *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // ebx
  KIRQL v6; // bl
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( *a1 )
  {
    if ( a2 < 0x14 || a3 < 0x14 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*(_LIST_ENTRY **)(a4 + 8));
      v8 = (__int64)InterfaceByNetLuid;
      if ( InterfaceByNetLuid && (v9 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid, 0x19u), (v10 = v9) != 0) )
      {
        if ( ndisReferenceMiniport(v9) )
        {
          ndisIfDereferenceMiniport(v8, v11, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          if ( (*(_DWORD *)(v10 + 120) & 0x80u) == 0 )
            v5 = -1073741637;
          else
            v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v10 + 3792) + 360LL) + 144LL))(
                   *(_QWORD *)(v10 + 24),
                   a4 + 16);
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
