/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C01E5C00
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0036184 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C01DF984 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rax
  ULONG PartitionId; // edx
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGK_VIRTUAL_GPU_PARAV *v14; // rax
  DXGK_VIRTUAL_GPU_PARAV *v15; // r10
  ULONG v16; // r14d
  _QWORD *v17; // r10
  char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  struct _LUID Luid; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  const wchar_t *v26; // [rsp+50h] [rbp-B0h]
  unsigned int *v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+60h] [rbp-A0h]
  unsigned int *v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+80h] [rbp-80h]
  _BYTE v33[40]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v35[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v36[32]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v37[40]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v38; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v39; // [rsp+168h] [rbp+68h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v35,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 4) + 16LL),
    0LL);
  LODWORD(v6) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
  if ( (int)v6 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 644LL;
      WdLogEvent5_WdAssertion(v9);
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v34, (struct _KTHREAD **)this + 5);
    PartitionId = a2->PartitionId;
    v39 = 0xFFFF;
    LODWORD(v6) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v39);
    if ( (int)v6 >= 0 )
    {
      v11 = ZwAllocateLocallyUniqueId(&Luid);
      v6 = v11;
      if ( v11 >= 0 )
      {
        *((_BYTE *)Current + 323) |= 2u;
        v14 = (DXGK_VIRTUAL_GPU_PARAV *)operator new(0x108uLL, 0x4B677844u, 1, PagedPool);
        if ( v14 )
          v15 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v14, *((struct ADAPTER_RENDER **)this + 4));
        else
          v15 = 0LL;
        if ( v15 )
        {
          v16 = v39;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v39) = v15;
          *((_BYTE *)v15 + 144) = 1;
          *((_QWORD *)v15 + 10) = Current;
          *((_BYTE *)v15 + 145) = a3;
          *((_DWORD *)v15 + 6) = v16;
          *(_OWORD *)((char *)v15 + 36) = DXGK_VRD_UMED_CLASID;
          *(struct _LUID *)((char *)v15 + 28) = Luid;
          v17 = (_QWORD *)((char *)v15 + 112);
          ++*((_DWORD *)this + 4);
          v18 = (char *)this + 64;
          v19 = *(_QWORD *)v18;
          if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
            __fastfail(3u);
          *v17 = v19;
          v17[1] = v18;
          *(_QWORD *)(v19 + 8) = v17;
          v24 = 0LL;
          v31 = 0LL;
          v32 = 0;
          v26 = L"GuestIoSpaceSizeInMb";
          v27 = &v38;
          v29 = &v38;
          *(_QWORD *)v18 = v17;
          v38 = 1;
          v25 = 288;
          v28 = 67108868;
          v30 = 4;
          memset(v33, 0, sizeof(v33));
          if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v24, 0LL, 0LL) >= 0 )
          {
            v21 = (unsigned __int64)v38 << 20;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v20) + 174) = v21;
          }
          a2->PartitionId = v16;
          LODWORD(v6) = 0;
        }
        else
        {
          LODWORD(v6) = -1073741801;
        }
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v13 + 24) = v6;
        WdLogEvent5_WdError(v13);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  return (unsigned int)v6;
}
