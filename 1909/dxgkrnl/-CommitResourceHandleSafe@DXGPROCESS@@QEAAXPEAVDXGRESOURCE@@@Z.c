/*
 * XREFs of ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00182D8
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 */

void __fastcall DXGPROCESS::CommitResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rax

  v3 = (char *)this + 184;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v11 = *((unsigned int *)v3 + 4);
      if ( (_DWORD)v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v5, &EventBlockThread, v6, v11);
    }
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v7 = *((_DWORD *)a2 + 4);
  v8 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)this + 56) )
  {
    v9 = *((_QWORD *)this + 26);
    if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60) && (*(_DWORD *)(v9 + 16 * v8 + 8) & 0x1F) != 0 )
    {
      v10 = 2 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v9 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion((v7 >> 25) & 0x60, v9);
        *(_QWORD *)(v12 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v12);
        v9 = *((_QWORD *)this + 26);
      }
      *(_DWORD *)(v9 + 8 * v10 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
