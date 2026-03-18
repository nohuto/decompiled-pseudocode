/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011B210
 * Callers:
 *     NtGdiInvertRgn @ 0x1C011B160 (NtGdiInvertRgn.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0079BB4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C008B6A0 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00C7FE4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngPaint @ 0x1C011CCC0 (EngPaint.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C011CDC4 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  DC *v3; // rcx
  REGION *v4; // rsi
  unsigned int v5; // ebx
  int v6; // edi
  DC *v7; // rcx
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct REGION *v12; // rax
  struct ECLIPOBJ *v13; // rdx
  DC *v14; // r8
  DC *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  REGION *v17[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-A8h] BYREF
  __m128i rclBounds; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h]
  char v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int v25[4]; // [rsp+100h] [rbp+0h] BYREF
  CLIPOBJ pco; // [rsp+110h] [rbp+10h] BYREF
  __int64 v27; // [rsp+160h] [rbp+60h]
  int v28; // [rsp+168h] [rbp+68h]
  int v29; // [rsp+190h] [rbp+90h]
  __int64 v30; // [rsp+1A0h] [rbp+A0h]

  MDCOBJ::MDCOBJ((MDCOBJ *)v16, a1);
  v3 = v16[0];
  v4 = 0LL;
  v5 = 0;
  if ( !v16[0] )
    return v5;
  if ( (*((_DWORD *)v16[0] + 9) & 0x10000) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, -2147483132);
    v6 = *(_DWORD *)(*((_QWORD *)v16[0] + 10) + 352LL) & 0x802;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 1);
    if ( v17[0] )
    {
      if ( v6 == 2050 )
      {
LABEL_5:
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v17) == 1 )
          goto LABEL_37;
        v7 = v16[0];
        *(_OWORD *)v25 = *(_OWORD *)((char *)v17[0] + 88);
        if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
        {
          XDCOBJ::vAccumulate((XDCOBJ *)v16, (struct ERECTL *)v25);
          v7 = v16[0];
        }
        if ( !*((_QWORD *)v7 + 63) )
        {
LABEL_37:
          v5 = 1;
        }
        else
        {
          v23 = 0LL;
          v24 = 0LL;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v16, 0);
          v8 = v17[0];
          v9 = v16[0];
          if ( !v17[0] )
            *((_DWORD *)v16[0] + 9) |= 0x10u;
          *((_QWORD *)v9 + 190) = v8;
          v10 = *((_QWORD *)v16[0] + 63);
          if ( (v22 & 1) != 0 && (unsigned int)DC::bTightenRao(v16[0]) )
          {
            v11 = *((_DWORD *)v16[0] + 10) & 1;
            v25[0] += *((_DWORD *)v16[0] + 2 * v11 + 356);
            v25[2] += *((_DWORD *)v16[0] + 2 * v11 + 356);
            v25[1] += *((_DWORD *)v16[0] + 2 * v11 + 357);
            v25[3] += *((_DWORD *)v16[0] + 2 * v11 + 357);
            GreScaleValuesInternal((struct XDCOBJ *)v16, v25, 4u);
            v12 = XDCOBJ::prgnEffRao(v16);
            v27 = 0LL;
            v28 = 0;
            v29 = 1;
            v30 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)v25, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
            {
              if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
              {
                rclBounds = (__m128i)pco.rclBounds;
                XDCOBJ::vAccumulateTight((struct _RECTL **)v16, v13, &rclBounds);
              }
              ++*(_DWORD *)(v10 + 92);
              EngPaint((SURFOBJ *)(v10 + 24), &pco, 0LL, 0LL, 0x606u);
            }
            v14 = v16[0];
            v5 = 1;
          }
          else
          {
            v5 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
          }
          *((_DWORD *)v14 + 9) |= 0x10u;
          *((_QWORD *)v14 + 190) = 0LL;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
        }
        if ( v6 != 2050 )
        {
          REGION::vDeleteREGION(v17[0]);
          v17[0] = v4;
        }
        goto LABEL_21;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v20);
      if ( v21 )
      {
        if ( v18[0] && RGNOBJ::bCreate((RGNOBJ *)v17, (struct EPATHOBJ *)v20, (struct EXFORMOBJ *)v18) )
        {
          v25[2] = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)v25, (struct EPATHOBJ *)v20, 1u, 0LL);
          if ( *(_QWORD *)v25 )
          {
            v4 = v17[0];
            v17[0] = *(REGION **)v25;
            if ( v25[2] == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v25);
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
            goto LABEL_5;
          }
          EngSetLastError(8u);
          if ( v25[2] == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v25);
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
    }
LABEL_21:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
    v3 = v16[0];
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v5;
}
