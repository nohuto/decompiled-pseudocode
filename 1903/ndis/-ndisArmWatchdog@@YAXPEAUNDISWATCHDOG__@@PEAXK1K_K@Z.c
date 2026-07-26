/*
 * XREFs of ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00FB6F0
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A37F0 (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FC814 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C01175DC (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000883C (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisArmWatchdog(
        struct NDISWATCHDOG__ *a1,
        void *a2,
        int a3,
        void *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v9; // rdx
  struct NDISWATCHDOG__ *v10; // rdi
  int v11; // ecx
  void *v12; // rcx
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // rbx
  ULONG v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v10 = WatchdogFromHandle(a1);
    *((_DWORD *)v10 + 50) = 846677070;
    if ( v9 )
    {
      v11 = *v9;
      if ( v11 == 5 )
      {
        v12 = (void *)*((_QWORD *)v9 + 4);
        goto LABEL_5;
      }
      v18 = v11 - 17;
      if ( !v18 )
      {
        v12 = a2;
LABEL_5:
        if ( v12 )
        {
          if ( (*((_DWORD *)v12 + 30) & 0x100) == 0
            && PoQueryWatchdogTime(*((PDEVICE_OBJECT *)v12 + 479), &SecondsRemaining) )
          {
            v16 = SecondsRemaining;
            if ( SecondsRemaining < 3 )
              v16 = 3;
            v17 = 1000 * v16 - 3000;
            if ( v17 < 0xBB8 )
              v17 = 3000;
            if ( v17 < a5 )
              a5 = v17;
            v13 = 1;
          }
          else
          {
            v13 = 0;
          }
          *((_BYTE *)v10 + 248) = v13;
        }
        goto LABEL_10;
      }
      if ( v18 == 1 )
      {
        v12 = (void *)*((_QWORD *)v9 + 2);
        goto LABEL_5;
      }
    }
LABEL_10:
    *((_QWORD *)v10 + 27) = a2;
    *((_QWORD *)v10 + 26) = &ndisGlobalTriageBlock;
    *((_DWORD *)v10 + 51) = a5;
    *((_QWORD *)v10 + 28) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v10 + 29) = KeGetCurrentThread();
    *((_QWORD *)v10 + 30) = a6;
    v14 = g_ndisWatchdogSequenceNumber;
    *((_QWORD *)v10 + 32) = a4;
    g_ndisWatchdogSequenceNumber = v14 + 1;
    *((_DWORD *)v10 + 41) = v14 + 1;
    v15 = -10000LL * *((unsigned int *)v10 + 51);
    *((_DWORD *)v10 + 48) = a3;
    *((_DWORD *)v10 + 40) = 1;
    KeClearEvent((PRKEVENT)v10 + 7);
    KeSetTimerEx((PKTIMER)v10 + 1, (LARGE_INTEGER)v15, 0, (PKDPC)v10);
  }
}
