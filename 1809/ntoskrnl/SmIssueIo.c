/*
 * XREFs of SmIssueIo @ 0x1403091E4
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140303FE4 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140306584 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x1400E1134 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmKmIssueIo @ 0x1403076AC (SmKmIssueIo.c)
 */

__int64 __fastcall SmIssueIo(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v6; // esi
  unsigned __int64 v7; // rdi
  int v8; // ebp
  int v13; // edi
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  void (*v16)(void *, struct _IO_STATUS_BLOCK *, unsigned int); // r8
  struct _EX_RUNDOWN_REF *v17; // rax
  _QWORD v19[6]; // [rsp+30h] [rbp-58h] BYREF

  v6 = 0;
  v7 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = 0;
  if ( (a6 & 1) == 0 )
    v7 = a6;
  if ( (*(_DWORD *)(v7 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016)) )
      return (unsigned int)-1073741058;
    v6 = 1;
  }
  if ( (a6 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6104));
    v8 = 1;
  }
  memset(v19, 0, 0x28uLL);
  v14 = *(_DWORD *)a1;
  HIDWORD(v19[3]) = *(_DWORD *)(a1 + 6208);
  v19[1] = a5;
  LODWORD(v19[3]) = a2;
  v19[2] = __PAIR64__(a3, a4);
  LODWORD(v19[4]) = a6 & 1 | v19[4] & 0xFFFFFFFE;
  if ( (v14 & 0x2000) != 0 )
  {
    v15 = v7 + 32;
    v7 = a1;
    v19[0] = v15;
    v16 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpIoCompletionApc;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = a1;
    v19[0] = v7 + 48;
    v16 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpDeviceIoCompletion;
    *(_DWORD *)(v7 + 32) = a4;
    v14 = *(_DWORD *)a1;
  }
  v13 = SmKmIssueIo((struct _SMKM_FILE_INFO *)(a1 + 6216), (__int64)v19, v16, (void *)v7, (v14 >> 13) & 1);
  if ( v13 >= 0 )
  {
    v6 = 0;
    v8 = 0;
  }
  if ( v8 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6104));
  if ( v6 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v17 + 1);
  }
  return (unsigned int)v13;
}
