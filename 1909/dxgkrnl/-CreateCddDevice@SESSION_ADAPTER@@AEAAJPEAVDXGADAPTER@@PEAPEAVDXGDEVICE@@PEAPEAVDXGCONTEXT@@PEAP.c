/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014DF20
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C00DF77C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000224C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006D08 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000C9A0 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001AA60 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0CB8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2C84 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F3A30 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0122484 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0124C54 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C014E21C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C0150058 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C024730C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        struct DXGADAPTER *a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  struct DXGADAPTER *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r14
  struct DXGDEVICE **v18; // r12
  int Device; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // r13
  unsigned int v28; // r8d
  DXGCONTEXT **v29; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v30; // ebx
  unsigned int v31; // r14d
  __int64 v32; // r9
  unsigned int v33; // r8d
  struct DXGCONTEXT **v34; // r10
  DXGDEVICE *v35; // r11
  char v36; // al
  int Context; // eax
  unsigned int v38; // edi
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v49; // eax
  SIZE_T v50; // rax
  unsigned __int64 v51; // kr00_8
  PVOID v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rax
  const GUID *v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  struct DXGHWQUEUE **v60; // r9
  int v61; // eax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  volatile signed __int64 *v64; // rax
  struct DXGHWQUEUE **v65; // rax
  struct DXGHWQUEUE *v66; // rcx
  DXGCONTEXT **v67; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *Current; // [rsp+58h] [rbp-A8h]
  _BYTE v71[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v72; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMT_CREATEHWQUEUE v73; // [rsp+B8h] [rbp-48h] BYREF
  int v74; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v75; // [rsp+ECh] [rbp-14h]
  unsigned int v76; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  char v78; // [rsp+128h] [rbp+28h]
  _BYTE v79[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v80[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v81[72]; // [rsp+178h] [rbp+78h] BYREF

  v78 = 0;
  v7 = (struct DXGADAPTER *)(*((_QWORD *)this + 2) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 2) + 2552LL) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, a2, v7);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18624LL));
  Current = DXGPROCESS::GetCurrent(v9, v8);
  if ( Current )
  {
    v13 = COREADAPTERACCESS::AcquireShared((__int64)v79, -1LL, 0LL);
    v17 = v13;
    if ( v13 >= 0 )
    {
      v18 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(*((_QWORD *)a2 + 320), (__int64 *)this + 7, 0, 2, v7, 0, 0, 0LL, 0LL);
      v17 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v79);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v71, *v18);
        v23 = COREADAPTERACCESS::AcquireShared((__int64)v79, 0xFFFFFFFFLL, 0LL);
        v17 = v23;
        if ( v23 >= 0 )
        {
          *((_DWORD *)this + 13) = 1;
          if ( DXGADAPTER::ReplicateGdiContent(a2) )
          {
            v49 = *((int *)a2 + 546) < 0x2000 ? 1 : *((_DWORD *)a2 + 64);
            *((_DWORD *)this + 13) = v49;
            if ( v49 > 1 )
            {
              v51 = v49;
              v50 = 8LL * v49;
              if ( !is_mul_ok(v51, 8uLL) )
                v50 = -1LL;
              v52 = operator new(v50, 0x4B677844u, 1, PagedPool);
              *((_QWORD *)this + 8) = v52;
              if ( !v52 )
              {
                v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v53);
                v54[3] = a2;
                v54[4] = Current;
                v54[5] = v17;
                WdLogEvent5_WdEvent(v54);
                LODWORD(v17) = -1073741801;
              }
            }
          }
          if ( (int)v17 < 0 )
            goto LABEL_24;
          if ( !PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((char *)this + 72, *((unsigned int *)this + 13)) )
          {
            v55 = WdLogNewEntry5_WdEvent(v25);
            *(_QWORD *)(v55 + 24) = a2;
            *(_QWORD *)(v55 + 32) = Current;
            WdLogEvent5_WdEvent(v55);
            LODWORD(v17) = -1073741801;
          }
          if ( (int)v17 < 0 || (v26 = *((_DWORD *)this + 13), v27 = 0LL, !v26) )
          {
LABEL_24:
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v71);
            if ( (int)v17 < 0 && *v18 )
            {
              ADAPTER_RENDER::DestroyDevice(*((DXGADAPTER ***)a2 + 320), *v18, 0LL);
              if ( *((_DWORD *)this + 13) > 1u )
              {
                operator delete[](*((void **)this + 8));
                *((_QWORD *)this + 8) = 0LL;
              }
              PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
              *v18 = 0LL;
            }
            else
            {
              if ( a3 )
              {
                *a3 = *v18;
                _InterlockedAdd64((volatile signed __int64 *)*v18 + 8, 1uLL);
              }
              if ( a4 )
              {
                v64 = (volatile signed __int64 *)*((_QWORD *)this + 8);
                if ( *((_DWORD *)this + 13) != 1 )
                  v64 = (volatile signed __int64 *)*v64;
                *a4 = (struct DXGCONTEXT *)v64;
                _InterlockedAdd64(v64 + 4, 1uLL);
              }
              if ( a5 )
              {
                v65 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
                v66 = *v65;
                *a5 = *v65;
                if ( v66 )
                  _InterlockedAdd64((volatile signed __int64 *)v66 + 9, 1uLL);
              }
            }
            goto LABEL_29;
          }
          while ( 1 )
          {
            v28 = *((_DWORD *)a2 + 644);
            v29 = (DXGCONTEXT **)((char *)this + 64);
            v30.0 = 0;
            v75 = v28;
            v74 = 0;
            if ( v26 == 1 )
              v31 = *((_DWORD *)a2 + 645);
            else
              v31 = v27;
            v76 = 1 << v31;
            if ( (*((_DWORD *)a2 + 77) & 0x10) != 0 )
            {
              memset(&v72, 0, sizeof(v72));
              v72.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              v72.pOutputData = &v74;
              v72.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo(a2, &v72, v56) < 0 )
              {
                v59 = WdLogNewEntry5_WdAssertion(v58, v57);
                *(_QWORD *)(v59 + 24) = 1998LL;
                WdLogEvent5_WdAssertion(v59);
              }
              v28 = v75;
              v29 = (DXGCONTEXT **)((char *)this + 64);
            }
            v32 = *(_QWORD *)(352LL * v31 + *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 320) + 16LL) + 2440LL) + 24);
            if ( v32 && (*(_BYTE *)(74LL * v28 + v32 + 68) & 1) != 0 )
              v30.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) != 1 )
              v29 = (DXGCONTEXT **)((char *)*v29 + 8 * v27);
            v67 = v29;
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v18 + 2), 0, v28)
              || (v36 = 1, *((_BYTE *)a2 + 2489)) )
            {
              v36 = 0;
            }
            Context = DXGDEVICE::CreateContext(v35, v34, v33, v76, v30, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v36);
            v17 = Context;
            if ( Context < 0 )
              break;
            if ( v30.Value >= 0x10 )
            {
              memset(&v73, 0, sizeof(v73));
              v60 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              if ( (unsigned int)v27 < *((_DWORD *)this + 24) )
                v60 += v27;
              v61 = DXGCONTEXT::CreateHwQueue(*v67, &v73, 0LL, v60);
              v17 = v61;
              if ( v61 < 0 )
              {
                v63 = (_QWORD *)WdLogNewEntry5_WdEvent(v62);
                v63[3] = *v67;
                v63[5] = Current;
                v63[4] = a2;
                v63[6] = v17;
                goto LABEL_59;
              }
            }
            v26 = *((_DWORD *)this + 13);
            v27 = (unsigned int)(v27 + 1);
            if ( (unsigned int)v27 >= v26 )
              goto LABEL_24;
          }
        }
        v63 = (_QWORD *)WdLogNewEntry5_WdEvent(v24);
        v63[4] = Current;
        v63[5] = v17;
        v63[3] = a2;
