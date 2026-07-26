/*
 * XREFs of ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C00D0898
 * Callers:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C00C0670 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 * Callees:
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00BFE14 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(volatile signed __int32 **a1)
{
  _WORD *PoolWithTag; // rax
  char v3; // bl
  _WORD *v4; // rdi
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x44745042u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v5 = PoolWithTag + 4;
    v5[1] = v5;
    *v5 = v5;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_DWORD *)v4 + 8) = 0;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_DWORD *)v4 + 12) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(a1, 0LL);
  if ( v4 )
  {
    v6 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v6 + 12, 0xFFFFFFFF) == 1 && v6 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v6);
    *a1 = (volatile signed __int32 *)v4;
    return 1;
  }
  return v3;
}
