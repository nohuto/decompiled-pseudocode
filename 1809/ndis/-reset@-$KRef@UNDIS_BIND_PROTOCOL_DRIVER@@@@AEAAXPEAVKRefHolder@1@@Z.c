/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00BFE14
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00BFD84 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C00BFD84.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C00D0898 (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 *     NdisRegisterProtocol @ 0x1C00EDB50 (NdisRegisterProtocol.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(volatile signed __int32 **a1, volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 12, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v4);
    }
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement(a2 + 12);
  }
  return result;
}
