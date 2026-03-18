/*
 * XREFs of GreRealizePalette @ 0x1C00983DC
 * Callers:
 *     xxxRealizePalette @ 0x1C0098390 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C025768C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00E32F0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E51A4 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0291554 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C029EB00 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  HPALETTE v5; // rsi
  struct _W32PROCESS *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  HDC v12; // rsi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 matched; // rax
  HDC v20; // rbx
  _DWORD *v21; // rdx
  unsigned int v22; // eax
  HDC v23; // rsi
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rax
  HDC v27; // rbx
  void (__fastcall *v28)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v29; // r8
  DYNAMICMODECHANGESHARELOCK *v30; // rcx
  unsigned int v31; // ebx
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-98h]
  _BYTE v37[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v39[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v43[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v44[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v47[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v48[112]; // [rsp+120h] [rbp+20h] BYREF
  char v49; // [rsp+1A8h] [rbp+A8h] BYREF
  int v50; // [rsp+1B0h] [rbp+B0h] BYREF
  int v51; // [rsp+1B8h] [rbp+B8h] BYREF

  v1 = 0;
  v51 = 0;
  v50 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v45, a1);
  if ( !v45[0] )
    goto LABEL_77;
  v34 = *(_QWORD *)(v45[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v49);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v42, (struct PDEVOBJ *)&v34);
  v41 = *(_QWORD *)(v34 + 64);
  GreAcquireSemaphore(v41);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v47, (struct PDEVOBJ *)&v34);
  v2 = v34;
  v3 = *(_QWORD *)(v34 + 1808);
  v33 = v3;
  v4 = *(_QWORD *)(v45[0] + 88LL);
  v5 = *(HPALETTE *)v4;
  if ( (*(_DWORD *)(v34 + 2172) & 0x100) != 0 )
  {
    v40 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v5 == hForePalette
      || (v6 = *(struct _W32PROCESS **)(v45[0] + 976LL), *((_DWORD *)v6 + 52) == 1)
      && (v7 = 16711680LL,
          v6 = (struct _W32PROCESS *)((unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000),
          (_DWORD)v6 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v6),
          v6 = hForePID,
          hForePID == CurrentProcessWin32Process) )
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_64;
      v21 = *(_DWORD **)(v4 + 72);
      if ( v21 )
      {
        if ( v21 == *(_DWORD **)(v4 + 80) )
        {
          v22 = XEPALOBJ::ulTime((XEPALOBJ *)&v33);
          if ( *v21 == v22 )
            goto LABEL_64;
        }
      }
      GreAcquireHmgrSemaphore(v6, v21, v7, v8);
      v23 = *(HDC *)(v4 + 40);
      while ( v23 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v39, v23);
        if ( !v39[0] )
          goto LABEL_60;
        *(_DWORD *)(*(_QWORD *)(v39[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v45[0] + 976LL) + 152LL) | 0xF;
        v23 = *(HDC *)(v39[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v39);
        v39[0] = 0LL;
        MDCOBJ::~MDCOBJ((MDCOBJ *)v39);
      }
      v24 = *(_QWORD *)(v4 + 88);
      if ( v24 )
      {
        if ( v24 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v24);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v25 = *(_DWORD **)(v4 + 72);
      v26 = v25;
      if ( v25 && !*v25 )
      {
        if ( *(_DWORD **)(v4 + 80) != v25 )
          Win32FreePool(v25);
        *(_QWORD *)(v4 + 72) = 0LL;
        v26 = 0LL;
      }
      if ( v26 )
        vMatchAPal(v45[0], v33, v4, &v50, &v51);
      else
        *(_QWORD *)(v4 + 72) = ptransMatchAPal(v25, v33, v4, 1LL, &v50, &v51);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
LABEL_60:
      v27 = *(HDC *)(v4 + 40);
      while ( v27 != v23 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v44, v27);
        _InterlockedDecrement((volatile signed __int32 *)(v44[0] + 12LL));
        v27 = *(HDC *)(v44[0] + 984LL);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v44);
      }
    }
    else
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_64;
      v10 = *(_DWORD **)(v4 + 80);
      if ( v10 )
      {
        v11 = XEPALOBJ::ulTime((XEPALOBJ *)&v33);
        if ( *v10 == v11 )
          goto LABEL_64;
      }
      GreAcquireHmgrSemaphore(v6, v10, v7, v8);
      v12 = *(HDC *)(v4 + 40);
      while ( v12 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v38, v12);
        if ( !v38[0] )
        {
          MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
          goto LABEL_34;
        }
        *(_DWORD *)(*(_QWORD *)(v38[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v45[0] + 976LL) + 152LL) | 0xF;
        v12 = *(HDC *)(v38[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v38);
        v38[0] = 0LL;
        MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
      }
      v13 = *(_QWORD *)(v4 + 88);
      if ( v13 )
      {
        if ( v13 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v13);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v14 = *(_DWORD **)(v4 + 72);
      v15 = v14;
      if ( v14 && !*v14 )
      {
        if ( *(_DWORD **)(v4 + 80) != v14 )
          Win32FreePool(v14);
        *(_QWORD *)(v4 + 72) = 0LL;
        v15 = 0LL;
      }
      if ( !v15 )
      {
        v36 = 0;
        v35 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v35, 1u, *(_DWORD *)(v33 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v16 = *(unsigned int *)(v33 + 28);
          v17 = *(_DWORD *)(v35 + 28);
          if ( (unsigned int)v16 >= v17 )
            v16 = v17;
          memmove(*(void **)(v35 + 112), *(const void **)(v33 + 112), 4 * v16);
          *(_DWORD *)(v35 + 60) = *(_DWORD *)(v33 + 60);
          *(_DWORD *)(v35 + 24) = *(_DWORD *)(v33 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v35);
          *(_QWORD *)(v4 + 72) = ptransMatchAPal(v18, v35, v4, 1LL, v37, v37);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v35);
        v15 = *(_DWORD **)(v4 + 72);
      }
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      if ( v15 )
      {
        matched = ptransMatchAPal(v14, v33, v4, 0LL, &v50, &v51);
        *(_QWORD *)(v4 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
      }
      else
      {
        *(_QWORD *)(v4 + 80) = 0LL;
      }
LABEL_34:
      v20 = *(HDC *)(v4 + 40);
      while ( v20 != v12 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v43, v20);
        _InterlockedDecrement((volatile signed __int32 *)(v43[0] + 12LL));
        v20 = *(HDC *)(v43[0] + 984LL);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v43);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_64:
    SEMOBJ::vUnlock((SEMOBJ *)&v40);
    v2 = v34;
    v3 = v33;
  }
  if ( v50 )
  {
    if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
    {
      v28 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v2 + 1768);
      if ( v28 )
      {
        v28(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 1800LL), &v33, 0LL, 0LL, *(_DWORD *)(v3 + 28));
        v3 = v33;
      }
    }
    if ( *(_DWORD *)(v3 + 28) == 256 )
    {
      v29 = &aPalHalftone;
      do
      {
        if ( ((*v29 ^ *(_DWORD *)((char *)v29 + *(_QWORD *)(v3 + 112) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v1;
        ++v29;
      }
      while ( v1 < 0x100 );
      if ( v1 == 256 )
        *(_DWORD *)(v3 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v3 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v47);
  DCOBJ::~DCOBJ((DCOBJ *)v48);
  SEMOBJ::vUnlock((SEMOBJ *)&v41);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v42);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v30);
LABEL_77:
  v31 = v51 | (v50 << 16);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v45);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
  return v31;
}
