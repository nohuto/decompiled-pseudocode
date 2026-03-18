/*
 * XREFs of NtGdiUpdateColors @ 0x1C02B0E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0072B7C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C029EA98 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02B7D3C (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r10
  __int64 v5; // r9
  struct REGION *v6; // rax
  struct ECLIPOBJ *v7; // rdx
  unsigned int updated; // eax
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  _BYTE v11[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XLATEOBJ *v12; // [rsp+48h] [rbp-B8h] BYREF
  DC *v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i rclBounds; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v16[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v17; // [rsp+A0h] [rbp-60h]
  struct _CLIPOBJ v18; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v19; // [rsp+110h] [rbp+10h]
  int v20; // [rsp+118h] [rbp+18h]
  int v21; // [rsp+140h] [rbp+40h]
  __int64 v22; // [rsp+150h] [rbp+50h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v13) )
  {
    v2 = *((_QWORD *)v13[0] + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
    v16[0] = 0LL;
    v16[1] = 0LL;
    v17 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v13, 0);
    if ( (*(_DWORD *)(v2 + 2172) & 0x100) != 0 )
    {
      v3 = *((_QWORD *)v13[0] + 62);
      if ( v3 == *(_QWORD *)(v2 + 2552) )
      {
        v4 = *(_QWORD *)(v3 + 128);
        v5 = *((_QWORD *)v13[0] + 11);
        if ( (*((_DWORD *)v13[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v13, (DC *)((char *)v13[0] + 1032));
        if ( (v15[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v5 + 80) && *(_QWORD *)(v5 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v12, v4, v5);
            if ( v12 )
            {
              v6 = XDCOBJ::prgnEffRao(v13);
              v19 = 0LL;
              v20 = 0;
              v21 = 1;
              v22 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v18, v6, (DC *)((char *)v13[0] + 1032), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v18.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v13[0] + 9) & 0xE0) != 0 )
                {
                  rclBounds = (__m128i)v18.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v13, v7, &rclBounds);
                }
                ++*(_DWORD *)(v3 + 92);
                if ( (*(_DWORD *)(v2 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v3 + 24), &v18, v12);
                }
                else if ( (*(_DWORD *)(v3 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v2 + 2840))(
                              v3 + 24,
                              v3 + 24,
                              &v18,
                              v12,
                              &v18.rclBounds,
                              &v18.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v3 + 24,
                              v3 + 24,
                              &v18,
                              v12,
                              &v18.rclBounds,
                              &v18.rclBounds);
                }
                v1 = updated;
              }
              FreeThreadBufferWithTag(v12);
              v12 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v12);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)v13);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
    if ( v16[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v16);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  if ( v13[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v1;
}
