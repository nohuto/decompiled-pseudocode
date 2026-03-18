/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1C0045C0C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C0045950 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0029BA0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002B1E4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(__int64 a1, HLSURF a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v3 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      v7 = 0LL;
      v8 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v7, a2);
      v4 = v7;
      if ( v7 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)(v7 + 256));
        v5 = *(_DWORD *)(v4 + 244);
        if ( (v5 & 8) != 0 )
        {
          if ( (v5 & 0x10) != 0 )
            *(_DWORD *)(v4 + 244) = v5 & 0xFFFFFFEF;
          ++*(_DWORD *)(v4 + 248);
        }
        else
        {
          v3 = -2147020579;
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF_vDestructorWrap((__int64)&v7);
    }
    else
    {
      v3 = -1071775733;
    }
  }
  else
  {
    v3 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  return v3;
}
