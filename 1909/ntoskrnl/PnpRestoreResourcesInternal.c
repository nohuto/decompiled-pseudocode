/*
 * XREFs of PnpRestoreResourcesInternal @ 0x140875D60
 * Callers:
 *     PnpReallocateResources @ 0x140875B80 (PnpReallocateResources.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x1407246BC (PnpDetermineResourceListSize.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14075290C (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpFindBestConfiguration @ 0x140752A08 (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140752D64 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140753710 (IopResourceRequirementsListToReqList.c)
 *     PnpCmResourcesToIoResources @ 0x140754768 (PnpCmResourcesToIoResources.c)
 *     IopCommitConfiguration @ 0x14077D8D8 (IopCommitConfiguration.c)
 *     IopRearrangeReqList @ 0x1407802C4 (IopRearrangeReqList.c)
 */

__int64 __fastcall PnpRestoreResourcesInternal(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax
  char *v4; // rbx
  int BestConfiguration; // esi
  __int64 v6; // rbx
  _DWORD *v7; // rbx
  ULONG v8; // eax
  _QWORD *v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  v1 = *(_DWORD **)(a1 + 416);
  result = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  if ( v1 )
  {
    v4 = PnpCmResourcesToIoResources(a1, v1, 0);
    if ( !v4 )
      return 3221225626LL;
    memset(v10, 0, sizeof(v10));
    v10[0] = *(_QWORD *)(a1 + 32);
    v10[3] = v4;
    HIDWORD(v10[1]) = 4;
    BestConfiguration = IopResourceRequirementsListToReqList((__int64)v10, &v10[4]);
    if ( BestConfiguration >= 0 && (v6 = v10[4]) != 0 )
    {
      IopRearrangeReqList(v10[4]);
      if ( !*(_QWORD *)(v6 + 24) )
      {
        PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
        return 3221225858LL;
      }
      BestConfiguration = PnpFindBestConfiguration((__int64)v10, 1u, (__int64)v9);
      PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
      if ( BestConfiguration >= 0 )
        BestConfiguration = IopCommitConfiguration(v9);
      if ( v10[5] )
        ExFreePoolWithTag((PVOID)v10[5], 0);
      if ( v10[6] )
        ExFreePoolWithTag((PVOID)v10[6], 0);
      v7 = *(_DWORD **)(a1 + 416);
      v8 = PnpDetermineResourceListSize(v7);
      IopWriteAllocatedResourcesToRegistry(a1, v7, v8);
    }
    else
    {
      ExFreePoolWithTag((PVOID)v10[3], 0);
    }
    return (unsigned int)BestConfiguration;
  }
  return result;
}
