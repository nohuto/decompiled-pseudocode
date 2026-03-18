/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00CE528
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C0113D60 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     hsurfCreateCompatibleSurface @ 0x1C0008EB4 (hsurfCreateCompatibleSurface.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C008F874 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v6; // ett
  BOOL (__stdcall *v7)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v8; // rdx
  __int64 CompatibleSurface; // rax
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  signed __int32 v14; // ett
  int v15; // eax
  __int64 v16; // rdx
  signed __int32 v17; // ett
  int v18; // eax
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
  _QWORD v33[5]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v34[80]; // [rsp+118h] [rbp+10h] BYREF
  __m128i v35; // [rsp+168h] [rbp+60h] BYREF
  int v36; // [rsp+178h] [rbp+70h] BYREF
  __m128i si128; // [rsp+17Ch] [rbp+74h]
  int v38; // [rsp+18Ch] [rbp+84h]

  memset(v33, 0, 0x20uLL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v34, this);
    v32 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v2 = *(_QWORD *)this;
    v3 = *(_QWORD *)(*(_QWORD *)this + 2544LL);
    v4 = *(_QWORD *)(*(_QWORD *)this + 1800LL);
    v36 = 0;
    v38 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v35 = si128;
    *(_DWORD *)(v2 + 2432) = 0;
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
      v5 = *(_QWORD *)this;
      v26 = v21;
      v27 = v20;
      v28 = v19;
      v25 = 33488896;
      _m_prefetchw((const void *)(v5 + 40));
      do
        v6 = *(_DWORD *)(v5 + 40);
      while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 40), v6 & 0xFFFBFFFF, v6) );
      if ( (*(_DWORD *)(v3 + 112) & 0x10000) != 0 )
        v7 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3248LL);
      else
        v7 = EngAlphaBlend;
      v8 = 0LL;
      if ( v29 )
        v8 = v29 + 24;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v7)(
             v3 + 24,
             v8,
             &v36,
             v19,
             &v35,
             &v35,
             &v25)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2432LL) |= 2u;
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
      LOBYTE(v10) = 5;
      v12 = HmgShareLockCheck(CompatibleSurface, v10);
      if ( v12 )
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
                             0) )
        {
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
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
                               0) )
          {
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
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
              v13 = *(_QWORD *)this;
              v26 = v23;
              v27 = v23;
              v28 = v22;
              v25 = 8716288;
              _m_prefetchw((const void *)(v13 + 40));
              do
                v14 = *(_DWORD *)(v13 + 40);
              while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 40), v14 & 0xFFFBFFFF, v14) );
              v15 = (*(_DWORD *)(v3 + 112) & 0x10000) != 0
                  ? (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))(*(_QWORD *)this + 3248LL))(
                      v3 + 24,
                      v12 + 24,
                      &v36,
                      v24,
                      &v35,
                      &v35,
                      &v25)
                  : ((__int64 (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))EngAlphaBlend)(
                      v3 + 24,
                      v12 + 24,
                      &v36,
                      v24,
                      &v35,
                      &v35,
                      &v25);
              if ( v15 && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
              {
                *(_DWORD *)(*(_QWORD *)this + 2432LL) |= 1u;
                *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
              }
            }
          }
        }
        v16 = *(_QWORD *)this;
        _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
        do
          v17 = *(_DWORD *)(v16 + 40);
        while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 40), v17 & 0xFFFBFFFF, v17) );
        if ( (*(_DWORD *)(v3 + 112) & 0x8000) != 0 )
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))(*(_QWORD *)this + 3272LL))(
                  v3 + 24,
                  v12 + 24,
                  0LL,
                  0LL,
                  &v35,
                  &v35,
                  1,
                  0);
        else
          v18 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))EngTransparentBlt)(
                  v3 + 24,
                  v12 + 24,
                  0LL,
                  0LL,
                  &v35,
                  &v35,
                  1,
                  0);
        if ( v18 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
            *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
        DEC_SHARE_REF_CNT(v12);
      }
    }
    bDeleteSurface(v11);
    SEMOBJ::vUnlock((SEMOBJ *)&v32);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v34);
  }
}
