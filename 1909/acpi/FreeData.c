/*
 * XREFs of FreeData @ 0x1C00054E0
 * Callers:
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     ACPIGetWorkerForString @ 0x1C00052C0 (ACPIGetWorkerForString.c)
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     ParseScope @ 0x1C000DDB0 (ParseScope.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C000ECB0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C00112B4 (ACPIIoctlEvalControlMethod.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     Store @ 0x1C001B540 (Store.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249A0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

void *__fastcall FreeData(_QWORD *a1)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1[1];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData(v3);
  }
  else if ( a1[4] && *((int *)a1 + 2) <= 0 )
  {
    if ( *((_WORD *)a1 + 1) == 4 )
      FreeDataBuffs(a1[4] + 8LL, *(unsigned int *)a1[4]);
    FreeObjData(a1);
  }
  return memset(a1, 0, 0x28uLL);
}
