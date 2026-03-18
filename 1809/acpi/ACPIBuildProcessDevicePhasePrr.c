/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x1C0015480
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00159F0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004969C (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIWriteEventLogEntry @ 0x1C0052F38 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  ULONG_PTR v6; // rdx
  unsigned int v7; // ebp
  void *v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  void *v11; // r8
  unsigned int v13; // eax

  v4 = *(_QWORD **)(a1 + 40);
  v5 = a1 + 80;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v4[50] )
  {
    if ( !v6 )
      goto LABEL_3;
    dword_1C0080868 = 0;
    pszDest = 0;
LABEL_12:
    FreeDataBuffs(v5, 1u);
    goto LABEL_3;
  }
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_3;
    }
    v13 = ACPIBuildDeviceResetPowerNode((ULONG_PTR)v4, v6);
    dword_1C0080868 = 0;
    v7 = v13;
    pszDest = 0;
    goto LABEL_12;
  }
LABEL_3:
  v4[56] = AMLIGetNamedChild(v4[89], 1414746719LL, a3, a4);
  v8 = &unk_1C006E28A;
  v9 = v4[1];
  v10 = 0;
  v11 = &unk_1C006E28A;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v8 = (void *)v4[70];
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = (void *)v4[71];
  }
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    6,
    47,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v7,
    (char)v4,
    (__int64)v8,
    (__int64)v11);
  ACPIBuildCompleteMustSucceed(0LL);
  return v7;
}