LABEL_59:
        WdLogEvent5_WdEvent(v63);
        goto LABEL_24;
      }
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
      v45[3] = a2;
      CurrentProcess = PsGetCurrentProcess(v47, v46);
      v45[5] = v17;
      v45[4] = CurrentProcess;
      WdLogEvent5_WdError(v45);
LABEL_29:
      v38 = v17;
      goto LABEL_30;
    }
    if ( a2 == v7 || (v15 = *((unsigned int *)a2 + 44), (_DWORD)v15 == 1) && !*((_BYTE *)a2 + 2465) )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
      v44[3] = a2;
      v44[4] = v7;
      v44[5] = Current;
      v44[6] = v17;
      WdLogEvent5_WdWarning(v44);
      goto LABEL_29;
    }
    v43 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v43 + 24) = a2;
    WdLogEvent5_WdWarning(v43);
    v38 = -1073741267;
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v11, v10, v12);
    v38 = -1073741823;
    *(_QWORD *)(v40 + 24) = PsGetCurrentProcess(v42, v41);
    *(_QWORD *)(v40 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v40);
  }
LABEL_30:
  COREACCESS::~COREACCESS((COREACCESS *)v81);
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  if ( v78 )
    KeUnstackDetachProcess(&ApcState);
  return v38;
}
