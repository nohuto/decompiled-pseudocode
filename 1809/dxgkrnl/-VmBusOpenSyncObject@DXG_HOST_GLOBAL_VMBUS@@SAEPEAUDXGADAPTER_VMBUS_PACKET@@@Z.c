/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F14A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003656C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0235450 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct _KTHREAD ***a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *v4; // rbx
  unsigned int v5; // edx
  __int64 v6; // rcx
  struct ADAPTER_RENDER **v7; // r15
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  PERESOURCE *v11; // rax
  struct _KTHREAD **v12; // rdi
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E Value; // esi
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rdi
  struct _KTHREAD **v18; // r13
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v19; // esi
  __int64 v20; // rax
  struct _KTHREAD *v21; // rdx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  DXGSYNCOBJECT *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  struct DXGPROCESS *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  PERESOURCE *Global; // rax
  __int64 v39; // rcx
  DXGGLOBAL *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  struct DXGDEVICE *v52; // [rsp+60h] [rbp-A0h] BYREF
  void *v53; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v54[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v55[16]; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTERSYNCOBJECT *v56; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v57[16]; // [rsp+98h] [rbp-68h] BYREF
  struct DXGDEVICE *v58; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD ***v59; // [rsp+B0h] [rbp-50h]
  struct DXGADAPTERSYNCOBJECT *v60; // [rsp+B8h] [rbp-48h] BYREF
  struct DXGSYNCOBJECT *v61; // [rsp+C0h] [rbp-40h] BYREF
  char v62[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v63[32]; // [rsp+D8h] [rbp-28h] BYREF
  char v64[56]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v65[2]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v66; // [rsp+138h] [rbp+38h] BYREF
  void *v67; // [rsp+140h] [rbp+40h]

  v59 = a1;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v4 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    *(_QWORD *)v65 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    v5 = *(_DWORD *)(v2 + 24);
    if ( !v5 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v3);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57);
      v40 = DXGGLOBAL::GetGlobal(v39);
      v65[1] = DXGGLOBAL::OpenSyncObject(v40, v4[7].Value, &v61, v65, &v60);
      if ( (v65[1] & 0x80000000) == 0 )
      {
        v43 = v65[0];
        Current = DXGPROCESS::GetCurrent();
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v45 = ((unsigned int)v43 >> 6) & 0xFFFFFF;
        if ( v45 < *((_DWORD *)Current + 62) )
        {
          v46 = *((_QWORD *)Current + 29);
          v47 = v45;
          v48 = ((unsigned int)v43 >> 25) & 0x60;
          if ( (((unsigned int)v43 >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v47 + 8) & 0x60)
            && (*(_DWORD *)(v46 + 16 * v47 + 8) & 0x1F) != 0 )
          {
            v49 = 2 * ((v43 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v46 + 8 * v49 + 8) & 0x2000) == 0 )
            {
              v50 = WdLogNewEntry5_WdAssertion(v48);
              *(_QWORD *)(v50 + 24) = 222LL;
              WdLogEvent5_WdAssertion(v50);
              v46 = *((_QWORD *)Current + 29);
            }
            *(_DWORD *)(v46 + 8 * v49 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v42 = WdLogNewEntry5_WdError(v41);
        *(_QWORD *)(v42 + 24) = v4[7].Value;
        *(_QWORD *)(v42 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v42);
      }
      if ( v57[8] )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
      goto LABEL_52;
    }
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v52, v5, a1[6], &v58);
    v7 = (struct ADAPTER_RENDER **)v58;
    if ( !v58 )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = v4[6].Value;
      *(_QWORD *)(v8 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v8);
      v65[1] = -1073741811;
LABEL_5:
      if ( v52 && _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v52 + 2), v52);
