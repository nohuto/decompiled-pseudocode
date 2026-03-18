/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013CB98
 * Callers:
 *     NtGdiInvertRgn @ 0x1C013CA50 (NtGdiInvertRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C009DE80 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     EngPaint @ 0x1C013E320 (EngPaint.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013F0F8 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  REGION *v4; // r14
  int v5; // edi
  int v6; // esi
  DC *v7; // rcx
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // rdi
  char *v11; // rcx
  struct REGION *v12; // rax
  struct ECLIPOBJ *v13; // rdx
  DC *v14; // r8
  DC *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[32]; // [rsp+40h] [rbp-C0h] BYREF
  REGION *v18[7]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[2]; // [rsp+98h] [rbp-68h] BYREF
  __m128i rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v21[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-38h]
  char v23; // [rsp+D8h] [rbp-28h]
  _BYTE v24[96]; // [rsp+E0h] [rbp-20h] BYREF
  int v25[4]; // [rsp+140h] [rbp+40h] BYREF
  CLIPOBJ pco; // [rsp+150h] [rbp+50h] BYREF
  __int64 v27; // [rsp+188h] [rbp+88h]
  __int64 v28; // [rsp+1A0h] [rbp+A0h]
  int v29; // [rsp+1A8h] [rbp+A8h]
  int v30; // [rsp+1D0h] [rbp+D0h]
  __int64 v31; // [rsp+1E0h] [rbp+E0h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !v16[0] || (*((_DWORD *)v16[0] + 9) & 0x10000) != 0 )
    goto LABEL_37;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v16, -2147483132);
  v6 = *(_DWORD *)(*((_QWORD *)v16[0] + 122) + 340LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 1, 0);
  if ( !v18[0] )
  {
LABEL_36:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
LABEL_37:
    v3 = v5;
    goto LABEL_38;
  }
  if ( v6 == 2050 )
  {
LABEL_16:
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v18) == 1 )
      goto LABEL_33;
    v7 = v16[0];
    *(_OWORD *)v25 = *(_OWORD *)((char *)v18[0] + 88);
    if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v16, (struct ERECTL *)v25);
      v7 = v16[0];
    }
    if ( !*((_QWORD *)v7 + 62) )
    {
LABEL_33:
      v5 = 1;
    }
    else
    {
      DCOBJ::DCOBJ((DCOBJ *)v24);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v16, 0);
      v8 = v18[0];
      v9 = v16[0];
      if ( !v18[0] )
        *((_DWORD *)v16[0] + 9) |= 0x10u;
      *((_QWORD *)v9 + 142) = v8;
      v10 = *((_QWORD *)v16[0] + 62);
      if ( (v23 & 1) != 0 && (unsigned int)DC::bTightenRao(v16[0]) )
      {
        v11 = (char *)v16[0] + 1024;
        if ( (*((_DWORD *)v16[0] + 10) & 1) == 0 )
          v11 = (char *)v16[0] + 1016;
        v25[0] += *(_DWORD *)v11;
        v25[2] += *(_DWORD *)v11;
        v25[1] += *((_DWORD *)v11 + 1);
        v25[3] += *((_DWORD *)v11 + 1);
        GreScaleValuesInternal((struct XDCOBJ *)v16, v25, 4u);
        v12 = XDCOBJ::prgnEffRao(v16);
        v27 = 0LL;
        v28 = 0LL;
        v29 = 0;
        v30 = 1;
        v31 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)v25, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
          {
            rclBounds = (__m128i)pco.rclBounds;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v16, v13, &rclBounds);
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
      *((_QWORD *)v14 + 142) = 0LL;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      DCOBJ::~DCOBJ((DCOBJ *)v24);
    }
    if ( v6 != 2050 )
    {
      REGION::vDeleteREGION(v18[0]);
      v18[0] = v4;
    }
    goto LABEL_36;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
  if ( v22 )
  {
    if ( !v19[0] || !RGNOBJ::bCreate((RGNOBJ *)v18, (struct EPATHOBJ *)v21, (struct EXFORMOBJ *)v19) )
      goto LABEL_7;
    *(_QWORD *)v25 = 0LL;
    v25[2] = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)v25, (struct EPATHOBJ *)v21, 1u, 0LL);
    if ( !*(_QWORD *)v25 )
    {
      EngSetLastError(8u);
      if ( v25[2] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v25);
      goto LABEL_7;
    }
    v4 = v18[0];
    v18[0] = *(REGION **)v25;
    if ( v25[2] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v25);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
    goto LABEL_16;
  }
  EngSetLastError(8u);
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
LABEL_38:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v16);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
  return v3;
}
