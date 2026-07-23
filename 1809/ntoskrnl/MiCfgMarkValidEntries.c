/*
 * XREFs of MiCfgMarkValidEntries @ 0x1405F731C
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x140089550 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     CfgAddressToBitState @ 0x1401224C0 (CfgAddressToBitState.c)
 *     MiSelectCfgBitMap @ 0x1405F582C (MiSelectCfgBitMap.c)
 *     MiPopulateCfgBitMap @ 0x1405F7560 (MiPopulateCfgBitMap.c)
 *     MiValidateUserCallTarget @ 0x1406A88E8 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 *a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 *v9; // r12
  unsigned int v13; // r8d
  const signed __int64 **v14; // r13
  unsigned int v15; // r10d
  unsigned int v16; // r14d
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rdi
  unsigned __int64 v23; // r14
  int v24; // ebx
  _QWORD *v26; // rdx
  int v27; // edx
  __int64 v28; // rcx
  unsigned int SessionId; // eax
  unsigned __int64 v30; // rax
  unsigned int v31; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-40h]
  __int64 *v33; // [rsp+40h] [rbp-38h]

  v9 = a6;
  *(_DWORD *)a6 = 0;
  if ( (((unsigned __int16)a2 | (unsigned __int16)a3) & 0xFFF) != 0 )
    return 3221225485LL;
  v13 = 1;
  if ( a5 > 1 )
  {
    v26 = a4 + 2;
    while ( a4[2 * v13 - 2] <= *v26 )
    {
      ++v13;
      v26 += 2;
      if ( v13 >= a5 )
        goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  if ( a4[2 * a5 - 2] >= a3 )
    return 3221225485LL;
  v14 = (const signed __int64 **)MiSelectCfgBitMap(a1, a2, 0LL);
  v16 = v15;
  if ( a5 )
  {
    v17 = a4;
    while ( (*v17 & 0xF) == 0 )
    {
      v18 = v17[1];
      if ( (v18 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        break;
      if ( (a7 & 1) != 0 && (v18 & 1) != 0
        || (v18 & 4) != 0
        && (!MiIsProcessCfgExportSuppressionEnabled()
         || ((unsigned int)CfgAddressToBitState(v19 + a2, *v14) != 2 || !MiIsProcessCfgExportSuppressionEnabled())
         && !(unsigned int)MiValidateUserCallTarget(a2 + *v17, v14)) )
      {
        return 3221225506LL;
      }
      ++v16;
      v17 += 2;
      if ( v16 >= a5 )
        goto LABEL_14;
    }
    return 3221225485LL;
  }
LABEL_14:
  if ( *(_DWORD *)v9 == a5 )
    return 0LL;
  if ( !MiIsProcessCfgEnabled() )
    return 3221225541LL;
  v20 = MiObtainReferencedVadEx(a2, 0, (int *)&a6);
  v22 = v20;
  if ( !v20 )
    return (unsigned int)a6;
  v23 = a2 + a3 - 1;
  if ( v23 <= (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF)
    && (!a8
     || (v27 = *(_DWORD *)(v20 + 48), (v27 & 7) != 1)
     && (v27 & 0x4000) == 0
     && **(_QWORD **)(v20 + 72) == MiSectionControlArea(a8)
     && (v28 = *(unsigned int *)(v22 + 24), (v28 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12 == a2)
     && (MiGetProtoPteAddress(v22, v28 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32), 0, &a6),
         SessionId = MmGetSessionIdEx(a1),
         v30 = MiStartingOffset(a6, *(_QWORD *)(v22 + 80), SessionId),
         v30 == a9)) )
  {
    v31 = a5;
    v32 = a4;
    v33 = v9;
    v24 = MiPopulateCfgBitMap((_DWORD)v14, (unsigned int)&v31, v21, 1, a2, (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    if ( v24 >= 0 )
      v24 = 0;
  }
  else
  {
    v24 = -1073741811;
  }
  MiUnlockAndDereferenceVad((char *)v22);
  return (unsigned int)v24;
}
