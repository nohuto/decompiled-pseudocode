/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01399A0
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C00CEE64 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00105B4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6218 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E7F78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE190 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F8C28 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C0139C90 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C013BA00 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C0213168 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        DXGADAPTER ***a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  struct DXGHWQUEUE **v5; // r13
  struct DXGADAPTER *v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  struct DXGDEVICE **v14; // r15
  int Device; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // r12
  unsigned int v24; // r8d
  struct DXGCONTEXT **v25; // r9
  struct _D3DDDI_CREATECONTEXTFLAGS v26; // r13d
  unsigned int v27; // edi
  __int64 v28; // rdx
  struct DXGCONTEXT **v29; // r14
  unsigned int v30; // r8d
  DXGDEVICE *v31; // r10
  char v32; // al
  int Context; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // eax
  SIZE_T v44; // rax
  unsigned __int64 v45; // kr00_8
  PVOID v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  const GUID *v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  struct DXGHWQUEUE **v54; // r9
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  volatile signed __int64 *v60; // rax
  struct DXGHWQUEUE **v61; // rax
  struct DXGHWQUEUE *v62; // rcx
  struct DXGPROCESS *Current; // [rsp+60h] [rbp-A0h]
  _BYTE v66[16]; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v67; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v68[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v69[32]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v70[40]; // [rsp+E8h] [rbp-18h] BYREF
  _D3DKMT_CREATEHWQUEUE v71; // [rsp+110h] [rbp+10h] BYREF
  int v72; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v73; // [rsp+144h] [rbp+44h]
  unsigned int v74; // [rsp+148h] [rbp+48h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  char v76; // [rsp+180h] [rbp+80h]

  v5 = a5;
  v76 = 0;
  v8 = (struct DXGADAPTER *)(*((_QWORD *)this + 2) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 2) + 2520LL) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, (struct DXGADAPTER *const)a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18624LL));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    LODWORD(v13) = -1073741823;
    v37[3] = PsGetCurrentProcess(v39, v38);
    v37[4] = -1073741823LL;
