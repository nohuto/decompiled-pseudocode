/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1C00A2514
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00A2280 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0075440 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00768A4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(__int64 a1, HLSURF a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // eax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+48h] [rbp-10h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v3 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v7);
      v8 = 0LL;
      v9 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v7, a2);
      v4 = v8;
      if ( v8 )
      {
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v10, (struct _EX_PUSH_LOCK *)(v8 + 256));
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
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v10);
      }
      else
      {
        v3 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v7);
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
