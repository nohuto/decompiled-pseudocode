/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221140
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003C954 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D36C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F62B0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C014F588 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct _KTHREAD ***a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct ADAPTER_RENDER **v9; // r14
  __int64 v10; // rax
  struct DXGDEVICE *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  PERESOURCE *v15; // rax
  struct _KTHREAD **v16; // rsi
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E Value; // r13d
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rsi
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v22; // r14d
  struct _KTHREAD **v23; // r13
  __int64 v24; // r8
  __int64 v25; // rax
  struct _KTHREAD *v26; // rdx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  DXGSYNCOBJECT *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  struct DXGPROCESS *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rax
  PERESOURCE *Global; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned __int64 v55; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  struct DXGDEVICE *v64; // [rsp+68h] [rbp-A0h] BYREF
  void *v65; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v66[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v67[16]; // [rsp+88h] [rbp-80h] BYREF
  struct DXGDEVICE *v68; // [rsp+98h] [rbp-70h] BYREF
  struct _KTHREAD ***v69; // [rsp+A0h] [rbp-68h]
  struct DXGADAPTERSYNCOBJECT *v70; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v71[16]; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGADAPTERSYNCOBJECT *v72; // [rsp+C0h] [rbp-48h] BYREF
  struct DXGSYNCOBJECT *v73; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v74[2]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v75; // [rsp+D8h] [rbp-30h] BYREF
  void *v76; // [rsp+E0h] [rbp-28h]
  char v77[8]; // [rsp+E8h] [rbp-20h] BYREF
  char v78[64]; // [rsp+F0h] [rbp-18h] BYREF
  char v79[88]; // [rsp+130h] [rbp+28h] BYREF

  v69 = a1;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v4 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    *(_QWORD *)v74 = 0LL;
    v75 = 0LL;
    v76 = 0LL;
    v5 = *(unsigned int *)(v2 + 24);
    if ( !(_DWORD)v5 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v3, v5);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v71, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v71);
      v50 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v49, v48);
      v74[1] = DXGGLOBAL::OpenSyncObject(v50, v4[7].Value, &v73, v74, &v72);
      if ( (v74[1] & 0x80000000) == 0 )
      {
        v55 = v74[0];
        Current = DXGPROCESS::GetCurrent(v52, v51);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
        v57 = ((unsigned int)v55 >> 6) & 0xFFFFFF;
        if ( v57 < *((_DWORD *)Current + 56) )
        {
          v58 = *((_QWORD *)Current + 26);
          v59 = v57;
          v60 = ((unsigned int)v55 >> 25) & 0x60;
          if ( (((unsigned int)v55 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v59 + 8) & 0x60)
            && (*(_DWORD *)(v58 + 16 * v59 + 8) & 0x1F) != 0 )
          {
            v61 = 2 * ((v55 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v58 + 8 * v61 + 8) & 0x2000) == 0 )
            {
              v62 = WdLogNewEntry5_WdAssertion(v60, v58);
              *(_QWORD *)(v62 + 24) = 217LL;
              WdLogEvent5_WdAssertion(v62);
              v58 = *((_QWORD *)Current + 26);
            }
            *(_DWORD *)(v58 + 8 * v61 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 24) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 184, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v54 = WdLogNewEntry5_WdError(v52, v51, v53);
        *(_QWORD *)(v54 + 24) = v4[7].Value;
        *(_QWORD *)(v54 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v54);
      }
      if ( v71[8] )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v71);
      goto LABEL_54;
    }
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v64, v5, a1[6], &v68);
    v9 = (struct ADAPTER_RENDER **)v68;
    if ( !v68 )
    {
      v10 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v10 + 24) = v4[6].Value;
      *(_QWORD *)(v10 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v10);
      v11 = v64;
      v74[1] = -1073741811;
      if ( !v64 )
      {
LABEL_54:
        VmBusCompletePacket((struct VMBPACKETCOMPLETION__ *)v69[9], v74, 0x18u);
        LOBYTE(v2) = 1;
        return v2;
      }