LABEL_36:
    WdLogEvent5_WdError(v37);
    goto LABEL_30;
  }
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68);
  v13 = v10;
  if ( v10 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, 0LL, v12);
    v40[3] = a2;
    v40[4] = v8;
    v40[5] = Current;
    v40[6] = v13;
    WdLogEvent5_WdWarning(v40);
    goto LABEL_30;
  }
  v14 = (struct DXGDEVICE **)((char *)this + 56);
  Device = ADAPTER_RENDER::CreateDevice(a2[316], (__int64 *)this + 7, 0, 2, v8, 0, 0, 0LL, 0LL);
  v13 = Device;
  if ( Device < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v37[3] = a2;
    v37[4] = PsGetCurrentProcess(v42, v41);
    v37[5] = v13;
    goto LABEL_36;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v68);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v66, *v14);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68);
  v13 = v17;
  if ( v17 < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18);
    v59[3] = a2;
    v59[4] = Current;
    v59[5] = v13;
    WdLogEvent5_WdEvent(v59);
  }
  else
  {
    *((_DWORD *)this + 13) = 1;
    if ( DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)a2) )
    {
      v43 = *((int *)a2 + 540) < 0x2000 ? 1 : *((_DWORD *)a2 + 64);
      *((_DWORD *)this + 13) = v43;
      if ( v43 > 1 )
      {
        v45 = v43;
        v44 = 8LL * v43;
        if ( !is_mul_ok(v45, 8uLL) )
          v44 = -1LL;
        v46 = operator new(v44, 0x4B677844u, 1, PagedPool);
        *((_QWORD *)this + 8) = v46;
        if ( !v46 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdEvent(v48, v47);
          v49[3] = a2;
          v49[4] = Current;
          v49[5] = v13;
          WdLogEvent5_WdEvent(v49);
          LODWORD(v13) = -1073741801;
        }
      }
    }
    if ( (int)v13 >= 0 )
    {
      if ( !PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((char *)this + 72, *((unsigned int *)this + 13)) )
      {
        v50 = WdLogNewEntry5_WdEvent(v21, v20);
        *(_QWORD *)(v50 + 24) = a2;
        *(_QWORD *)(v50 + 32) = Current;
        WdLogEvent5_WdEvent(v50);
        LODWORD(v13) = -1073741801;
      }
      if ( (int)v13 >= 0 )
      {
        v22 = *((_DWORD *)this + 13);
        v23 = 0LL;
        if ( v22 )
        {
          while ( 1 )
          {
            v24 = *((_DWORD *)a2 + 636);
            v25 = (struct DXGCONTEXT **)((char *)this + 64);
            v26.0 = 0;
            v72 = 0;
            v73 = v24;
            v74 = 0;
            if ( v22 == 1 )
              v27 = *((_DWORD *)a2 + 637);
            else
              v27 = v23;
            v74 = 1 << v27;
            if ( (*((_DWORD *)a2 + 77) & 0x10) != 0 )
            {
              memset(&v67, 0, sizeof(v67));
              v67.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              v67.pOutputData = &v72;
              v67.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v67, v51) < 0 )
              {
                v53 = WdLogNewEntry5_WdAssertion(v52);
                *(_QWORD *)(v53 + 24) = 1962LL;
                WdLogEvent5_WdAssertion(v53);
              }
              v24 = v73;
              v25 = (struct DXGCONTEXT **)((char *)this + 64);
            }
            v28 = *(_QWORD *)(*((_QWORD *)a2[316][2] + 302) + 352LL * v27 + 24);
            if ( v28 && (*(_BYTE *)(74LL * v24 + v28 + 68) & 1) != 0 )
              v26.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) == 1 )
              v29 = v25;
            else
              v29 = (struct DXGCONTEXT **)((char *)*v25 + 8 * v23);
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v14 + 2), 0, v24)
              || (v32 = 1, *((_BYTE *)a2 + 2457)) )
            {
              v32 = 0;
            }
            Context = DXGDEVICE::CreateContext(v31, v29, v30, v74, v26, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v32);
            v13 = Context;
            if ( Context < 0 )
              break;
            if ( (*(_BYTE *)&v26.0 & 0x10) != 0 )
            {
              memset(&v71, 0, sizeof(v71));
              v54 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              if ( (unsigned int)v23 < *((_DWORD *)this + 24) )
                v54 += v23;
              v55 = DXGCONTEXT::CreateHwQueue(*v29, &v71, 0LL, v54);
              v13 = v55;
              if ( v55 < 0 )
              {
                v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v57, v56);
                v58[3] = *v29;
                v58[5] = Current;
                v58[4] = a2;
                v58[6] = v13;
                goto LABEL_57;
              }
            }
            v22 = *((_DWORD *)this + 13);
            v23 = (unsigned int)(v23 + 1);
            if ( (unsigned int)v23 >= v22 )
              goto LABEL_24;
          }
          v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v35, v34);
          v58[3] = a2;
          v58[4] = Current;
          v58[5] = v13;
LABEL_57:
          WdLogEvent5_WdEvent(v58);
LABEL_24:
          v5 = a5;
        }
      }
    }
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v66);
  if ( (int)v13 < 0 && *v14 )
  {
    ADAPTER_RENDER::DestroyDevice(a2[316], *v14, 0LL);
    if ( *((_DWORD *)this + 13) > 1u )
    {
      operator delete[](*((void **)this + 8));
      *((_QWORD *)this + 8) = 0LL;
    }
    PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
    *v14 = 0LL;
  }
  else
  {
    if ( a3 )
    {
      *a3 = *v14;
      _InterlockedIncrement64((volatile signed __int64 *)*v14 + 8);
    }
    if ( a4 )
    {
      v60 = (volatile signed __int64 *)*((_QWORD *)this + 8);
      if ( *((_DWORD *)this + 13) != 1 )
        v60 = (volatile signed __int64 *)*v60;
      *a4 = (struct DXGCONTEXT *)v60;
      _InterlockedIncrement64(v60 + 4);
    }
    if ( v5 )
    {
      v61 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
      v62 = *v61;
      *v5 = *v61;
      if ( v62 )
        _InterlockedIncrement64((volatile signed __int64 *)v62 + 9);
    }
  }
LABEL_30:
  COREACCESS::~COREACCESS((COREACCESS *)v70);
  COREACCESS::~COREACCESS((COREACCESS *)v69);
  if ( v76 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v13;
}
