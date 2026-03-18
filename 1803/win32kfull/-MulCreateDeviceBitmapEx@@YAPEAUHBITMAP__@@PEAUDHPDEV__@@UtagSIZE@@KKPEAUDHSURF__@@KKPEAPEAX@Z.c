/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C0272570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C0276A60 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C0276D3C (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HSURF __fastcall MulCreateDeviceBitmapEx(
        struct DHPDEV__ *a1,
        SIZEL a2,
        ULONG a3,
        unsigned int a4,
        DHSURF a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rbx
  ULONG v12; // r11d
  HSURF v14; // r12
  _QWORD *v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // r14
  __int64 v20; // rax
  HSURF v21; // rax
  HSURF v22; // rbp
  SURFOBJ *v23; // r15
  __int64 (__fastcall *v24)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **); // r10
  HSURF v25; // rax
  DHSURF v26; // rax
  DHSURF v27; // rax
  HBITMAP RedirectionDeviceBitmap; // rax
  SURFOBJ *v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rbp
  HSURF v33; // rcx
  int v35; // [rsp+50h] [rbp-68h]
  int v36; // [rsp+54h] [rbp-64h]
  DHSURF dhsurf; // [rsp+58h] [rbp-60h]
  void *v38; // [rsp+60h] [rbp-58h] BYREF
  __int64 v39; // [rsp+68h] [rbp-50h] BYREF
  _QWORD *v40; // [rsp+70h] [rbp-48h]
  SURFOBJ *pso; // [rsp+78h] [rbp-40h]

  v8 = *((_QWORD *)a1 + 4);
  v9 = 0LL;
  v10 = a4;
  dhsurf = 0LL;
  v11 = 0LL;
  v12 = a3;
  v14 = 0LL;
  if ( (*(_DWORD *)(v8 + 40) & 0x4000000) == 0
    || (a4 & 2) == 0 && g_pDwmState && gfDwmDeviceBitmapsEnabledForMultiAdapter )
  {
    v38 = 0LL;
    if ( (a4 & 2) != 0 && a8 )
      v38 = *a8;
    v15 = 0LL;
    v40 = 0LL;
    if ( (*(_DWORD *)(v8 + 40) & 0x4000000) == 0 )
      goto LABEL_18;
    v16 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16[7] + 2568LL);
        if ( v17 )
        {
          if ( *(_DWORD *)(v17 + 248) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v17 + 252) == *((_DWORD *)a1 + 27) )
            break;
        }
        v16 = (_QWORD *)*v16;
        if ( !v16 )
        {
          v15 = 0LL;
          goto LABEL_15;
        }
      }
      v15 = v16;
      v40 = v16;
    }
LABEL_15:
    v18 = *(_QWORD *)(v8 + 1792);
    if ( v18 )
      *(_QWORD *)(v18 + 104) = 0LL;
    v19 = v15;
    if ( !v15 )
