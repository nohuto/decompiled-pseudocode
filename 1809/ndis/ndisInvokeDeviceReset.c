/*
 * XREFs of ndisInvokeDeviceReset @ 0x1C00500CC
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

__int64 __fastcall ndisInvokeDeviceReset(_BYTE *a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  KIRQL v5; // bl
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi

  if ( *a1 )
  {
    if ( a2 >= 0x14 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*(_LIST_ENTRY **)(a3 + 8));
      v7 = (__int64)InterfaceByNetLuid;
      if ( InterfaceByNetLuid && (v8 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid, 0x19u), (v10 = v8) != 0) )
      {
        if ( (*(_DWORD *)(v8 + 124) & 0x1080110) == 0 && *(_DWORD *)(v8 + 1520) == 1 && ndisReferenceMiniport(v8) )
        {
          ndisIfDereferenceMiniport(v7, v9, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v5);
          if ( (*(_DWORD *)(v10 + 120) & 0x80u) == 0 )
            v4 = -1073741637;
          else
            v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 3792) + 360LL) + 136LL))(
                   *(_QWORD *)(v10 + 24),
                   *(unsigned int *)(a3 + 16));
          ndisDereferenceMiniport(v10, 0x6Bu);
        }
        else
        {
          ndisIfDereferenceMiniport(v7, v9, 0x19u);
          KeReleaseSpinLock(&ndisIfListLock, v5);
          return (unsigned int)-1073741436;
        }
      }
      else
      {
        KeReleaseSpinLock(&ndisIfListLock, v5);
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
  return v4;
}
