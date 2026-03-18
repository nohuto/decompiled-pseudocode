/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0052044 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  char v1; // si
  unsigned int v3; // r14d
  __int64 *v4; // rbp
  signed __int32 v5; // r15d
  _UNKNOWN **v6; // rdx
  int v7; // ebx
  int v8; // r12d
  __int64 *v9; // r11
  __int64 *v10; // rdx
  __int64 *v11; // r9
  __int64 *v12; // r8
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // [rsp+30h] [rbp-68h]
  _QWORD v21[6]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v3 = 0;
  memset(v21, 0, 0x28uLL);
  v4 = 0LL;
  *(_DWORD *)(a1 + 212) = 4;
  v5 = 0;
  v6 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      10,
      62,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      4);
  }
  v7 = *(_DWORD *)(a1 + 104);
  v8 = *(_DWORD *)(a1 + 108);
  if ( v7 == 6 && v8 == 5 )
    v1 = 1;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v9 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    while ( 1 )
    {
      v10 = v9;
      v11 = v9;
      v9 = (__int64 *)*v9;
      v12 = (__int64 *)v10[6];
      if ( v12 != v10 + 6 )
      {
        do
        {
          v13 = *(v12 - 1);
          v12 = (__int64 *)*v12;
          v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 688), 0, 0);
        }
        while ( !v5 && v12 != v10 + 6 );
      }
      if ( v5 )
        _InterlockedOr64(v11 + 2, 0x20000uLL);
      else
        _InterlockedAnd64(v11 + 2, 0xFFFFFFFFFFFDFFFFuLL);
      if ( v7 == 5 || (v14 = 0, v8 == 3) )
        v14 = 1;
      if ( v5 && v14 == 1 || v1 == 1 )
      {
        if ( (v10[2] & 0x40) != 0 )
        {
          _InterlockedAnd64(v10 + 2, 0xFFFFFFFFFFFFFFBFuLL);
          goto LABEL_27;
        }
      }
      else
      {
        v15 = v11[2];
        if ( *((_DWORD *)v10 + 11) < v7 )
        {
          if ( (v15 & 0x200) == 0 )
            _InterlockedOr64(v10 + 2, 0x40uLL);
          goto LABEL_27;
        }
        if ( (v15 & 0x40) != 0 )
        {
          _InterlockedAnd64(v11 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_27:
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v10 + 16, 3, 0) == 1 )
            *((_DWORD *)v10 + 17) = 3;
          goto LABEL_29;
        }
        if ( (v15 & 0x2000) != 0 )
          goto LABEL_27;
      }
LABEL_29:
      if ( v9 == &AcpiPowerNodeList )
      {
        v3 = 0;
        break;
      }
    }
  }
  v16 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v7 != 1 )
    goto LABEL_39;
  v17 = (__int64 *)AMLIGetParent(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 712LL));
  v4 = AMLIGetNamedChild(v17, 1262573407);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v17);
  if ( !v4 )
    goto LABEL_39;
  memset(v21, 0, 0x28uLL);
  WORD1(v21[0]) = 1;
  v18 = (unsigned int)v16 < 7 ? (unsigned int)AcpiSystemStateTranslation[v16] : 0xFFFFFFFFLL;
  v21[2] = v18;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1u, v21, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
  v4 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v3;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x3Fu,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v20);
  }
  result = 259LL;
  if ( v3 != 259 )
  {
LABEL_39:
    ACPIDeviceCompleteGenericPhase((__int64)v4, v3, 0LL, a1);
    return 0LL;
  }
  return result;
}
