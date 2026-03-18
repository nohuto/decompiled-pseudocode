/*
 * XREFs of PsGetAllocatedFullProcessImageName @ 0x140658AD8
 * Callers:
 *     PfCalculateProcessHash @ 0x1406588F0 (PfCalculateProcessHash.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140658AA4 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x14086DA20 (PnpLogVetoInformation.c)
 *     ViCreateProcessCallbackInternal @ 0x140979E7C (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageName(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *PoolWithTag; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rbx

  v2 = *(_QWORD *)(a1 + 1128);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(v2 + 2) + 16LL, 0x6E497350u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = *(_OWORD *)v2;
    if ( PoolWithTag[1] )
    {
      PoolWithTag[1] = PoolWithTag + 2;
      memmove(PoolWithTag + 2, *(const void **)(v2 + 8), *(unsigned __int16 *)(v2 + 2));
    }
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
