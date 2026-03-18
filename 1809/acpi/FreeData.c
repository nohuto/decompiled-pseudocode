/*
 * XREFs of FreeData @ 0x1C00031E4
 * Callers:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     Store @ 0x1C000A740 (Store.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C000B778 (ACPIIoctlEvalControlMethod.c)
 *     ACPIGetWorkerForString @ 0x1C000C1B0 (ACPIGetWorkerForString.c)
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001BD30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026500 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

void *__fastcall FreeData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v6 & 8) != 0 )
      FreeData();
  }
  else if ( *(_QWORD *)(a1 + 32) )
  {
    if ( *(int *)(a1 + 8) > 0 )
    {
      *(_WORD *)a1 |= 8u;
    }
    else
    {
      if ( *(_WORD *)(a1 + 2) == 4 )
        FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(_DWORD **)(a1 + 32));
      FreeObjData(a1, a2, a3, a4);
    }
  }
  return memset((void *)a1, 0, 0x28uLL);
}