LABEL_18:
      v19 = *(_QWORD **)a1;
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = v19[6];
        v39 = v20;
        v35 = 0;
        if ( (*(_DWORD *)(v20 + 1816) & 0x8000000) != 0
          && (*(_DWORD *)(v20 + 2120) & 0x8000) != 0
          && *(_QWORD *)(v20 + 2760) )
        {
          v21 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD))(v20 + 2760))(*(_QWORD *)(v20 + 1792), a2, v12);
          v22 = v21;
          if ( !v21 )
            goto LABEL_64;
          v23 = EngLockSurface(v21);
          v35 = 1;
        }
        else
        {
          if ( (*(_DWORD *)(v20 + 1816) & 0x8000000) != 0 )
            goto LABEL_64;
          v24 = *(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **))(v20 + 3432);
          if ( !v24 )
            goto LABEL_64;
          v25 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))v24)(
                         *(_QWORD *)(v20 + 1792),
                         a2,
                         v12,
                         v10,
                         a5,
                         a6,
                         a7,
                         &v38);
          v22 = v25;
          if ( !v25 )
            goto LABEL_64;
          v23 = EngLockSurface(v25);
          if ( !v23 )
            break;
          v11 = (__int64)*PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v39);
          a5 = v23->dhsurf;
        }
        if ( !v23 )
          break;
        v26 = dhsurf;
        if ( !dhsurf )
        {
          v36 = 0;
          v27 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
          dhsurf = v27;
          if ( !v27 )
            goto LABEL_56;
          RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v27, a2, a3);
          v14 = (HSURF)RedirectionDeviceBitmap;
          if ( !RedirectionDeviceBitmap )
            goto LABEL_59;
          if ( !EngModifySurface(
                  (HSURF)RedirectionDeviceBitmap,
                  *((HDEV *)a1 + 4),
                  *((_DWORD *)a1 + 17),
                  3u,
                  dhsurf,
                  0LL,
                  0,
                  0LL)
            || (v36 = 1, pso = EngLockSurface(v14), (v29 = pso) == 0LL) )
          {
LABEL_56:
            if ( v14 )
              EngDeleteSurface(v14);
            if ( !v36 )
            {
LABEL_59:
              if ( dhsurf )
                EngFreeMem(dhsurf);
            }
            EngUnlockSurface(v23);
            v33 = v22;
            goto LABEL_66;
          }
          *(_QWORD *)dhsurf = a1;
          *((_QWORD *)dhsurf + 1) = dhsurf + 6;
          dhsurf[4] = (struct DHSURF__)v19[2];
          v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v29);
          *(_QWORD *)(v30 + 568) = v38;
          *(_DWORD *)(v30 + 112) |= 0x800000u;
          *(_QWORD *)(v30 + 576) = v11;
          *(_DWORD *)(v30 + 124) = a6;
          if ( (v10 & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 116) & 0x2000) != 0 )
              *(_DWORD *)(v30 + 116) |= 0x2000u;
            v10 &= ~0x10u;
          }
          EngUnlockSurface(pso);
          v26 = dhsurf;
        }
        *(_QWORD *)(*((_QWORD *)v26 + 1) + 8LL * *((unsigned int *)v19 + 4)) = v23;
        v31 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
        v32 = v31;
        if ( v35 )
        {
          *(_DWORD *)(v31 + 112) |= 0x80000u;
          *(_DWORD *)(v31 + 116) |= 1u;
        }
        else if ( (v10 & 1) != 0 )
        {
          *(_DWORD *)(v31 + 116) |= 1u;
          *(_QWORD *)(v31 + 568) = v38;
          *(_DWORD *)(v31 + 124) = a6;
          *(_QWORD *)(v31 + 576) = v11;
        }
        else if ( (v10 & 2) != 0 )
        {
          *(_DWORD *)(v31 + 116) |= 8u;
        }
        *(_DWORD *)(v31 + 116) |= 4u;
        *(_QWORD *)(v31 + 144) = v14;
        vSetupDevBitmap((struct PDEVOBJ *)&v39, (struct SURFACE *)v31);
        *(_DWORD *)(v32 + 112) |= 0x800000u;
        GreMarkUndeletableBitmap(v23->hsurf);
        if ( !v40 || (v19 != v40 ? (v19 = (_QWORD *)*v19) : (v19 = *(_QWORD **)a1), v19 == v40) )
          v19 = (_QWORD *)*v19;
        if ( !v19 )
          goto LABEL_67;
        v12 = a3;
      }
      if ( v22 )
        EngDeleteSurface(v22);
LABEL_64:
      if ( !v14 )
        return (HSURF)v9;
      v33 = v14;
LABEL_66:
      EngDeleteSurface(v33);
    }
    else
    {
LABEL_67:
      if ( a8 && (v10 & 2) == 0 )
        *a8 = v38;
      return v14;
    }
  }
  return (HSURF)v9;
}
