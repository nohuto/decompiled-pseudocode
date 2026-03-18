/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EC990
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000BF84 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000CDB4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C00D1E38 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00E977C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00E9944 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00EABD0 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00FAAFC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGSESSIONMGR *v11; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v14; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  VIDSCH_EXPORT **v22; // r15
  struct DXGPROCESS *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rax
  struct DXGPROCESS *Current; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r15
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  int v43; // ebx
  struct DXGPROCESS *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  _DWORD v49[2]; // [rsp+20h] [rbp-30h] BYREF
  int *v50; // [rsp+28h] [rbp-28h]
  _BYTE v51[8]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGADAPTER *v52; // [rsp+38h] [rbp-18h]
  char v53; // [rsp+40h] [rbp-10h]
  int v54; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v55; // [rsp+A0h] [rbp+50h] BYREF

  v2 = 0;
  v4 = (unsigned int)*a2;
  v6 = 0LL;
  if ( !(_DWORD)v4 )
  {
LABEL_6:
    v11 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6, v4) + 74);
    if ( v11 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v11, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v16 = WdLogNewEntry5_WdError(v9, v8, v10);
      v2 = -1073741811;
      *(_QWORD *)(v16 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18, v17);
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
      return v2;
    }
    v52 = this;
    v53 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    if ( *((_DWORD *)this + 44) == 1 && !*((_BYTE *)this + 2465) && (*((_DWORD *)this + 606) & 4) == 0 )
    {
      v22 = (VIDSCH_EXPORT **)*((_QWORD *)this + 320);
      if ( v22 && (v23 = DXGPROCESS::GetCurrent(), ADAPTER_RENDER::IsProcessGpuAccessBlocked(v22, v23)) )
      {
        v24 = WdLogNewEntry5_WdEvent(v20);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = DXGPROCESS::GetCurrent();
        WdLogEvent5_WdEvent(v24);
      }
      else
      {
        ++a2[2];
        if ( *a2 < a2[1] )
        {
          Current = DXGPROCESS::GetCurrent();
          v28 = DXGADAPTER::CreateHandle(this, Current, &v55);
          v25 = v28;
          if ( v28 >= 0 )
          {
            v33 = (unsigned int)*a2;
            v34 = *((_QWORD *)a2 + 2);
            v35 = 5 * v33;
            *a2 = v33 + 1;
            *(_DWORD *)(v34 + 4 * v35) = v55;
            *(_QWORD *)(v34 + 4 * v35 + 4) = *(_QWORD *)((char *)this + 276);
            *(_DWORD *)(v34 + 4 * v35 + 16) = 0;
            if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
            {
              SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                         SessionDataForSpecifiedSession,
                                         (const struct _LUID *)((char *)this + 276));
              if ( SessionAdapterFromLuid )
                v39 = *((_DWORD *)SessionAdapterFromLuid + 27);
              else
                v39 = 0;
              *(_DWORD *)(v34 + 4 * v35 + 12) = v39;
              if ( v39 && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && DXGADAPTER::IsFullWDDMAdapter(this) )
              {
                v40 = WdLogNewEntry5_WdAssertion(v38, v37);
                *(_QWORD *)(v40 + 24) = 910LL;
                WdLogEvent5_WdAssertion(v40);
              }
              if ( !*((_QWORD *)this + 320) )
              {
                v41 = *((_QWORD *)this + 319);
                if ( *(_QWORD *)(*(_QWORD *)(v41 + 16) + 2560LL) )
                {
                  v42 = WdLogNewEntry5_WdAssertion(v38, v37);
                  *(_QWORD *)(v42 + 24) = 6373LL;
                  WdLogEvent5_WdAssertion(v42);
                }
                *(_DWORD *)(v34 + 4 * v35 + 16) = *(_DWORD *)(v41 + 348);
              }
            }
            else
            {
              v54 = 0;
              v43 = 2;
              v50 = &v54;
              v49[0] = 2;
              v49[1] = 4;
              v44 = DXGPROCESS::GetCurrent();
              if ( (*(int (__fastcall **)(_DWORD *))(*((_QWORD *)v44 + 12) + 352LL))(v49) >= 0 )
              {
                v43 = v54;
              }
              else
              {
                v48 = WdLogNewEntry5_WdWarning(v46, v45, v47);
                *(_QWORD *)(v48 + 24) = 938LL;
                WdLogEvent5_WdWarning(v48);
              }
              if ( v43 != 0xFFFF
                && *((_DWORD *)SessionDataForSpecifiedSession + 4624) == *((_DWORD *)this + 69)
                && *((_DWORD *)SessionDataForSpecifiedSession + 4625) == *((_DWORD *)this + 70) )
              {
                *(_DWORD *)(v34 + 4 * v35 + 12) = *((_DWORD *)SessionDataForSpecifiedSession + 4626);
              }
              else
              {
                *(_DWORD *)(v34 + 4 * v35 + 12) = 0;
              }
            }
            goto LABEL_20;
          }
          v32 = WdLogNewEntry5_WdError(v30, v29, v31);
          *(_QWORD *)(v32 + 24) = this;
          *(_QWORD *)(v32 + 32) = v25;
          WdLogEvent5_WdError(v32);
LABEL_19:
          v2 = v25;
LABEL_20:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
          return v2;
        }
        if ( *((_QWORD *)a2 + 2) )
        {
          v26 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          *(_QWORD *)(v26 + 24) = (unsigned int)a2[2];
          *(_QWORD *)(v26 + 32) = (unsigned int)a2[1];
          WdLogEvent5_WdWarning(v26);
        }
      }
    }
    LODWORD(v25) = 0;
    goto LABEL_19;
  }
  v7 = *((_QWORD *)a2 + 2);
  while ( *((_DWORD *)this + 69) != *(_DWORD *)(v7 + 20LL * (unsigned int)v6 + 4)
       || *((_DWORD *)this + 70) != *(_DWORD *)(v7 + 20LL * (unsigned int)v6 + 8) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned int)v4 )
      goto LABEL_6;
  }
  v14 = WdLogNewEntry5_WdWarning(v6, v4, 5LL * (unsigned int)v6);
  *(_QWORD *)(v14 + 24) = this;
  WdLogEvent5_WdWarning(v14);
  return 0LL;
}
