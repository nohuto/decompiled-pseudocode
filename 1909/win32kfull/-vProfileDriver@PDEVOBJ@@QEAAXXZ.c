/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C010EEA4
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C010EE90 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00BE910 (hsurfCreateCompatibleSurface.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  signed __int32 v7; // ett
  BOOL (__stdcall *v8)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v9; // rdx
  __int64 CompatibleSurface; // rax
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdx
  signed __int32 v15; // ett
  int v16; // eax
  __int64 v17; // rdx
  signed __int32 v18; // ett
  int v19; // eax
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-58h] BYREF
  int v26; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+D8h] [rbp-30h] BYREF
  char v31; // [rsp+E0h] [rbp-28h]
  int v32; // [rsp+E4h] [rbp-24h]
  __int64 v33; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v34[5]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v35; // [rsp+118h] [rbp+10h] BYREF
  __int64 v36; // [rsp+128h] [rbp+20h]
  int v37; // [rsp+130h] [rbp+28h]
  _QWORD v38[2]; // [rsp+138h] [rbp+30h] BYREF
  __int16 v39; // [rsp+148h] [rbp+40h]
  __int64 v40; // [rsp+150h] [rbp+48h]
  __int64 v41; // [rsp+158h] [rbp+50h]
  __m128i v42; // [rsp+168h] [rbp+60h] BYREF
  int v43; // [rsp+178h] [rbp+70h] BYREF
  __m128i si128; // [rsp+17Ch] [rbp+74h]
  int v45; // [rsp+18Ch] [rbp+84h]

  memset(v34, 0, 0x20uLL);
  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
  {
    v39 = 256;
    v38[1] = 0LL;
    v35 = 0LL;
    v41 = 0LL;
    v40 = 0LL;
    v38[0] = 0LL;
    v37 = 1;
    if ( (*(_DWORD *)(v2 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v35 = *(_QWORD *)(v2 + 48);
      v36 = v2;
      GreAcquireSemaphore(v35);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v35, 11LL);
    }
    v33 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v3 = *(_QWORD *)this;
    v4 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
    v5 = *(_QWORD *)(*(_QWORD *)this + 1808LL);
    v43 = 0;
    v45 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v42 = si128;
    *(_DWORD *)(v3 + 2440) = 0;
    v34[0] = 0x2800000006LL;
    v34[2] = *(_QWORD *)gppalRGB;
    v30 = 0LL;
    v31 = 0;
    v32 = 0;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    LODWORD(v34[1]) = 40;
    LODWORD(v34[3]) = 1;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v30, (struct _DEVBITMAPINFO *)v34, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v22,
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
                         &v21,
                         0LL,
                         0,
                         v5,
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
                         (__int64)gppalRGB,
                         v5,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0) )
    {
      v6 = *(_QWORD *)this;
      v27 = v22;
      v28 = v21;
      v29 = v20;
      v26 = 33488896;
      _m_prefetchw((const void *)(v6 + 40));
      do
        v7 = *(_DWORD *)(v6 + 40);
      while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 40), v7 & 0xFFFBFFFF, v7) );
      if ( (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
        v8 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3256LL);
      else
        v8 = EngAlphaBlend;
      v9 = 0LL;
      if ( v30 )
        v9 = v30 + 24;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v8)(
             v4 + 24,
             v9,
             &v43,
             v20,
             &v42,
             &v42,
             &v26)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
    SURFMEM::~SURFMEM((SURFMEM *)&v30);
    CompatibleSurface = hsurfCreateCompatibleSurface(
                          *(_QWORD *)this,
                          *(_DWORD *)(v4 + 96),
                          0LL,
                          0x28u,
                          0x28u,
                          1,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0,
                          0LL);
    v12 = CompatibleSurface;
    if ( CompatibleSurface )
    {
      LOBYTE(v11) = 5;
      v13 = HmgShareLockCheck(CompatibleSurface, v11);
      if ( v13 )
      {
        v25 = 0LL;
        v24 = 0LL;
        v23 = 0LL;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v25,
                             0LL,
                             0,
                             v5,
                             v5,
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0,
                             0,
                             0) )
        {
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               &v24,
                               0LL,
                               0,
                               v5,
                               (__int64)gppalRGB,
                               (__int64)ppalDefault,
                               (__int64)ppalDefault,
                               0,
                               0,
                               0,
                               0) )
          {
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v23,
                                 0LL,
                                 0,
                                 (__int64)gppalRGB,
                                 v5,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0) )
            {
              v14 = *(_QWORD *)this;
              v27 = v24;
              v28 = v24;
              v29 = v23;
              v26 = 8716288;
              _m_prefetchw((const void *)(v14 + 40));
              do
                v15 = *(_DWORD *)(v14 + 40);
              while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 40), v15 & 0xFFFBFFFF, v15) );
              v16 = (*(_DWORD *)(v4 + 112) & 0x10000) != 0
                  ? (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))(*(_QWORD *)this + 3256LL))(
                      v4 + 24,
                      v13 + 24,
                      &v43,
                      v25,
                      &v42,
                      &v42,
                      &v26)
                  : ((__int64 (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))EngAlphaBlend)(
                      v4 + 24,
                      v13 + 24,
                      &v43,
                      v25,
                      &v42,
                      &v42,
                      &v26);
              if ( v16 && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 1u;
                *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
              }
            }
          }
        }
        v17 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v18 = *(_DWORD *)(v17 + 40);
        while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 40), v18 & 0xFFFBFFFF, v18) );
        if ( (*(_DWORD *)(v4 + 112) & 0x8000) != 0 )
          v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))(*(_QWORD *)this + 3280LL))(
                  v4 + 24,
                  v13 + 24,
                  0LL,
                  0LL,
                  &v42,
                  &v42,
                  1,
                  0);
        else
          v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))EngTransparentBlt)(
                  v4 + 24,
                  v13 + 24,
                  0LL,
                  0LL,
                  &v42,
                  &v42,
                  1,
                  0);
        if ( v19 && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v25);
        DEC_SHARE_REF_CNT(v13);
      }
    }
    bDeleteSurface(v12);
    SEMOBJ::vUnlock((SEMOBJ *)&v33);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v35);
    if ( v38[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v38);
  }
}