LABEL_5:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
      goto LABEL_54;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66, v68);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, (__int64)v9, 0, v12, 0);
    v74[1] = COREDEVICEACCESS::AcquireShared((__int64)v77, 0xFFFFFFFF, 0LL);
    if ( (v74[1] & 0x80000000) != 0 )
    {
LABEL_8:
      COREACCESS::~COREACCESS((COREACCESS *)v79);
      COREACCESS::~COREACCESS((COREACCESS *)v78);
      if ( v66[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66);
      v11 = v64;
      if ( !v64 )
        goto LABEL_54;
      goto LABEL_5;
    }
    v15 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14, v13);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v67, v15);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v67);
    v16 = a1[7];
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v4[7].Value;
    v70 = (struct DXGADAPTERSYNCOBJECT *)v16;
    v65 = v16 + 23;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 23));
    v18 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
    if ( v18 < *((_DWORD *)v16 + 56)
      && (v19 = *((_QWORD *)v70 + 26),
          v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
          ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60))
      && (v20 & 0x2000) == 0
      && (v20 & 0x1F) == 0xB )
    {
      v21 = *(_QWORD *)(v19 + 16LL * v18);
    }
    else
    {
      v21 = 0LL;
    }
    ExReleasePushLockSharedEx(v65, 0LL);
    KeLeaveCriticalRegion();
    if ( v21 )
    {
      v30 = *(DXGSYNCOBJECT **)(v21 + 32);
      goto LABEL_34;
    }
    v22 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v4[7].Value;
    v23 = v69[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 23));
    v25 = (*(unsigned int *)&v22 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v25 < *((_DWORD *)v23 + 56) )
    {
      v26 = v23[26];
      v27 = *((_DWORD *)v26 + 4 * v25 + 2);
      if ( ((*(unsigned int *)&v22 >> 25) & 0x60) == (*((_BYTE *)v26 + 16 * v25 + 8) & 0x60)
        && (v27 & 0x2000) == 0
        && (v27 & 0x1F) != 0 )
      {
        v28 = v27 & 0x1F;
        if ( (_BYTE)v28 == 8 )
        {
          v30 = (DXGSYNCOBJECT *)*((_QWORD *)v26 + 2 * (unsigned int)v25);
          goto LABEL_26;
        }
        v29 = WdLogNewEntry5_WdError(v28, v26, v24);
        *(_QWORD *)(v29 + 24) = 267LL;
        WdLogEvent5_WdError(v29);
      }
    }
    v30 = 0LL;
LABEL_26:
    ExReleasePushLockSharedEx(v23 + 23, 0LL);
    KeLeaveCriticalRegion();
    if ( !v30 )
    {
      v34 = WdLogNewEntry5_WdError(v32, v31, v33);
      *(_QWORD *)(v34 + 24) = v4[7].Value;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v34);
      v74[1] = -1073741811;
LABEL_28:
      if ( v67[8] )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v67);
      goto LABEL_8;
    }
    v9 = (struct ADAPTER_RENDER **)v68;
LABEL_34:
    v74[1] = DXGSYNCOBJECT::Open(v30, v9[2], (struct DXGDEVICE *)v9, 0LL, v74, &v65, &v75, v4[8].Value, &v70, 1, v4[9]);
    if ( (v74[1] & 0x80000000) == 0 )
    {
      v39 = v74[0];
      v76 = v65;
      v40 = DXGPROCESS::GetCurrent(v36, v35);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v40 + 184));
      v41 = ((unsigned int)v39 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v41 < *((_DWORD *)v40 + 56) )
      {
        v42 = *((_QWORD *)v40 + 26);
        v43 = *(_DWORD *)(v42 + 16 * v41 + 8);
        v44 = ((unsigned int)v39 >> 25) & 0x60;
        if ( (((unsigned int)v39 >> 25) & 0x60) == (v43 & 0x60) && (v43 & 0x1F) != 0 )
        {
          v45 = 2 * ((v39 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v42 + 8 * v45 + 8) & 0x2000) == 0 )
          {
            v46 = WdLogNewEntry5_WdAssertion(v44, v42);
            *(_QWORD *)(v46 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v46);
            v42 = *((_QWORD *)v40 + 26);
          }
          *(_DWORD *)(v42 + 8 * v45 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)v40 + 24) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v40 + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v38 = WdLogNewEntry5_WdError(v36, v35, v37);
      *(_QWORD *)(v38 + 24) = v4[7].Value;
      *(_QWORD *)(v38 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v38);
    }
    goto LABEL_28;
  }
  return v2;
}
