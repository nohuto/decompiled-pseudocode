/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C00A2D9C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00A2280 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00A1DA0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015EB20 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  unsigned int v14; // ebx
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v19[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  if ( g_pDwmState )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
    GreAcquireSemaphoreSharedInternal(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
    if ( (unsigned int)UserIsCurrentProcessDwm() )
    {
      if ( *(_QWORD *)(a1 + 3456) )
      {
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v19);
        v10 = 0LL;
        v20 = 0LL;
        if ( a2 && (LOBYTE(v9) = 18, v11 = HmgShareLockCheck(a2, v9), v20 = v11, (v10 = v11) != 0) )
        {
          CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, (struct _EX_PUSH_LOCK *)(v11 + 256));
          v12 = *(_QWORD *)(v10 + 184);
          if ( v12 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v10) )
          {
            v13 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(a1 + 3456))(
                   v12,
                   a3,
                   a2,
                   *(_QWORD *)(v12 + 32)) )
            {
              *(_DWORD *)(v10 + 244) ^= (*(_DWORD *)(v10 + 244) ^ (2 * a5)) & 2;
              EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
            }
            *(_QWORD *)(v10 + 192) = *(_QWORD *)(v13 + 568);
            *(_QWORD *)(v10 + 200) = *(_QWORD *)(v13 + 576);
            *(_DWORD *)(v10 + 208) = *(_DWORD *)(v13 + 124);
            if ( (*(_DWORD *)(v13 + 116) & 0x400) != 0 )
              *(_DWORD *)(v10 + 244) |= 0x100u;
          }
          else
          {
            *(_QWORD *)(v10 + 192) = a3;
            *(_QWORD *)(v10 + 200) = a4;
          }
          v14 = 0;
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
          v10 = v20;
        }
        else
        {
          v14 = -1073741811;
        }
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v19);
      }
      else
      {
        v14 = -1073741822;
      }
    }
    else
    {
      v14 = -1073741790;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v14;
}
