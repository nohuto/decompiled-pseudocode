/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0129194
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C0129180 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009A870 (hsurfCreateCompatibleSurface.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rsi
  BOOL (__stdcall *v5)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r13
  __int64 v6; // rdx
  signed __int32 v7; // ett
  BOOL (__stdcall *v8)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v9; // rdx
  HSURF CompatibleSurface; // rax
  HSURF v11; // r12
  __int64 v12; // rdx
  signed __int32 v13; // ett
  __int64 v14; // rdx
  __int64 v15; // rdx
  signed __int32 v16; // ett
  BOOL (__stdcall *v17)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // r10
  __int64 v18; // rdx
  __int64 v19; // [rsp+88h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+98h] [rbp-70h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+B0h] [rbp-58h] BYREF
  int v25; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-48h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  __int64 v29; // [rsp+D8h] [rbp-30h] BYREF
  char v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  __int64 v32; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v33[4]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v34[32]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v35; // [rsp+130h] [rbp+28h]
  _BYTE v36[32]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v37[80]; // [rsp+158h] [rbp+50h] BYREF
  __m128i v38; // [rsp+1A8h] [rbp+A0h] BYREF
  int v39; // [rsp+1B8h] [rbp+B0h] BYREF
  __m128i si128; // [rsp+1BCh] [rbp+B4h]
  int v41; // [rsp+1CCh] [rbp+C4h]

  memset(v33, 0, sizeof(v33));
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v36, this);
    v32 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v2 = *(_QWORD *)this;
    v3 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
    v4 = *(_QWORD *)(*(_QWORD *)this + 1808LL);
    v39 = 0;
    v41 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v38 = si128;
    *(_DWORD *)(v2 + 2440) = 0;
    v33[0] = 0x2800000006LL;
    v33[2] = *(_QWORD *)gppalRGB;
    v29 = 0LL;
    v30 = 0;
    v31 = 0;
    v21 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    LODWORD(v33[1]) = 40;
    LODWORD(v33[3]) = 1;
    v5 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v29, (struct _DEVBITMAPINFO *)v33, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v21,
                         0LL,
                         0,
                         (__int64)gppalRGB,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v20,
                         0LL,
                         0,
                         v4,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v19,
                         0LL,
                         0,
                         (__int64)gppalRGB,
                         v4,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0) )
    {
      v6 = *(_QWORD *)this;
      v26 = v21;
      v27 = v20;
      v28 = v19;
      v25 = 33488896;
      _m_prefetchw((const void *)(v6 + 40));
      do
        v7 = *(_DWORD *)(v6 + 40);
      while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 40), v7 & 0xFFFBFFFF, v7) );
      if ( (*(_DWORD *)(v3 + 112) & 0x10000) != 0 )
        v8 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3256LL);
      else
        v8 = EngAlphaBlend;
      v9 = 0LL;
      if ( v29 )
        v9 = v29 + 24;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v8)(
             v3 + 24,
             v9,
             &v39,
             v19,
             &v38,
             &v38,
             &v25)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
    SURFMEM::~SURFMEM((SURFMEM *)&v29);
    CompatibleSurface = hsurfCreateCompatibleSurface(
                          *(_QWORD *)this,
                          *(_DWORD *)(v3 + 96),
                          0LL,
                          0x28u,
                          0x28u,
                          1u,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0LL);
    v11 = CompatibleSurface;
    if ( CompatibleSurface )
    {
      SURFREF::SURFREF((SURFREF *)v34, CompatibleSurface);
      if ( v35 )
      {
        v24 = 0LL;
        v23 = 0LL;
        v22 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v24,
                             0LL,
                             0,
                             v4,
                             v4,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0,
                             0,
                             0)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v23,
                             0LL,
                             0,
                             v4,
                             (__int64)gppalRGB,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0,
                             0,
                             0)
          && (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v22,
                             0LL,
                             0,
                             (__int64)gppalRGB,
                             v4,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0,
                             0,
                             0) )
        {
          v12 = *(_QWORD *)this;
          v26 = v23;
          v27 = v23;
          v28 = v22;
          v25 = 8716288;
          _m_prefetchw((const void *)(v12 + 40));
          do
            v13 = *(_DWORD *)(v12 + 40);
          while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 40), v13 & 0xFFFBFFFF, v13) );
          if ( (*(_DWORD *)(v3 + 112) & 0x10000) != 0 )
            v5 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3256LL);
          v14 = 0LL;
          if ( v35 )
            v14 = v35 + 24;
          if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v5)(
                 v3 + 24,
                 v14,
                 &v39,
                 v24,
                 &v38,
                 &v38,
                 &v25)
            && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
          {
            *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 1u;
            *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
          }
        }
        v15 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v16 = *(_DWORD *)(v15 + 40);
        while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 40), v16 & 0xFFFBFFFF, v16) );
        if ( (*(_DWORD *)(v3 + 112) & 0x8000) != 0 )
          v17 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)this + 3280LL);
        else
          v17 = EngTransparentBlt;
        v18 = 0LL;
        if ( v35 )
          v18 = v35 + 24;
        if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))v17)(
               v3 + 24,
               v18,
               0LL,
               0LL,
               &v38,
               &v38,
               1,
               0)
          && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
        if ( v35 )
          DEC_SHARE_REF_CNT(v35);
      }
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v34);
    }
    bDeleteSurface(v11);
    SEMOBJ::vUnlock((SEMOBJ *)&v32);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v36);
    DCOBJ::~DCOBJ((DCOBJ *)v37);
  }
}
