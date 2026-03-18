/*
 * XREFs of GreEndGdiRenderingToDxSurface @ 0x1C00F9334
 * Callers:
 *     NtGdiEndGdiRendering @ 0x1C00F92E0 (NtGdiEndGdiRendering.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreEndGdiRenderingToDxSurface(HSURF a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rax
  int v11; // edx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64); // rax
  _BYTE v14[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SURFREF::SURFREF((SURFREF *)v14, a1);
  v8 = v15;
  v9 = 0;
  if ( v15 )
  {
    if ( ((unsigned int)a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v8 = v15;
        if ( !v15 )
          goto LABEL_15;
        v10 = *(_QWORD *)(v15 + 48);
        v11 = *(_DWORD *)(v15 + 116) & 8;
        if ( !v11 && !*(_QWORD *)(v15 + 224) )
          goto LABEL_13;
        v9 = 1;
        *(_WORD *)(v15 + 102) |= 0x200u;
        if ( v11 )
        {
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v10 + 3488);
          v9 = 0;
          if ( v12 )
            v9 = v12(v8 + 24, v6, a4, a3);
        }
      }
      v8 = v15;
    }
LABEL_13:
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
LABEL_15:
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v9;
}
