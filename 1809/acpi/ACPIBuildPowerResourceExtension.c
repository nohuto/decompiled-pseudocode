/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x1C002CE3C
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C002CD14 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(volatile signed __int32 *a1, _QWORD *a2)
{
  int v4; // esi
  char *PoolWithTag; // rbx
  unsigned __int8 *v6; // r14
  char v7; // al
  __int64 v8; // rax

  v4 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x44706341u);
  if ( PoolWithTag )
  {
    v6 = *(unsigned __int8 **)(*(_QWORD *)a1 + 96LL);
    memset(PoolWithTag, 0, 0x90uLL);
    v7 = gdwfAMLI;
    *((_QWORD *)PoolWithTag + 2) = 4LL;
    *((_QWORD *)PoolWithTag + 4) = a1;
    dword_1C0080868 = 0;
    pszDest = 0;
    if ( (v7 & 4) != 0 )
      _InterlockedIncrement(a1 + 2);
    PoolWithTag[40] = v6[1];
    *((_DWORD *)PoolWithTag + 16) = 3;
    if ( *v6 < 6u )
      v4 = SystemPowerStateTranslation[*v6];
    *((_DWORD *)PoolWithTag + 11) = v4;
    *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 48;
    *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
    *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
    *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
    v8 = *(_QWORD *)a1;
    *a2 = PoolWithTag;
    *(_QWORD *)(v8 + 104) = PoolWithTag;
    return 259LL;
  }
  else
  {
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x19u,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      144);
    return 3221225626LL;
  }
}
