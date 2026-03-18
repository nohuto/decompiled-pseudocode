/*
 * XREFs of NtGdiUpdateColors @ 0x1C0288210
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C027552C (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C028DA9C (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
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
  struct _XLATEOBJ *v10; // [rsp+48h] [rbp-C0h] BYREF
  struct _RECTL *v11; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v14; // [rsp+98h] [rbp-70h]
  int v15; // [rsp+A0h] [rbp-68h]
  int v16; // [rsp+A4h] [rbp-64h]
  struct _CLIPOBJ v17; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v18; // [rsp+118h] [rbp+10h]
  int v19; // [rsp+120h] [rbp+18h]
  int v20; // [rsp+148h] [rbp+40h]
  __int64 v21; // [rsp+158h] [rbp+50h]

  v1 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)&v11, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v11) )
  {
    v2 = *(_QWORD *)&v11[3].left;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v13, (struct XDCOBJ *)&v11, 0);
    if ( (*(_DWORD *)(v2 + 2164) & 0x100) != 0 )
    {
      v3 = *(_QWORD *)&v11[31].right;
      if ( v3 == *(_QWORD *)(v2 + 2544) )
      {
        v4 = *(_QWORD *)(v3 + 128);
        v5 = *(_QWORD *)&v11[6].left;
        if ( (v11[2].top & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v11, (struct ERECTL *)&v11[90]);
        if ( (v13[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v5 + 80) && *(_QWORD *)(v5 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v10, v4, v5);
            if ( v10 )
            {
              v6 = XDCOBJ::prgnEffRao((DC **)&v11);
              v18 = 0LL;
              v19 = 0;
              v21 = 0LL;
              v20 = 1;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v17, v6, (struct ERECTL *)&v11[90], 0);
              if ( ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (v11[2].top & 0xE0) != 0 )
                {
                  *(RECTL *)&v12[1] = v17.rclBounds;
                  XDCOBJ::vAccumulateTight(&v11, v7, (__m128i *)&v12[1]);
                }
                ++*(_DWORD *)(v3 + 92);
                if ( (*(_DWORD *)(v2 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v3 + 24), &v17, v10);
                }
                else if ( (*(_DWORD *)(v3 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v2 + 2832))(
                              v3 + 24,
                              v3 + 24,
                              &v17,
                              v10,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v3 + 24,
                              v3 + 24,
                              &v17,
                              v10,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                v1 = updated;
              }
              FreeThreadBufferWithTag(v10);
              v10 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v10);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)&v11);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
  }
  if ( v11 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v11);
  return v1;
}
