/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011BF0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseSetupOnOff(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rbp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // al
  int v21; // edi
  __int64 v23; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (void *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 6;
  if ( *(_WORD *)(a1 + 82) )
  {
    ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 32), v2, v1 + 96);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 16), 0x1000uLL);
  }
  memset(v2, 0, 0x28uLL);
  v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 32), 1179012959LL, v4, v5);
  if ( !v6 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x46464F5FuLL, 0LL);
  v9 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 80) = v6;
  v10 = AMLIGetNamedChild(v9, 1598967647LL, v7, v8);
  if ( !v10 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x5F4E4F5FuLL, 0LL);
  v13 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 72) = v10;
  v14 = AMLIGetNamedChild(v13, 1414746719LL, v11, v12);
  v15 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 88) = v14;
  v18 = AMLIGetNamedChild(v15, 1096045407LL, v16, v17);
  if ( !v18 )
    KeBugCheckEx(0xA5u, 0xEuLL, *(_QWORD *)(v1 + 32), 0x4154535FuLL, 0LL);
  memset(v2, 0, 0x28uLL);
  if ( (*(_DWORD *)(v1 + 16) & 0x1000LL) != 0 )
  {
    v21 = 0;
LABEL_17:
    v23 = *(unsigned int *)(a1 + 32);
    if ( v21 < 0 )
      *(_DWORD *)(a1 + 48) = v21;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v23);
    goto LABEL_12;
  }
  v19 = *(_QWORD *)(a1 + 56);
  if ( v19 )
  {
    AMLIDereferenceHandleEx(v19);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v20 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v18;
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (v20 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
  v21 = AMLIAsyncEvalObject(v18, v2, 0LL, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v21 != 259 )
    goto LABEL_17;
LABEL_12:
  AMLIDereferenceHandleEx(v18);
  return (unsigned int)v21;
}
