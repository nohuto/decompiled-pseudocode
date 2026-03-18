/*
 * XREFs of EnableDisableIPMIRegions @ 0x1C00AF9EC
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C004D150 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004D790 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009D030 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AD9E0 (ACPIBusIrpStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF9EC (EnableDisableIPMIRegions.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0023A90 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x1C0023FDC (AMLIGetFirstChild.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AMLIGetNSObjectData @ 0x1C006307C (AMLIGetNSObjectData.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF9EC (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall EnableDisableIPMIRegions(__int64 *a1, unsigned __int8 a2)
{
  unsigned int v4; // edi
  _QWORD *i; // rbx
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  int v10; // r14d
  int v11; // eax
  _QWORD v13[10]; // [rsp+30h] [rbp-68h] BYREF

  v4 = 0;
  for ( i = AMLIGetFirstChild(a1); i; i = (_QWORD *)AMLIIterateSiblingsNext((__int64)i) )
  {
    v7 = *(_WORD *)(AMLIGetNSObjectData(i) + 2);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = a2;
      v11 = EnableDisableIPMIRegions(i, v6);
      if ( v11 < 0 )
        v4 = v11;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(AMLIGetNSObjectData(i) + 32);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 7 )
        {
          v9 = AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v13, 0, sizeof(v13));
            WORD1(v13[0]) = 1;
            v13[2] = 7LL;
            WORD1(v13[5]) = 1;
            v13[7] = a2;
            v10 = AMLIAsyncEvalObject(v9, 0LL, 2u, v13, 0LL, 0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
            if ( v10 < 0 )
              v4 = v10;
          }
        }
      }
    }
  }
  return v4;
}
