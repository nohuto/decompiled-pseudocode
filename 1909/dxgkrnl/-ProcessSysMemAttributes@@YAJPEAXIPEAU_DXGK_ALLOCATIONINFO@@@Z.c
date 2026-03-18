/*
 * XREFs of ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0207AFC
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0136F50 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall ProcessSysMemAttributes(PVOID BaseAddress, unsigned int a2, struct _DXGK_ALLOCATIONINFO *a3)
{
  unsigned __int64 v3; // r14
  unsigned int v4; // ebx
  SIZE_T v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  UINT v20; // edx
  UINT Alignment; // eax
  ULONG_PTR ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  ReturnLength = 0LL;
  v3 = a2;
  v4 = a2 >> 12;
  v7 = 48LL * (a2 >> 12);
  if ( !is_mul_ok(a2 >> 12, 0x30uLL) )
    v7 = -1LL;
  v10 = operator new[](v7, 0x4B677844u, PagedPool);
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdLowResource(v9, v8, v11, v12);
    *(_QWORD *)(v13 + 24) = 3672LL;
    WdLogEvent5_WdLowResource(v13);
    LODWORD(v14) = -1073741801;
    goto LABEL_18;
  }
  memset(v10, 0, 48 * v4);
  v15 = ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryBasicInformation,
          v10,
          48 * v4,
          &ReturnLength);
  v14 = v15;
  if ( v15 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = v14;
    *(_QWORD *)(v19 + 32) = 3689LL;
LABEL_7:
    WdLogEvent5_WdError(v19);
    goto LABEL_18;
  }
  if ( *((_QWORD *)v10 + 3) < v3 )
  {
    LODWORD(v14) = -1073741811;
    v19 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    *(_QWORD *)(v19 + 32) = 3696LL;
    goto LABEL_7;
  }
  if ( (*((_DWORD *)v10 + 10) & 0x800000) != 0 )
  {
    LODWORD(v14) = -1073741811;
    v19 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    *(_QWORD *)(v19 + 32) = 3708LL;
    goto LABEL_7;
  }
  v20 = a3->Flags.Value | 4;
  if ( (*((_DWORD *)v10 + 9) & 0x600) != 0 )
    v20 = a3->Flags.Value & 0xFFFFFFFB;
  a3->Flags.Value = v20;
  if ( (*((_DWORD *)v10 + 10) & 0x20400000) != 0 )
  {
    Alignment = a3->Alignment;
    if ( !Alignment || (_WORD)Alignment )
      a3->Alignment = 0x10000;
  }
LABEL_18:
  operator delete[](v10);
  return (unsigned int)v14;
}
