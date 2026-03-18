/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0154990
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C00CB800 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0001E54 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00027B0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C00CC2AC (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CE7A8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D0C6C (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00D1CE8 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D81F0 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DAE0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DAE84 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C014F5B0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C0154C84 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C0278734 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGPROCESS *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int16 v19; // bx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int Active; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // edi
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // r9d
  unsigned int v34; // edx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int16 v43[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v44; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v45; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v46; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v47[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v48[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v49[64]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-40h]
  _BYTE v51[432]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v52[10]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v53[8]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v54[64]; // [rsp+2F0h] [rbp+1E8h] BYREF
  _BYTE v55[88]; // [rsp+330h] [rbp+228h] BYREF

  v2 = a2;
  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v8 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v3, Current, &v46);
    v12 = (__int64)v46;
    if ( v46 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v46);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v48,
        (struct _KTHREAD **)(v12 + 112));
      v16 = *(_QWORD *)(v12 + 1728);
      if ( v16 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v51,
          *(struct ADAPTER_DISPLAY **)(v16 + 2552),
          v8);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v51, v17);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, v12, 1, v18, 0);
        LODWORD(v12) = COREDEVICEACCESS::AcquireExclusive((__int64)v53, 2LL);
        if ( (int)v12 >= 0 )
        {
          v45 = *(struct _LUID *)(v16 + 276);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v53);
          v19 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v49, 8u, 0);
          for ( v43[0] = 8; ; v19 = v43[0] )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v49, v19) < v19 )
            {
              v42 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
              *(_QWORD *)(v42 + 24) = v19;
              WdLogEvent5_WdLowResource(v42);
              LODWORD(v12) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v49, 0, 0, 0, v43);
            v12 = Active;
            if ( Active != -1073741789 )
              break;
          }
          if ( Active < 0 )
            goto LABEL_32;
          v28 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v49, &v45, v2);
          v12 = v28;
          if ( v28 < 0 )
            goto LABEL_32;
          v29 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v26, v25) )
            v29 = 0x20000;
          v30 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v49, v29, 0);
          v12 = v30;
          if ( v30 < 0
            || (memset(v52, 0, 0x48uLL),
                EtwActivityIdControl(3u, (LPGUID)&v52[1]),
                v52[8] = MEMORY[0xFFFFF78000000014],
                LODWORD(v52[3]) = 57,
                LOBYTE(v52[6]) = -1,
                v31 = CCD_TOPOLOGY::ApplyTopology(
                        (CCD_TOPOLOGY *)v49,
                        v29,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v52),
                v12 = v31,
                v31 < 0) )
          {
LABEL_32:
            v41 = WdLogNewEntry5_WdError(v26, v25, v27);
            *(_QWORD *)(v41 + 24) = v12;
            WdLogEvent5_WdError(v41);
          }
          else
          {
            v32 = *(_QWORD *)(v50 + 40);
            if ( v32 )
            {
              v33 = *(_DWORD *)(v50 + 36);
              v34 = 0;
              if ( v33 )
              {
                while ( 1 )
                {
                  v35 = 332LL * v34;
                  if ( *(_DWORD *)(v35 + v32 + 88) || *(_DWORD *)(v35 + v32 + 92) || *(_DWORD *)(v35 + v32 + 124) )
                    break;
                  if ( ++v34 >= v33 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange(0LL);
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v49);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v55);
        COREACCESS::~COREACCESS((COREACCESS *)v54);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v51, v36);
      }
      else
      {
        v40 = WdLogNewEntry5_WdError(v14, v13, v15);
        *(_QWORD *)(v40 + 24) = v3;
        WdLogEvent5_WdError(v40);
        LODWORD(v12) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
      if ( v47[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v39 + 24) = v3;
      WdLogEvent5_WdError(v39);
      LODWORD(v12) = -1073741811;
    }
    if ( v44 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
    }
    return (unsigned int)v12;
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v38 + 24) = 3288LL;
    WdLogEvent5_WdError(v38);
    return 3221225485LL;
  }
}
