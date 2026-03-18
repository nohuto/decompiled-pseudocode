/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0214F50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C003C5A4 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C020ECDC (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v13; // rax
  ULONG PartitionId; // edx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  DXGK_VIRTUAL_GPU_PARAV *v20; // rax
  DXGK_VIRTUAL_GPU_PARAV *v21; // r10
  ULONG v22; // r14d
  _QWORD *v23; // r10
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned int v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-CCh] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h]
  const wchar_t *v35; // [rsp+50h] [rbp-B0h]
  unsigned int *v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+60h] [rbp-A0h]
  unsigned int *v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+80h] [rbp-80h]
  _BYTE v42[40]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v43[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v44[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v45[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v46[72]; // [rsp+118h] [rbp+18h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v44,
    *(struct DXGADAPTER *const *)(*((_QWORD *)this + 4) + 16LL),
    0LL);
  LODWORD(v9) = COREADAPTERACCESS::AcquireShared((__int64)v44, 0xFFFFFFFFLL, v6);
  if ( (int)v9 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v8, v7);
    if ( !Current )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v13 + 24) = 665LL;
      WdLogEvent5_WdAssertion(v13);
    }
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v43, (struct _KTHREAD **)this + 5);
    PartitionId = a2->PartitionId;
    v31 = 0xFFFF;
    LODWORD(v9) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v31);
    if ( (int)v9 >= 0 )
    {
      Luid = 0LL;
      v15 = ZwAllocateLocallyUniqueId(&Luid);
      v9 = v15;
      if ( v15 >= 0 )
      {
        *((_BYTE *)Current + 299) |= 2u;
        v20 = (DXGK_VIRTUAL_GPU_PARAV *)operator new(0x108uLL, 0x4B677844u, 1, PagedPool);
        if ( v20 )
          v21 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v20, *((struct ADAPTER_RENDER **)this + 4));
        else
          v21 = 0LL;
        if ( v21 )
        {
          v22 = v31;
          *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v31) = v21;
          *((_BYTE *)v21 + 144) = 1;
          *((_QWORD *)v21 + 10) = Current;
          *((_BYTE *)v21 + 145) = a3;
          *((_DWORD *)v21 + 6) = v22;
          *(_OWORD *)((char *)v21 + 36) = DXGK_VRD_UMED_CLASID;
          *(struct _LUID *)((char *)v21 + 28) = Luid;
          v23 = (_QWORD *)((char *)v21 + 112);
          ++*((_DWORD *)this + 4);
          v24 = (char *)this + 64;
          v25 = *(_QWORD *)v24;
          if ( *(char **)(*(_QWORD *)v24 + 8LL) != v24 )
            __fastfail(3u);
          *v23 = v25;
          v23[1] = v24;
          *(_QWORD *)(v25 + 8) = v23;
          v33 = 0LL;
          v40 = 0LL;
          v41 = 0;
          v35 = L"GuestIoSpaceSizeInMb";
          v36 = &v30;
          v38 = &v30;
          *(_QWORD *)v24 = v23;
          v30 = 1;
          v34 = 288;
          v37 = 67108868;
          v39 = 4;
          memset(v42, 0, sizeof(v42));
          if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v33, 0LL, 0LL) >= 0 )
          {
            v28 = (unsigned __int64)v30 << 20;
            *((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 170) = v28;
          }
          a2->PartitionId = v22;
          LODWORD(v9) = 0;
        }
        else
        {
          LODWORD(v9) = -1073741801;
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v17, v16, v18);
        *(_QWORD *)(v19 + 24) = v9;
        WdLogEvent5_WdError(v19);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v46);
  COREACCESS::~COREACCESS((COREACCESS *)v45);
  return (unsigned int)v9;
}
