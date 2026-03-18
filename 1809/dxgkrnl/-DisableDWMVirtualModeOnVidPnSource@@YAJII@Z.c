/*
 * XREFs of ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C013EC74
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C011E180 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C0013120 (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C00D0F14 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C011DE84 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01372F4 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C013AFA0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C013EF58 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C0242B84 (DxgkNotifyDisplayChange.c)
 */

__int64 __fastcall DisableDWMVirtualModeOnVidPnSource(unsigned int a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // r9
  unsigned __int16 v12; // bx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int Active; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int8 v19; // r8
  unsigned int v20; // edi
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int16 v33[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v34; // [rsp+40h] [rbp-C8h] BYREF
  struct _LUID v35; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v36; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v38[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v39[64]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-40h]
  _BYTE v41[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v42[32]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v43[56]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v44[432]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v45[10]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = (struct DXGPROCESS *)Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v3, Current, &v36);
    v8 = (__int64)v36;
    if ( v36 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v36);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v38,
        (struct _KTHREAD **)(v8 + 112));
      v10 = *(_QWORD *)(v8 + 1728);
      if ( v10 )
      {
        MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
          (MANAGEDPRIMARIESTRACKER *)v44,
          *(struct ADAPTER_DISPLAY **)(v10 + 2520),
          v6);
        MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v44);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, v8, 1, v11, 0);
        LODWORD(v8) = COREDEVICEACCESS::AcquireExclusive((__int64)v41, 2LL);
        if ( (int)v8 >= 0 )
        {
          v35 = *(struct _LUID *)(v10 + 276);
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v41);
          v12 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v39, 8u, 0);
          for ( v33[0] = 8; ; v12 = v33[0] )
          {
            if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v39, v12, v13, v14) < v12 )
            {
              v32 = WdLogNewEntry5_WdLowResource(v15);
              *(_QWORD *)(v32 + 24) = v12;
              WdLogEvent5_WdLowResource(v32);
              LODWORD(v8) = -1073741801;
              goto LABEL_20;
            }
            Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v39, 0, 0, 0, v33);
            v8 = Active;
            if ( Active != -1073741789 )
              break;
          }
          if ( Active < 0 )
            goto LABEL_32;
          v18 = CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode((CCD_TOPOLOGY *)v39, &v35, a2);
          v8 = v18;
          if ( v18 < 0 )
            goto LABEL_32;
          v20 = 0;
          if ( DxgkGetGlobalRawmodeFlag(v17) )
            v20 = 0x20000;
          v21 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v39, v20, v19);
          v8 = v21;
          if ( v21 < 0
            || (memset(v45, 0, 0x48uLL),
                EtwActivityIdControl(3u, (LPGUID)&v45[1]),
                v45[8] = MEMORY[0xFFFFF78000000014],
                LODWORD(v45[3]) = 57,
                LOBYTE(v45[6]) = -1,
                v22 = CCD_TOPOLOGY::ApplyTopology(
                        (CCD_TOPOLOGY *)v39,
                        v20,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v45),
                v8 = v22,
                v22 < 0) )
          {
LABEL_32:
            v31 = WdLogNewEntry5_WdError(v17);
            *(_QWORD *)(v31 + 24) = v8;
            WdLogEvent5_WdError(v31);
          }
          else
          {
            v23 = *(_QWORD *)(v40 + 40);
            if ( v23 )
            {
              v24 = *(_DWORD *)(v40 + 36);
              v25 = 0;
              if ( v24 )
              {
                while ( 1 )
                {
                  v26 = 324LL * v25;
                  if ( *(_DWORD *)(v26 + v23 + 84) || *(_DWORD *)(v26 + v23 + 88) || *(_DWORD *)(v26 + v23 + 120) )
                    break;
                  if ( ++v25 >= v24 )
                    goto LABEL_20;
                }
                DxgkNotifyDisplayChange(0LL);
              }
            }
          }
LABEL_20:
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v39);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        COREACCESS::~COREACCESS((COREACCESS *)v42);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v44);
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v30 + 24) = v3;
        WdLogEvent5_WdError(v30);
        LODWORD(v8) = -1073741637;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
      if ( v37[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v29 + 24) = v3;
      WdLogEvent5_WdError(v29);
      LODWORD(v8) = -1073741811;
    }
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    }
    return (unsigned int)v8;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v28 + 24) = 3266LL;
    WdLogEvent5_WdError(v28);
    return 3221225485LL;
  }
}
