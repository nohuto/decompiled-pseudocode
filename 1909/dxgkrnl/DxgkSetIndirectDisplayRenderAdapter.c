/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205974
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C02AC3D8 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c___ @ 0x1C000171C (DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c___.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00038C0 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C001E044 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0032678 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0034778 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERDEVICECREATIONLOCK@@QEAA@XZ @ 0x1C0036E9C (--1DXGADAPTERDEVICECREATIONLOCK@@QEAA@XZ.c)
 *     ??1DXGADAPTERDEVICECREATIONLOCKCDD@@QEAA@XZ @ 0x1C0036ED4 (--1DXGADAPTERDEVICECREATIONLOCKCDD@@QEAA@XZ.c)
 *     _DXGKCALLONEXIT__lambda_10496a3648ceea7cb187be63008938e6____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C003AD24 (_DXGKCALLONEXIT__lambda_10496a3648ceea7cb187be63008938e6____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C00C2008 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C01EC564 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01F527C (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapter(unsigned int a1, struct _LUID *a2)
{
  __int64 v2; // rdi
  struct _LUID *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  DXGADAPTER *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int v12; // ebx
  DXGADAPTER *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rbx
  DXGADAPTER *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  DXGADAPTER *v28; // rbx
  DXGADAPTER *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  DXGADAPTER *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v37; // rcx
  __int64 v38; // rax
  DXGADAPTER *v40[2]; // [rsp+20h] [rbp-A9h] BYREF
  DXGADAPTER *v41[2]; // [rsp+30h] [rbp-99h] BYREF
  DXGADAPTER *v42[2]; // [rsp+40h] [rbp-89h] BYREF
  __int128 v43; // [rsp+50h] [rbp-79h] BYREF
  __int128 v44; // [rsp+60h] [rbp-69h]
  unsigned __int64 v45; // [rsp+70h] [rbp-59h] BYREF
  __int64 v46; // [rsp+78h] [rbp-51h] BYREF
  __int64 v47; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v48[8]; // [rsp+88h] [rbp-41h] BYREF
  DXGADAPTER *v49; // [rsp+90h] [rbp-39h]
  char v50; // [rsp+98h] [rbp-31h]
  _BYTE v51[16]; // [rsp+A0h] [rbp-29h] BYREF
  _OWORD v52[2]; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE v53[80]; // [rsp+D0h] [rbp+7h] BYREF
  int IndirectDisplayPairedAdapter; // [rsp+138h] [rbp+6Fh] BYREF
  __int64 v55; // [rsp+140h] [rbp+77h] BYREF
  unsigned __int64 v56; // [rsp+148h] [rbp+7Fh] BYREF

  *(_QWORD *)&v43 = a2;
  v2 = a1;
  *((_QWORD *)&v43 + 1) = &IndirectDisplayPairedAdapter;
  IndirectDisplayPairedAdapter = 0;
  *(_QWORD *)&v44 = &v55;
  v55 = 0LL;
  *((_QWORD *)&v44 + 1) = &v56;
  v56 = 0LL;
  v52[0] = v43;
  v52[1] = v44;
  DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c_((__int64)v53, v52);
  v42[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v42, (unsigned int)v2);
  v7 = v42[0];
  if ( v42[0] )
  {
    v55 = *(_QWORD *)((char *)v42[0] + 276);
    DXGADAPTER::IsAddapterSessionized(v42[0], v4, 0LL, &v45);
    v56 = v45;
    if ( (*((_DWORD *)v7 + 77) & 0x100) == 0 )
    {
      v11 = WdLogNewEntry5_WdError(v45, v9, v10);
      *(_QWORD *)(v11 + 24) = v7;
      *(_QWORD *)(v11 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v11);
      goto LABEL_5;
    }
    v13 = 0LL;
    v40[0] = 0LL;
    if ( a2->HighPart || a2->LowPart )
    {
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v40, a2);
      v13 = v40[0];
      if ( !v40[0] )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
        v17[3] = a2->HighPart;
        v17[4] = a2->LowPart;
        v17[5] = -1073741811LL;
        WdLogEvent5_WdError(v17);
        v12 = -1073741584;
        IndirectDisplayPairedAdapter = -1073741584;
LABEL_38:
        DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v40);
        goto LABEL_39;
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v51, (struct DXGFASTMUTEX *const)(*((_QWORD *)v7 + 319) + 136LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
    v41[0] = 0LL;
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter((struct DXGADAPTER ***)v7, 0, v41);
    if ( IndirectDisplayPairedAdapter < 0 )
    {
      v19 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v19 + 24) = v7;
      WdLogEvent5_WdEvent(v19);
    }
    if ( v41[0] == v13 )
    {
      v20 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v20 + 24) = a2->HighPart;
      *(_QWORD *)(v20 + 32) = a2->LowPart;
      WdLogEvent5_WdEvent(v20);
      IndirectDisplayPairedAdapter = 0;
      v12 = 0;
LABEL_37:
      DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v41);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
      goto LABEL_38;
    }
    if ( v41[0] )
      v21 = *((_QWORD *)v41[0] + 320);
    else
      v21 = *((_QWORD *)v13 + 320);
    v47 = v21;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v21 + 24, 0LL);
    *(_QWORD *)(v21 + 32) = KeGetCurrentThread();
    if ( v41[0] )
      v22 = *((_QWORD *)v41[0] + 320);
    else
      v22 = *((_QWORD *)v40[0] + 320);
    v46 = v22;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v22 + 40, 0LL);
    *(_QWORD *)(v22 + 48) = KeGetCurrentThread();
    v23 = v40[0];
    if ( !v40[0] )
      goto LABEL_26;
    v49 = v40[0];
    v50 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    if ( !*((_QWORD *)v23 + 320) || DXGADAPTER::IsComputeOnlyAdapter(v23) )
    {
      v36 = WdLogNewEntry5_WdError(v25, v24, v26);
      *(_QWORD *)(v36 + 24) = v23;
      v12 = -1073741584;
      *(_QWORD *)(v36 + 32) = -1073741584LL;
      WdLogEvent5_WdError(v36);
    }
    else
    {
      v27 = *((_DWORD *)v23 + 44);
      v28 = v40[0];
      if ( v27 == 1 && !*((_BYTE *)v40[0] + 2465) )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
LABEL_26:
        v29 = v42[0];
        *((DXGADAPTER **)&v43 + 1) = v42[0];
        LOBYTE(v44) = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v43);
        v33 = *((_DWORD *)v29 + 44);
        v34 = v42[0];
        if ( v33 == 1 && !*((_BYTE *)v42[0] + 2465) )
        {
          if ( v41[0] )
            ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v41[0] + 320), (PDEVICE_OBJECT *)v42[0]);
          ADAPTER_DISPLAY::SetPairedRenderAdapter(*((DXGADAPTER ***)v7 + 319), v40[0]);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v43);
          IndirectDisplayPairedAdapter = 0;
          v12 = 0;
          goto LABEL_36;
        }
        v38 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v38 + 24) = v34;
        v12 = -1073741130;
        *(_QWORD *)(v38 + 32) = -1073741130LL;
        WdLogEvent5_WdWarning(v38);
        v37 = (DXGADAPTERSTOPRESETLOCKSHARED *)&v43;
LABEL_35:
        IndirectDisplayPairedAdapter = v12;
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v37);
LABEL_36:
        DXGADAPTERDEVICECREATIONLOCKCDD::~DXGADAPTERDEVICECREATIONLOCKCDD((DXGADAPTERDEVICECREATIONLOCKCDD *)&v46);
        DXGADAPTERDEVICECREATIONLOCK::~DXGADAPTERDEVICECREATIONLOCK((DXGADAPTERDEVICECREATIONLOCK *)&v47);
        goto LABEL_37;
      }
      v35 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v35 + 24) = v28;
      v12 = -1073741130;
      *(_QWORD *)(v35 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v35);
    }
    v37 = (DXGADAPTERSTOPRESETLOCKSHARED *)v48;
    goto LABEL_35;
  }
  v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
  *(_QWORD *)(v8 + 24) = v2;
  *(_QWORD *)(v8 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v8);
LABEL_5:
  v12 = -1073741585;
  IndirectDisplayPairedAdapter = -1073741585;
LABEL_39:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v42);
  DXGKCALLONEXIT__lambda_10496a3648ceea7cb187be63008938e6____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v53);
  return v12;
}
