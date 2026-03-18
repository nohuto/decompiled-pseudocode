/*
 * XREFs of GreRealizePalette @ 0x1C00FD5B8
 * Callers:
 *     xxxRealizePalette @ 0x1C00FD560 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C023FF9C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0017DC8 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C028ADD8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  HPALETTE v5; // rsi
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _W32PROCESS *v11; // rcx
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _DWORD *v13; // rdx
  int v14; // eax
  HDC v15; // rsi
  _DWORD *v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 matched; // rax
  HDC v23; // rbx
  _DWORD *v24; // rdx
  int v25; // eax
  HDC v26; // rsi
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  HDC v30; // rbx
  void (__fastcall *v31)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v32; // r8
  unsigned int i; // r9d
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  _BYTE v38[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[8]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v46[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v47[112]; // [rsp+E0h] [rbp-20h] BYREF
  char v48; // [rsp+168h] [rbp+68h] BYREF
  int v49; // [rsp+170h] [rbp+70h] BYREF
  int v50; // [rsp+178h] [rbp+78h] BYREF

  v50 = 0;
  v49 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v39, a1);
  v1 = v39[0];
  if ( !v39[0] )
    goto LABEL_5;
  v35 = *(_QWORD *)(v39[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v48);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v42, (struct PDEVOBJ *)&v35);
  v41 = *(_QWORD *)(v35 + 56);
  GreAcquireSemaphore(v41);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v47, (struct PDEVOBJ *)&v35);
  v2 = v35;
  v3 = *(_QWORD *)(v35 + 1800);
  v34 = v3;
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(HPALETTE *)v4;
  if ( (*(_DWORD *)(v35 + 2164) & 0x100) != 0 )
  {
    v40 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v11 = (struct _W32PROCESS *)hForePalette;
    if ( v5 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v1 + 80) + 68LL) == 1
      && (v9 = 16711680LL,
          v11 = (struct _W32PROCESS *)((unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000),
          (_DWORD)v11 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v11),
          v11 = hForePID,
          hForePID == CurrentProcessWin32Process) )
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_70;
      v24 = *(_DWORD **)(v4 + 72);
      if ( v24 )
      {
        if ( v24 == *(_DWORD **)(v4 + 80) )
        {
          v25 = XEPALOBJ::ulTime((XEPALOBJ *)&v34);
          if ( *v24 == v25 )
            goto LABEL_70;
        }
      }
      GreAcquireHmgrSemaphore(v11, v24, v9, v10);
      v26 = *(HDC *)(v4 + 40);
      while ( v26 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v45, v26);
        v17 = (_DWORD *)v45[0];
        if ( !v45[0] )
          goto LABEL_66;
        *(_DWORD *)(*(_QWORD *)(v45[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 8LL) | 0xF;
        v26 = (HDC)*((_QWORD *)v17 + 174);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v45);
        v45[0] = 0LL;
      }
      v27 = *(_QWORD *)(v4 + 88);
      if ( v27 )
      {
        if ( v27 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v27);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v28 = *(_DWORD **)(v4 + 72);
      v29 = v28;
      if ( v28 && !*v28 )
      {
        if ( *(_DWORD **)(v4 + 80) != v28 )
          Win32FreePool(v28);
        *(_QWORD *)(v4 + 72) = 0LL;
        v29 = 0LL;
      }
      if ( v29 )
        vMatchAPal(v1, v34, v4, &v49, &v50);
      else
        *(_QWORD *)(v4 + 72) = ptransMatchAPal(v28, v34, v4, 1LL, &v49, &v50);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
LABEL_66:
      v30 = *(HDC *)(v4 + 40);
      if ( v30 == v26 )
        goto LABEL_69;
      do
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v46, v30);
        _InterlockedDecrement((volatile signed __int32 *)(v46[0] + 12LL));
        v30 = *(HDC *)(v46[0] + 1392LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v46);
      }
      while ( v30 != v26 );
    }
    else
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_70;
      v13 = *(_DWORD **)(v4 + 80);
      if ( v13 )
      {
        v14 = XEPALOBJ::ulTime((XEPALOBJ *)&v34);
        if ( *v13 == v14 )
          goto LABEL_70;
      }
      GreAcquireHmgrSemaphore(v11, v13, v9, v10);
      v15 = *(HDC *)(v4 + 40);
      while ( v15 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v43, v15);
        v17 = (_DWORD *)v43[0];
        if ( !v43[0] )
          goto LABEL_40;
        *(_DWORD *)(*(_QWORD *)(v43[0] + 80LL) + 8LL) = *(_DWORD *)(*(_QWORD *)(v1 + 80) + 8LL) | 0xF;
        v15 = (HDC)*((_QWORD *)v17 + 174);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v43);
        v43[0] = 0LL;
      }
      v18 = *(_QWORD *)(v4 + 88);
      if ( v18 )
      {
        if ( v18 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v18);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v16 = *(_DWORD **)(v4 + 72);
      v17 = v16;
      if ( v16 && !*v16 )
      {
        if ( *(_DWORD **)(v4 + 80) != v16 )
          Win32FreePool(v16);
        *(_QWORD *)(v4 + 72) = 0LL;
        v17 = 0LL;
      }
      if ( !v17 )
      {
        v37 = 0;
        v36 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v36, 1u, *(_DWORD *)(v34 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v19 = *(unsigned int *)(v34 + 28);
          v20 = *(_DWORD *)(v36 + 28);
          if ( (unsigned int)v19 >= v20 )
            v19 = v20;
          memmove(*(void **)(v36 + 112), *(const void **)(v34 + 112), 4 * v19);
          *(_DWORD *)(v36 + 60) = *(_DWORD *)(v34 + 60);
          *(_DWORD *)(v36 + 24) = *(_DWORD *)(v34 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v36);
          *(_QWORD *)(v4 + 72) = ptransMatchAPal(v21, v36, v4, 1LL, v38, v38);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v36);
        v17 = *(_DWORD **)(v4 + 72);
      }
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      if ( v17 )
      {
        matched = ptransMatchAPal(v16, v34, v4, 0LL, &v49, &v50);
        *(_QWORD *)(v4 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
      }
      else
      {
        *(_QWORD *)(v4 + 80) = 0LL;
      }
LABEL_40:
      v23 = *(HDC *)(v4 + 40);
      if ( v23 == v15 )
      {
LABEL_69:
        GreReleaseHmgrSemaphore(v16, v17);
LABEL_70:
        SEMOBJ::vUnlock((SEMOBJ *)&v40);
        v2 = v35;
        v3 = v34;
        goto LABEL_3;
      }
      do
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v44, v23);
        _InterlockedDecrement((volatile signed __int32 *)(v44[0] + 12LL));
        v23 = *(HDC *)(v44[0] + 1392LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v44);
      }
      while ( v23 != v15 );
    }
    v1 = v39[0];
    goto LABEL_69;
  }
LABEL_3:
  if ( v49 )
  {
    if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
    {
      v31 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v2 + 1760);
      if ( v31 )
      {
        v31(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 1792LL), &v34, 0LL, 0LL, *(_DWORD *)(v3 + 28));
        v3 = v34;
      }
    }
    if ( *(_DWORD *)(v3 + 28) == 256 )
    {
      v32 = &aPalHalftone;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( ((*v32 ^ *(_DWORD *)((char *)v32 + *(_QWORD *)(v3 + 112) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v32;
      }
      if ( i == 256 )
        *(_DWORD *)(v3 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v3 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v47);
  SEMOBJ::vUnlock((SEMOBJ *)&v41);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v42);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
LABEL_5:
  v7 = v50 | (v49 << 16);
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
  return v7;
}
