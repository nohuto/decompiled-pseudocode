/*
 * XREFs of ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C000E88C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::CommitResourceHandleSafe(DXGPROCESS *this, struct DXGRESOURCE *a2)
{
  char *v2; // rsi
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax

  v2 = (char *)this + 208;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 208));
  v5 = *((_DWORD *)a2 + 4);
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)this + 62) )
  {
    v7 = *((_QWORD *)this + 29);
    if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (*(_DWORD *)(v7 + 16 * v6 + 8) & 0x1F) != 0 )
    {
      v8 = 2LL * ((v5 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v7 + 16LL * ((v5 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v9 = WdLogNewEntry5_WdAssertion();
        *(_QWORD *)(v9 + 24) = 222LL;
        WdLogEvent5_WdAssertion(v9);
        v7 = *((_QWORD *)this + 29);
      }
      *(_DWORD *)(v7 + 8 * v8 + 8) &= ~0x2000u;
    }
  }
  v10 = (*((_DWORD *)a2 + 4) >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)this + 62) )
    *(_DWORD *)(*((_QWORD *)this + 29) + 16LL * v10 + 8) &= ~0x4000u;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
