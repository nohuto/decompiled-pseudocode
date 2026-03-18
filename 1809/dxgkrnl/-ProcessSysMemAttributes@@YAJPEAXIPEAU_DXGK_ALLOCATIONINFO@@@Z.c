/*
 * XREFs of ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C01D9038
 * Callers:
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0102860 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall ProcessSysMemAttributes(PVOID BaseAddress, unsigned int a2, struct _DXGK_ALLOCATIONINFO *a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  SIZE_T v7; // rax
  __int64 v8; // rcx
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  UINT v15; // edx
  UINT Alignment; // eax
  ULONG_PTR ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  ReturnLength = 0LL;
  v3 = a2;
  v4 = a2 >> 12;
  v7 = 48LL * (a2 >> 12);
  if ( !is_mul_ok(a2 >> 12, 0x30uLL) )
    v7 = -1LL;
  v9 = operator new[](v7, 0x4B677844u, PagedPool);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = 3677LL;
    WdLogEvent5_WdLowResource(v10);
    LODWORD(v11) = -1073741801;
    goto LABEL_18;
  }
  memset(v9, 0, 48 * v4);
  v12 = ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryBasicInformation,
          v9,
          48 * v4,
          &ReturnLength);
  v11 = v12;
  if ( v12 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = v11;
    *(_QWORD *)(v14 + 32) = 3694LL;
LABEL_7:
    WdLogEvent5_WdError(v14);
    goto LABEL_18;
  }
  if ( *((_QWORD *)v9 + 3) != v3 )
  {
    LODWORD(v11) = -1073741811;
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    *(_QWORD *)(v14 + 32) = 3701LL;
    goto LABEL_7;
  }
  if ( (*((_DWORD *)v9 + 10) & 0x800000) != 0 )
  {
    LODWORD(v11) = -1073741811;
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    *(_QWORD *)(v14 + 32) = 3713LL;
    goto LABEL_7;
  }
  v15 = a3->Flags.Value | 4;
  if ( (*((_DWORD *)v9 + 9) & 0x600) != 0 )
    v15 = a3->Flags.Value & 0xFFFFFFFB;
  a3->Flags.Value = v15;
  if ( (*((_DWORD *)v9 + 10) & 0x20400000) != 0 )
  {
    Alignment = a3->Alignment;
    if ( !Alignment || (_WORD)Alignment )
      a3->Alignment = 0x10000;
  }
LABEL_18:
  operator delete[](v9);
  return (unsigned int)v11;
}
