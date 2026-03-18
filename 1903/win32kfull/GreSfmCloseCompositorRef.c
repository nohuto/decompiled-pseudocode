/*
 * XREFs of GreSfmCloseCompositorRef @ 0x1C0045DB0
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0045950 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0029BA0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C002ACC8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002B1E4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0045D38 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0046234 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0046FD0 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 */

__int64 __fastcall GreSfmCloseCompositorRef(HDEV a1, HLSURF a2)
{
  unsigned int v4; // ebx
  SFMLOGICALSURFACE *v5; // rdi
  int v6; // eax
  SFMLOGICALSURFACE *v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]
  unsigned int v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  ENTER_GRE_DWM_CRIT(a1, &v11);
  v4 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      v9 = 0LL;
      v10 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v9, a2);
      v5 = v9;
      if ( v9 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v12, (SFMLOGICALSURFACE *)((char *)v9 + 256));
        v6 = *((_DWORD *)v5 + 61);
        if ( (v6 & 8) == 0 || (v6 & 0x10) != 0 )
        {
          v4 = -2147020579;
        }
        else if ( (*((_DWORD *)v5 + 62))-- == 1 )
        {
          SFMLOGICALSURFACE::StopSfmStateTracking(v5, a1, gpSfmState);
          if ( *((_WORD *)v5 + 6) == 1 && !*((_DWORD *)v5 + 2) )
          {
            if ( v12 )
            {
              GreReleasePushLockExclusive();
              KeLeaveCriticalRegion();
              v12 = 0LL;
            }
            _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
            v9 = 0LL;
            if ( !(unsigned int)bhLSurfDestroyLogicalSurfaceObject((__int64 *)v5, 1, 0) )
              v4 = -1073741823;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
      }
      else
      {
        v4 = -1073741816;
      }
      SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v9);
    }
    else
    {
      v4 = -1071775733;
    }
  }
  else
  {
    v4 = -1073741790;
  }
  LEAVE_GRE_DWM_CRIT(a1, v11);
  return v4;
}
