/*
 * XREFs of NtGdiUpdateColors @ 0x1C029BF50
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0288828 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02A10DC (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  int v2; // r14d
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r10
  __int64 v6; // r9
  struct REGION *v7; // rax
  struct ECLIPOBJ *v8; // rdx
  int updated; // eax
  struct _XLATEOBJ *v11; // [rsp+40h] [rbp-C0h] BYREF
  DC *v12[2]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[32]; // [rsp+58h] [rbp-A8h] BYREF
  __m128i rclBounds; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v15[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v16[80]; // [rsp+B0h] [rbp-50h] BYREF
  struct _CLIPOBJ v17; // [rsp+100h] [rbp+0h] BYREF
  __int64 v18; // [rsp+138h] [rbp+38h]
  __int64 v19; // [rsp+150h] [rbp+50h]
  int v20; // [rsp+158h] [rbp+58h]
  int v21; // [rsp+180h] [rbp+80h]
  __int64 v22; // [rsp+190h] [rbp+90h]

  v1 = 0;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v12) )
  {
    v3 = *((_QWORD *)v12[0] + 6);
    DCOBJ::DCOBJ((DCOBJ *)v16);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v12, 0);
    if ( (*(_DWORD *)(v3 + 2172) & 0x100) != 0 )
    {
      v4 = *((_QWORD *)v12[0] + 62);
      if ( v4 == *(_QWORD *)(v3 + 2552) )
      {
        v5 = *(_QWORD *)(v4 + 128);
        v6 = *((_QWORD *)v12[0] + 11);
        if ( (*((_DWORD *)v12[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v12, (DC *)((char *)v12[0] + 1032));
        if ( (v15[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v6 + 80) && *(_QWORD *)(v6 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v11, v5, v6);
            if ( v11 )
            {
              v7 = XDCOBJ::prgnEffRao(v12);
              v18 = 0LL;
              v19 = 0LL;
              v20 = 0;
              v21 = 1;
              v22 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v17, v7, (DC *)((char *)v12[0] + 1032), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
              {
                v2 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v12[0] + 9) & 0xE0) != 0 )
                {
                  rclBounds = (__m128i)v17.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v12, v8, &rclBounds);
                }
                ++*(_DWORD *)(v4 + 92);
                if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v4 + 24), &v17, v11);
                }
                else if ( (*(_DWORD *)(v4 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v3 + 2840))(
                              v4 + 24,
                              v4 + 24,
                              &v17,
                              v11,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v4 + 24,
                              v4 + 24,
                              &v17,
                              v11,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                v2 = updated;
              }
              FreeThreadBufferWithTag(v11);
              v11 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v11);
          }
          else
          {
            v2 = 1;
          }
        }
        else
        {
          v2 = XDCOBJ::bFullScreen((XDCOBJ *)v12);
        }
      }
    }
    v1 = v2;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
    DCOBJ::~DCOBJ((DCOBJ *)v16);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v13);
  return v1;
}
