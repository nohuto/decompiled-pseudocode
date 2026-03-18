/*
 * XREFs of ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x1C029B840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02A00B4 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02A040C (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
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
  int v11; // r10d
  ULONG v12; // r11d
  HSURF v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // r14
  __int64 v22; // rax
  HSURF v23; // rax
  HSURF v24; // rbp
  SURFOBJ *v25; // r15
  __int64 (__fastcall *v26)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **); // r10
  HSURF v27; // rax
  DHSURF v28; // rax
  DHSURF v29; // rax
  HBITMAP RedirectionDeviceBitmap; // rax
  SURFOBJ *v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rbp
  HSURF v35; // rcx
  int v37; // [rsp+50h] [rbp-68h]
  int v38; // [rsp+54h] [rbp-64h]
  DHSURF dhsurf; // [rsp+58h] [rbp-60h]
  void *v40; // [rsp+60h] [rbp-58h] BYREF
  __int64 v41; // [rsp+68h] [rbp-50h] BYREF
  _QWORD *v42; // [rsp+70h] [rbp-48h]
  SURFOBJ *pso; // [rsp+78h] [rbp-40h]

  v8 = *((_QWORD *)a1 + 4);
  v9 = 0LL;
  v10 = a4;
  dhsurf = 0LL;
  v11 = a4 & 2;
  v12 = a3;
  v15 = 0LL;
  v16 = 0LL;
  if ( (*(_DWORD *)(v8 + 40) & 0x4000000) == 0 || !v11 && g_pDwmState && gfDwmDeviceBitmapsEnabledForMultiAdapter )
  {
    v40 = 0LL;
    if ( v11 && a8 )
      v40 = *a8;
    v17 = 0LL;
    v42 = 0LL;
    if ( (*(_DWORD *)(v8 + 40) & 0x4000000) == 0 )
      goto LABEL_18;
    v18 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18[7] + 2576LL);
        if ( v19 )
        {
          if ( *(_DWORD *)(v19 + 248) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v19 + 252) == *((_DWORD *)a1 + 27) )
            break;
        }
        v18 = (_QWORD *)*v18;
        if ( !v18 )
        {
          v17 = 0LL;
          goto LABEL_15;
        }
      }
      v17 = v18;
      v42 = v18;
    }
LABEL_15:
    v20 = *(_QWORD *)(v8 + 1800);
    if ( v20 )
      *(_QWORD *)(v20 + 104) = 0LL;
    v21 = v17;
    if ( !v17 )
LABEL_18:
      v21 = *(_QWORD **)a1;
    if ( v21 )
    {
      while ( 1 )
      {
        v22 = v21[6];
        v41 = v22;
        v37 = 0;
        if ( (*(_DWORD *)(v22 + 1824) & 0x8000000) != 0
          && (*(_DWORD *)(v22 + 2128) & 0x8000) != 0
          && *(_QWORD *)(v22 + 2768) )
        {
          v23 = (HSURF)(*(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD))(v22 + 2768))(*(_QWORD *)(v22 + 1800), a2, v12);
          v24 = v23;
          if ( !v23 )
            goto LABEL_64;
          v25 = EngLockSurface(v23);
          v37 = 1;
        }
        else
        {
          if ( (*(_DWORD *)(v22 + 1824) & 0x8000000) != 0 )
            goto LABEL_64;
          v26 = *(__int64 (__fastcall **)(_QWORD, SIZEL, _QWORD, _QWORD, struct DHSURF__ *, unsigned int, unsigned int, void **))(v22 + 3440);
          if ( !v26 )
            goto LABEL_64;
          v27 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))v26)(
                         *(_QWORD *)(v22 + 1800),
                         a2,
                         v12,
                         v10,
                         a5,
                         a6,
                         a7,
                         &v40);
          v24 = v27;
          if ( !v27 )
            goto LABEL_64;
          v25 = EngLockSurface(v27);
          if ( !v25 )
            break;
          v16 = (__int64)*PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v41);
          a5 = v25->dhsurf;
        }
        if ( !v25 )
          break;
        v28 = dhsurf;
        if ( !dhsurf )
        {
          v38 = 0;
          v29 = (DHSURF)pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
          dhsurf = v29;
          if ( !v29 )
            goto LABEL_56;
          RedirectionDeviceBitmap = EngCreateRedirectionDeviceBitmap(v29, a2, a3);
          v15 = (HSURF)RedirectionDeviceBitmap;
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
            || (v38 = 1, pso = EngLockSurface(v15), (v31 = pso) == 0LL) )
          {
LABEL_56:
            if ( v15 )
              EngDeleteSurface(v15);
            if ( !v38 )
            {
LABEL_59:
              if ( dhsurf )
                EngFreeMem(dhsurf);
            }
            EngUnlockSurface(v25);
            v35 = v24;
            goto LABEL_66;
          }
          *(_QWORD *)dhsurf = a1;
          *((_QWORD *)dhsurf + 1) = dhsurf + 6;
          dhsurf[4] = (struct DHSURF__)v21[2];
          v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v31);
          *(_QWORD *)(v32 + 568) = v40;
          *(_DWORD *)(v32 + 112) |= 0x800000u;
          *(_QWORD *)(v32 + 576) = v16;
          *(_DWORD *)(v32 + 124) = a6;
          if ( (v10 & 0x10) != 0 )
          {
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 116) & 0x2000) != 0 )
              *(_DWORD *)(v32 + 116) |= 0x2000u;
            v10 &= ~0x10u;
          }
          EngUnlockSurface(pso);
          v28 = dhsurf;
        }
        *(_QWORD *)(*((_QWORD *)v28 + 1) + 8LL * *((unsigned int *)v21 + 4)) = v25;
        v33 = SURFOBJ_TO_SURFACE_NOT_NULL(v25);
        v34 = v33;
        if ( v37 )
        {
          *(_DWORD *)(v33 + 112) |= 0x80000u;
          *(_DWORD *)(v33 + 116) |= 1u;
        }
        else if ( (v10 & 1) != 0 )
        {
          *(_DWORD *)(v33 + 116) |= 1u;
          *(_QWORD *)(v33 + 568) = v40;
          *(_DWORD *)(v33 + 124) = a6;
          *(_QWORD *)(v33 + 576) = v16;
        }
        else if ( (v10 & 2) != 0 )
        {
          *(_DWORD *)(v33 + 116) |= 8u;
        }
        *(_DWORD *)(v33 + 116) |= 4u;
        *(_QWORD *)(v33 + 144) = v15;
        vSetupDevBitmap((struct PDEVOBJ *)&v41, (struct SURFACE *)v33);
        *(_DWORD *)(v34 + 112) |= 0x800000u;
        GreMarkUndeletableBitmap(v25->hsurf);
        if ( !v42 || (v21 != v42 ? (v21 = (_QWORD *)*v21) : (v21 = *(_QWORD **)a1), v21 == v42) )
          v21 = (_QWORD *)*v21;
        if ( !v21 )
          goto LABEL_67;
        v12 = a3;
      }
      if ( v24 )
        EngDeleteSurface(v24);
LABEL_64:
      if ( !v15 )
        return (HSURF)v9;
      v35 = v15;
LABEL_66:
      EngDeleteSurface(v35);
    }
    else
    {
LABEL_67:
      if ( a8 && (v10 & 2) == 0 )
        *a8 = v40;
      return v15;
    }
  }
  return (HSURF)v9;
}
