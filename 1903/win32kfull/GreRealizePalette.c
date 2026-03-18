/*
 * XREFs of GreRealizePalette @ 0x1C0121EBC
 * Callers:
 *     xxxRealizePalette @ 0x1C0121E60 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C0270FBC (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0032B5C (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EF6D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02B0164 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B5748 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  HPALETTE v5; // rdi
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  int v10; // eax
  _DWORD *v11; // rdx
  HDC v12; // rdi
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 matched; // rax
  HDC v20; // rbx
  __int64 v21; // rdx
  int v22; // eax
  _DWORD *v23; // rdx
  HDC v24; // rdi
  __int64 v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rax
  HDC v28; // rbx
  void (__fastcall *v29)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  _DWORD *v30; // r8
  unsigned int i; // r9d
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  _QWORD v36[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v37[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v38[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v39[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[8]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v44[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  _QWORD v48[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  char v52; // [rsp+168h] [rbp+68h] BYREF
  int v53; // [rsp+170h] [rbp+70h] BYREF
  int v54; // [rsp+178h] [rbp+78h] BYREF

  v54 = 0;
  v53 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  v1 = v36[0];
  if ( !v36[0] )
    goto LABEL_9;
  v33 = *(_QWORD *)(v36[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v52);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v42, (struct PDEVOBJ *)&v33);
  v41 = *(_QWORD *)(v33 + 64);
  GreAcquireSemaphore(v41);
  v2 = v33;
  v48[1] = 0LL;
  v49 = 256;
  v45 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v48[0] = 0LL;
  v47 = 1;
  if ( (*(_DWORD *)(v33 + 40) & 1) != 0 )
  {
    *(_QWORD *)&v45 = *(_QWORD *)(v33 + 48);
    v46 = v33;
    GreAcquireSemaphore(v45);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v45, 11LL);
    v2 = v33;
  }
  v3 = *(_QWORD *)(v2 + 1808);
  v32 = v3;
  v4 = *(_QWORD *)(v36[0] + 88LL);
  v5 = *(HPALETTE *)v4;
  if ( (*(_DWORD *)(v2 + 2172) & 0x100) != 0 )
  {
    v40 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    if ( v5 == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v36[0] + 976LL) + 208LL) == 1
      && (v9 = (unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000,
          ((unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000) == (_DWORD)v9)
      && hForePID == (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v9, (unsigned int)hForePalette) )
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_75;
      v21 = *(_QWORD *)(v4 + 72);
      if ( v21 )
      {
        if ( v21 == *(_QWORD *)(v4 + 80) )
        {
          v22 = XEPALOBJ::ulTime((XEPALOBJ *)&v32);
          if ( *v23 == v22 )
            goto LABEL_75;
        }
      }
      GreAcquireHmgrSemaphore();
      v24 = *(HDC *)(v4 + 40);
      while ( v24 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v39, v24);
        if ( !v39[0] )
          goto LABEL_71;
        *(_DWORD *)(*(_QWORD *)(v39[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v36[0] + 976LL) + 152LL) | 0xF;
        v24 = *(HDC *)(v39[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v39);
        v39[0] = 0LL;
      }
      v25 = *(_QWORD *)(v4 + 88);
      if ( v25 )
      {
        if ( v25 != *(_QWORD *)(v4 + 72) )
          Win32FreePool(v25);
        *(_QWORD *)(v4 + 88) = 0LL;
      }
      v26 = *(_DWORD **)(v4 + 72);
      v27 = v26;
      if ( v26 && !*v26 )
      {
        if ( *(_DWORD **)(v4 + 80) != v26 )
          Win32FreePool(v26);
        *(_QWORD *)(v4 + 72) = 0LL;
        v27 = 0LL;
      }
      if ( v27 )
        vMatchAPal(v36[0], v32, v4, &v53, &v54);
      else
        *(_QWORD *)(v4 + 72) = ptransMatchAPal(v26, v32, v4, 1LL, &v53, &v54);
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
LABEL_71:
      v28 = *(HDC *)(v4 + 40);
      while ( v28 != v24 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v44, v28);
        _InterlockedDecrement((volatile signed __int32 *)(v44[0] + 12LL));
        v28 = *(HDC *)(v44[0] + 984LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v44);
      }
    }
    else
    {
      if ( (struct PALETTE *)v4 == ppalDefault )
        goto LABEL_75;
      if ( *(_QWORD *)(v4 + 80) )
      {
        v10 = XEPALOBJ::ulTime((XEPALOBJ *)&v32);
        if ( *v11 == v10 )
          goto LABEL_75;
      }
      GreAcquireHmgrSemaphore();
      v12 = *(HDC *)(v4 + 40);
      while ( v12 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v38, v12);
        if ( !v38[0] )
          goto LABEL_44;
        *(_DWORD *)(*(_QWORD *)(v38[0] + 976LL) + 152LL) = *(_DWORD *)(*(_QWORD *)(v36[0] + 976LL) + 152LL) | 0xF;
        v12 = *(HDC *)(v38[0] + 984LL);
        XDCOBJ::RestoreAttributes((XDCOBJ *)v38);
        v38[0] = 0LL;
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
        v35 = 0;
        v34 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v34, 1u, *(_DWORD *)(v32 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
        {
          v16 = *(unsigned int *)(v32 + 28);
          v17 = *(_DWORD *)(v34 + 28);
          if ( (unsigned int)v16 >= v17 )
            v16 = v17;
          memmove(*(void **)(v34 + 112), *(const void **)(v32 + 112), 4 * v16);
          *(_DWORD *)(v34 + 60) = *(_DWORD *)(v32 + 60);
          *(_DWORD *)(v34 + 24) = *(_DWORD *)(v32 + 24);
          XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v34);
          *(_QWORD *)(v4 + 72) = ptransMatchAPal(v18, v34, v4, 1LL, v37, v37);
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v34);
        v15 = *(_DWORD **)(v4 + 72);
      }
      *(_QWORD *)(v4 + 88) = *(_QWORD *)(v4 + 80);
      if ( v15 )
      {
        matched = ptransMatchAPal(v14, v32, v4, 0LL, &v53, &v54);
        *(_QWORD *)(v4 + 80) = matched;
        if ( !matched )
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 72);
      }
      else
      {
        *(_QWORD *)(v4 + 80) = 0LL;
      }
LABEL_44:
      v20 = *(HDC *)(v4 + 40);
      while ( v20 != v12 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v43, v20);
        _InterlockedDecrement((volatile signed __int32 *)(v43[0] + 12LL));
        v20 = *(HDC *)(v43[0] + 984LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v43);
      }
    }
    GreReleaseHmgrSemaphore();
LABEL_75:
    SEMOBJ::vUnlock((SEMOBJ *)&v40);
    v2 = v33;
    v3 = v32;
  }
  if ( v53 )
  {
    if ( (*(_DWORD *)(v2 + 40) & 0x400) == 0 )
    {
      v29 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v2 + 1768);
      if ( v29 )
      {
        v29(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 1800LL), &v32, 0LL, 0LL, *(_DWORD *)(v3 + 28));
        v3 = v32;
      }
    }
    if ( *(_DWORD *)(v3 + 28) == 256 )
    {
      v30 = &aPalHalftone;
      for ( i = 0; i < 0x100; ++i )
      {
        if ( ((*v30 ^ *(_DWORD *)((char *)v30 + *(_QWORD *)(v3 + 112) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) != 0 )
          break;
        ++v30;
      }
      if ( i == 256 )
        *(_DWORD *)(v3 + 24) |= 0x100000u;
      else
        *(_DWORD *)(v3 + 24) &= ~0x100000u;
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v45);
  if ( v48[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v48);
  SEMOBJ::vUnlock((SEMOBJ *)&v41);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v42);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  v1 = v36[0];
LABEL_9:
  v7 = v54 | (v53 << 16);
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v36);
  return v7;
}
