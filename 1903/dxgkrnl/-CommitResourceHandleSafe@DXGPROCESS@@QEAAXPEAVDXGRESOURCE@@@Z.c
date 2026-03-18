/*
 * XREFs of ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0017A68
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 */

void __fastcall DXGPROCESS::CommitResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v3; // rdi
  __int64 v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax

  v3 = (char *)this + 184;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)v3 + 4) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v5, &EventBlockThread);
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = *((_DWORD *)a2 + 4);
  v7 = (v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *((_DWORD *)this + 56) )
  {
    v8 = *((_QWORD *)this + 26);
    if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60) && (*(_DWORD *)(v8 + 16 * v7 + 8) & 0x1F) != 0 )
    {
      v9 = 2 * (((unsigned __int64)v6 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v8 + 16 * (((unsigned __int64)v6 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion((v6 >> 25) & 0x60, v8);
        *(_QWORD *)(v10 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v10);
        v8 = *((_QWORD *)this + 26);
      }
      *(_DWORD *)(v8 + 8 * v9 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
