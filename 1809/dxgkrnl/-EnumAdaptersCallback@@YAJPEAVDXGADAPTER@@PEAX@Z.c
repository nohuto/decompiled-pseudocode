/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E3710
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F5E8 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C000F684 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00121E4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C00DC378 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00DCB84 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00DDAF8 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct DXGSESSIONDATA *SessionData; // r13
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r14
  struct DXGPROCESS *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v19; // rax
  struct DXGPROCESS *Current; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r14
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // ebx
  struct DXGPROCESS *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  _QWORD v38[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-20h] BYREF
  char v40; // [rsp+40h] [rbp-10h]
  int v41; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v42; // [rsp+A0h] [rbp+50h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v5 = 0;
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v39[1] = this;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v39[0] = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 120, 0LL);
    v13 = *((_DWORD *)this + 44);
    v40 = 1;
    if ( v13 == 1 && !*((_BYTE *)this + 2429) && (*((_DWORD *)this + 600) & 4) == 0 )
    {
      v14 = *((_QWORD *)this + 316);
      if ( v14
        && (v15 = DXGPROCESS::GetCurrent(), v11 = *(_QWORD *)(v14 + 16), !*(_BYTE *)(v11 + 185))
        && (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                              *(VIDSCH_EXPORT **)(v14 + 520),
                              *(struct _VIDSCH_GLOBAL **)(v14 + 528),
                              v15) )
      {
        v16 = WdLogNewEntry5_WdEvent(v11, v10);
        *(_QWORD *)(v16 + 24) = this;
        *(_QWORD *)(v16 + 32) = DXGPROCESS::GetCurrent();
        WdLogEvent5_WdEvent(v16);
      }
      else
      {
        ++a2[2];
        if ( *a2 < a2[1] )
        {
          Current = DXGPROCESS::GetCurrent();
          v21 = DXGADAPTER::CreateHandle(this, Current, &v42);
          v17 = v21;
          if ( v21 >= 0 )
          {
            v24 = (unsigned int)*a2;
            v25 = *((_QWORD *)a2 + 2);
            v26 = 5 * v24;
            *a2 = v24 + 1;
            *(_DWORD *)(v25 + 4 * v26) = v42;
            *(_QWORD *)(v25 + 4 * v26 + 4) = *(_QWORD *)((char *)this + 276);
            *(_DWORD *)(v25 + 4 * v26 + 16) = 0;
            if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
            {
              SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                                         SessionData,
                                         (const struct _LUID *)((char *)this + 276));
              if ( SessionAdapterFromLuid )
                v28 = *((_DWORD *)SessionAdapterFromLuid + 27);
              else
                v28 = 0;
              *(_DWORD *)(v25 + 4 * v26 + 12) = v28;
              if ( DXGADAPTER::IsDisplayOnlyAdapter(this) )
              {
                v30 = *((_QWORD *)this + 315);
                if ( *(_QWORD *)(*(_QWORD *)(v30 + 16) + 2528LL) )
                {
                  v31 = WdLogNewEntry5_WdAssertion(v29);
                  *(_QWORD *)(v31 + 24) = 6146LL;
                  WdLogEvent5_WdAssertion(v31);
                }
                *(_DWORD *)(v25 + 4 * v26 + 16) = *(_DWORD *)(v30 + 244);
              }
            }
            else
            {
              v41 = 0;
              v32 = 2;
              v38[0] = 0x400000002LL;
              v38[1] = &v41;
              v33 = DXGPROCESS::GetCurrent();
              if ( (*(int (__fastcall **)(_QWORD *))(*((_QWORD *)v33 + 13) + 360LL))(v38) >= 0 )
              {
                v32 = v41;
              }
              else
              {
                v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
                *(_QWORD *)(v37 + 24) = 656LL;
                WdLogEvent5_WdWarning(v37);
              }
              if ( v32 != 0xFFFF
                && *((_DWORD *)SessionData + 4624) == *((_DWORD *)this + 69)
                && *((_DWORD *)SessionData + 4625) == *((_DWORD *)this + 70) )
              {
                *(_DWORD *)(v25 + 4 * v26 + 12) = *((_DWORD *)SessionData + 4626);
              }
              else
              {
                *(_DWORD *)(v25 + 4 * v26 + 12) = 0;
              }
            }
            goto LABEL_12;
          }
          v23 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v23 + 24) = this;
          *(_QWORD *)(v23 + 32) = v17;
          WdLogEvent5_WdError(v23);
LABEL_11:
          v5 = v17;
LABEL_12:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
          return v5;
        }
        if ( *((_QWORD *)a2 + 2) )
        {
          v19 = WdLogNewEntry5_WdWarning(v11, v10, v12);
          *(_QWORD *)(v19 + 24) = (unsigned int)a2[2];
          *(_QWORD *)(v19 + 32) = (unsigned int)a2[1];
          WdLogEvent5_WdWarning(v19);
        }
      }
    }
    LODWORD(v17) = 0;
    goto LABEL_11;
  }
  v8 = WdLogNewEntry5_WdError(v6);
  v5 = -1073741811;
  *(_QWORD *)(v8 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v9);
  *(_QWORD *)(v8 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v8);
  return v5;
}
