/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0259BB0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0DB4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F1224 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C01F1DC4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0258F10 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, int a4)
{
  int v4; // r12d
  char v5; // r15
  __int64 v7; // r14
  DXGADAPTER **v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int CddPrimaryShareResourceHandle; // r12d
  __int64 v24; // r15
  int v25; // r13d
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char *v32; // r14
  unsigned __int64 v33; // rdx
  _BYTE *PoolWithTag; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rsi
  __int64 v56; // rax
  int v57; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+30h] [rbp-D0h]
  _DWORD v61[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v62[14]; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+F0h] [rbp-10h]
  _BYTE v64[320]; // [rsp+F8h] [rbp-8h] BYREF
  int v65; // [rsp+238h] [rbp+138h]

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v8 = *(DXGADAPTER ***)(*((_QWORD *)this + 216) + 2552LL);
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 9160LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 9161LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v8[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v17 + 24) = 9162LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *((_QWORD *)this + v7 + 65);
  v19 = v7;
  v20 = v18;
  if ( v18 && *((_DWORD *)this + 82) == 1 )
  {
    if ( (*(_DWORD *)(v18 + 4) & 1) == 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v18);
      *(_QWORD *)(v21 + 24) = 9171LL;
      WdLogEvent5_WdAssertion(v21);
      v20 = *((_QWORD *)this + v7 + 65);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(v20 + 24) + 16LL) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v20);
      *(_QWORD *)(v22 + 24) = 9172LL;
      WdLogEvent5_WdAssertion(v22);
      v20 = *((_QWORD *)this + v7 + 65);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) + 48LL) + 4LL) & 0x10) != 0 )
    {
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      v20 = *((_QWORD *)this + v7 + 65);
    }
  }
  if ( !v20 )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, (unsigned int)v7);
    if ( !CddPrimaryShareResourceHandle )
      goto LABEL_45;
    memset(v61, 0, sizeof(v61));
    v61[1] = CddPrimaryShareResourceHandle;
    if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)this, v61, CddPrimaryShareResourceHandle) < 0 )
      goto LABEL_45;
    v24 = v61[5];
    v25 = v61[6];
    v26 = v61[5] + v61[6];
    if ( (unsigned int)(v61[5] + v61[6]) >= v61[5] )
    {
      v27 = v26;
      v32 = (char *)operator new[](v26, 0x4B677844u, PagedPool);
      if ( v32 )
      {
        memset(v62, 0, 0x48uLL);
        P = 0LL;
        v65 = 0;
        v37 = v61[7];
        if ( v61[7] <= 4u )
        {
          PoolWithTag = v64;
          P = v64;
        }
        else
        {
          v33 = 0xFFFFFFFFFFFFFFFFuLL % v61[7];
          if ( 0xFFFFFFFFFFFFFFFFuLL / v61[7] < 0x50 )
            goto LABEL_39;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * v61[7], 0x4B677844u);
          P = PoolWithTag;
        }
        v65 = v37;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 80 * v37);
          if ( P )
          {
            HIDWORD(v62[0]) = CddPrimaryShareResourceHandle;
            LODWORD(v62[1]) = v37;
            v62[2] = P;
            if ( v25 )
              v62[5] = &v32[v24];
            else
              v62[5] = 0LL;
            LODWORD(v62[6]) = v25;
            v62[7] = v32;
            LODWORD(v62[8]) = v24;
            if ( v61[4] )
            {
              v38 = WdLogNewEntry5_WdAssertion(PoolWithTag, v33);
              *(_QWORD *)(v38 + 24) = 9235LL;
              WdLogEvent5_WdAssertion(v38);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v62,
                        CddPrimaryShareResourceHandle,
                        v36,
                        0,
                        0LL,
                        v58,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              v42 = WdLogNewEntry5_WdEvent(v40);
              *(_QWORD *)(v42 + 24) = this;
              *(_QWORD *)(v42 + 32) = (unsigned int)v19;
              WdLogEvent5_WdEvent(v42);
            }
            else
            {
              *((_BYTE *)this + (unsigned int)v19 + 504) = 1;
              if ( !*((_QWORD *)this + v19 + 65) )
              {
                v41 = WdLogNewEntry5_WdAssertion(v40, v39);
                *(_QWORD *)(v41 + 24) = 9246LL;
                WdLogEvent5_WdAssertion(v41);
              }
            }
            operator delete[](v32);
            if ( P != v64 && P )
              ExFreePoolWithTag(P, 0);
            goto LABEL_44;
          }
        }
LABEL_39:
        v43 = WdLogNewEntry5_WdLowResource(PoolWithTag, v33, v35, v36);
        *(_QWORD *)(v43 + 24) = 9213LL;
        WdLogEvent5_WdLowResource(v43);
        operator delete[](v32);
        if ( P != v64 && P )
          ExFreePoolWithTag(P, 0);
        return 0LL;
      }
      v45 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
      *(_QWORD *)(v45 + 24) = this;
      *(_QWORD *)(v45 + 32) = v27;
      WdLogEvent5_WdLowResource(v45);
    }
LABEL_44:
    v5 = a3;
LABEL_45:
    v4 = a4;
  }
  v46 = *((_QWORD *)this + v19 + 65);
  if ( !v46 )
    return 0LL;
  if ( (*(_DWORD *)(v46 + 4) & 1) == 0 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v46, v20);
    *(_QWORD *)(v47 + 24) = 9266LL;
    WdLogEvent5_WdAssertion(v47);
    v46 = *((_QWORD *)this + v19 + 65);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v46 + 24) + 16LL) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v46, v20);
    *(_QWORD *)(v48 + 24) = 9267LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( v5 )
  {
    memset(v62, 0, 0x68uLL);
    v49 = (_QWORD *)*((_QWORD *)this + 2);
    v62[7] = 1LL;
    LOBYTE(v57) = 0;
    v62[2] = *(_QWORD *)(v49[2] + 2400LL);
    v50 = *((_QWORD *)this + v19 + 65);
    v62[3] = *(_QWORD *)(v49[2] + 2408LL);
    v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(v49[68] + 8LL) + 792LL))(
            v49[69],
            0LL,
            *(_QWORD *)(*(_QWORD *)(v50 + 24) + 24LL),
            v62,
            v57,
            v4);
    v55 = v51;
    if ( v51 < 0 )
    {
      v56 = WdLogNewEntry5_WdWarning(v53, v52, v54);
      *(_QWORD *)(v56 + 24) = v55;
      WdLogEvent5_WdWarning(v56);
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v19 + 65) + 24LL) + 16LL);
}