LABEL_52:
      VmBusCompletePacket((struct VMBPACKETCOMPLETION__ *)v59[9], v65, 0x18u);
      LOBYTE(v2) = 1;
      return v2;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v58);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v7, 0, v9, 0);
    v65[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62);
    if ( (v65[1] & 0x80000000) != 0 )
    {
LABEL_9:
      COREACCESS::~COREACCESS((COREACCESS *)v64);
      COREACCESS::~COREACCESS((COREACCESS *)v63);
      if ( v54[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
      goto LABEL_5;
    }
    v11 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v55, v11);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v55);
    v12 = a1[7];
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v4[7].Value;
    v56 = (struct DXGADAPTERSYNCOBJECT *)v12;
    v53 = v12 + 26;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 26));
    v14 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)v12 + 62)
      && (v15 = *((_QWORD *)v56 + 29),
          v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
          ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60))
      && (v16 & 0x2000) == 0
      && (v16 & 0x1F) == 0xB )
    {
      v17 = *(_QWORD *)(v15 + 16LL * v14);
    }
    else
    {
      v17 = 0LL;
    }
    ExReleasePushLockSharedEx(v53, 0LL);
    KeLeaveCriticalRegion();
    if ( v17 )
    {
      v25 = *(DXGSYNCOBJECT **)(v17 + 32);
      goto LABEL_32;
    }
    v18 = a1[7];
    v19 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v4[7].Value;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 26));
    v20 = (*(unsigned int *)&v19 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *((_DWORD *)v18 + 62) )
    {
      v21 = v18[29];
      v22 = *((_DWORD *)v21 + 4 * v20 + 2);
      if ( ((*(unsigned int *)&v19 >> 25) & 0x60) == (*((_BYTE *)v21 + 16 * v20 + 8) & 0x60)
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) != 0 )
      {
        v23 = v22 & 0x1F;
        if ( (_BYTE)v23 == 8 )
        {
          v25 = (DXGSYNCOBJECT *)*((_QWORD *)v21 + 2 * (unsigned int)v20);
LABEL_25:
          ExReleasePushLockSharedEx(v18 + 26, 0LL);
          KeLeaveCriticalRegion();
          if ( !v25 )
          {
            v27 = WdLogNewEntry5_WdError(v26);
            *(_QWORD *)(v27 + 24) = v4[7].Value;
            *(_QWORD *)(v27 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v27);
            v65[1] = -1073741811;
LABEL_27:
            if ( v55[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v55);
            goto LABEL_9;
          }
LABEL_32:
          v65[1] = DXGSYNCOBJECT::Open(
                     v25,
                     v7[2],
                     (struct DXGDEVICE *)v7,
                     0LL,
                     v65,
                     &v53,
                     &v66,
                     v4[8].Value,
                     &v56,
                     1,
                     v4[9]);
          if ( (v65[1] & 0x80000000) == 0 )
          {
            v30 = v65[0];
            v67 = v53;
            v31 = DXGPROCESS::GetCurrent();
            DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v31 + 208));
            v32 = ((unsigned int)v30 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v32 < *((_DWORD *)v31 + 62) )
            {
              v33 = *((_QWORD *)v31 + 29);
              v34 = *(_DWORD *)(v33 + 16 * v32 + 8);
              v35 = ((unsigned int)v30 >> 25) & 0x60;
              if ( (((unsigned int)v30 >> 25) & 0x60) == (v34 & 0x60) && (v34 & 0x1F) != 0 )
              {
                v36 = 2 * ((v30 >> 6) & 0xFFFFFF);
                if ( (*(_DWORD *)(v33 + 8 * v36 + 8) & 0x2000) == 0 )
                {
                  v37 = WdLogNewEntry5_WdAssertion(v35);
                  *(_QWORD *)(v37 + 24) = 222LL;
                  WdLogEvent5_WdAssertion(v37);
                  v33 = *((_QWORD *)v31 + 29);
                }
                *(_DWORD *)(v33 + 8 * v36 + 8) &= ~0x2000u;
              }
            }
            *((_QWORD *)v31 + 27) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v31 + 208, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            v29 = WdLogNewEntry5_WdError(v28);
            *(_QWORD *)(v29 + 24) = v4[7].Value;
            *(_QWORD *)(v29 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v29);
          }
          goto LABEL_27;
        }
        v24 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v24 + 24) = 316LL;
        WdLogEvent5_WdError(v24);
      }
    }
    v25 = 0LL;
    goto LABEL_25;
  }
  return v2;
}
