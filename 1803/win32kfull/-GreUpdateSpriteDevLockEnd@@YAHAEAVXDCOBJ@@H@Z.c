/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810
 * Callers:
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C008F138 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F1EC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C009B318 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     GreUpdateSprite @ 0x1C007B280 (GreUpdateSprite.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C024B22C (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(struct XDCOBJ *a1, int a2)
{
  unsigned int v3; // r13d
  unsigned int updated; // edi
  HDEV v6; // rsi
  __int64 v7; // r10
  struct tagSIZE v8; // rax
  HDC v9; // rdi
  HWND v10; // r12
  __int64 v11; // rcx
  struct REGION *v12; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  struct tagRECT v16; // xmm0
  int v17; // r12d
  LONG *v18; // r12
  unsigned int left; // eax
  __int64 v20; // r9
  LONG v21; // r8d
  LONG top; // eax
  LONG v23; // edx
  LONG right; // eax
  LONG v25; // eax
  LONG bottom; // ecx
  NTSTATUS v27; // eax
  int v28; // [rsp+88h] [rbp-80h]
  struct tagSIZE v29; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v30; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v32; // [rsp+A8h] [rbp-60h] BYREF
  __m256i Parameter; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-30h]
  struct tagSIZE *v35; // [rsp+E0h] [rbp-28h]
  HDC v36; // [rsp+E8h] [rbp-20h]
  POINTL *v37; // [rsp+F0h] [rbp-18h]
  __int64 v38; // [rsp+F8h] [rbp-10h]
  struct tagRECT *v39; // [rsp+100h] [rbp-8h]
  __int64 v40; // [rsp+108h] [rbp+0h]
  int v41; // [rsp+110h] [rbp+8h]
  int v42; // [rsp+114h] [rbp+Ch]
  int v43; // [rsp+118h] [rbp+10h]
  int v44; // [rsp+11Ch] [rbp+14h]
  unsigned int v45; // [rsp+120h] [rbp+18h]
  int v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+148h] [rbp+40h]
  unsigned int v48; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v49[20]; // [rsp+15Ch] [rbp+54h] BYREF

  v3 = 0;
  updated = 0;
  HDEV = UserGetHDEV();
  v6 = (HDEV)HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( !g_pDwmState )
  {
    GdiUpdateSpriteDevLockEnd(a1);
    goto LABEL_10;
  }
  if ( (unsigned int)GreGetBounds(**(_QWORD **)a1, &v32, 4LL) )
  {
    v7 = *(_QWORD *)a1;
    v8 = *(struct tagSIZE *)(*(_QWORD *)a1 + 520LL);
    v29 = v8;
    v30 = *(struct REGION **)(v7 + 1576);
    if ( !v30 )
    {
      EtwDevLockEndUpdate(
        *(_QWORD *)(v7 + 480),
        (unsigned int)v8.cx,
        (unsigned int)v29.cy,
        (unsigned int)v32.left,
        v32.top,
        v32.right,
        v32.bottom);
      v9 = **(HDC **)a1;
      v10 = *(HWND *)(*(_QWORD *)a1 + 480LL);
      if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
      {
        Parameter.m256i_i64[0] = (__int64)v6;
        v35 = &v29;
        Parameter.m256i_i64[1] = (__int64)v10;
        v39 = &v32;
        *(_OWORD *)&Parameter.m256i_u64[2] = 0LL;
        v34 = 0LL;
        v36 = v9;
        v37 = &gptlZero;
        v38 = 0LL;
        v40 = 0LL;
        v41 = 0;
        v42 = 1075838976;
        v43 = 1;
        v44 = a2;
        v45 = 0;
        v27 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000uLL, 1u, 0LL);
        updated = v45;
        if ( v27 < 0 )
          updated = 0;
      }
      else
      {
        updated = GreUpdateSpriteInternal(
                    v6,
                    v10,
                    0LL,
                    0LL,
                    0LL,
                    &v29,
                    v9,
                    (struct tagPOINT *)&gptlZero,
                    0,
                    0LL,
                    0x40200000u,
                    &v32,
                    0LL,
                    1,
                    a2);
      }
      goto LABEL_8;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v30) != 1 )
    {
      v15 = 1424LL;
      if ( (*(_DWORD *)(v14 + 40) & 1) != 0 )
        v15 = 1432LL;
      RGNOBJ::bOffset((RGNOBJ *)&v30, (struct _POINTL *)(v14 + v15));
      v40 = 0LL;
      v41 = 0;
      v46 = 1;
      v47 = 0LL;
      v37 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&Parameter, v30, (struct ERECTL *)&v32, 1);
      switch ( Parameter.m256i_i8[20] )
      {
        case 1:
          v16 = *(struct tagRECT *)((char *)Parameter.m256i_i64 + 4);
LABEL_20:
          v17 = 0;
          v48 = 1;
          v49[0] = v16;
          v28 = 0;
LABEL_21:
          updated = 1;
          if ( v17 )
            goto LABEL_36;
          while ( 1 )
          {
            if ( v48 )
            {
              do
              {
                v18 = (LONG *)&v49[v3];
                left = v32.left;
                v20 = (unsigned int)*v18;
                if ( (int)v20 < v32.left )
                {
                  *v18 = v32.left;
                  v20 = left;
                }
                v21 = v18[1];
                top = v32.top;
                if ( v21 < v32.top )
                {
                  v18[1] = v32.top;
                  v21 = top;
                }
                v23 = v18[2];
                right = v32.right;
                if ( v23 > v32.right )
                {
                  v18[2] = v32.right;
                  v23 = right;
                }
                v25 = v18[3];
                bottom = v32.bottom;
                if ( v25 > v32.bottom )
                {
                  v18[3] = v32.bottom;
                  v25 = bottom;
                }
                EtwDevLockEndTightUpdate(
                  *(_QWORD *)(*(_QWORD *)a1 + 480LL),
                  (unsigned int)v29.cx,
                  (unsigned int)v29.cy,
                  v20,
                  v21,
                  v23,
                  v25);
                if ( !(unsigned int)GreUpdateSprite(
                                      v6,
                                      *(HWND *)(*(_QWORD *)a1 + 480LL),
                                      0LL,
                                      0LL,
                                      0LL,
                                      &v29,
                                      **(HDC **)a1,
                                      (struct tagPOINT *)&gptlZero,
                                      0,
                                      0LL,
                                      0x40200000u,
                                      (struct tagRECT *)&v49[v3],
                                      0LL,
                                      1,
                                      a2) )
                  updated = 0;
                ++v3;
              }
              while ( v3 < v48 );
              v17 = v28;
            }
            v3 = 0;
            if ( !v17 )
              break;
LABEL_36:
            v17 = XCLIPOBJ::bEnum((XCLIPOBJ *)&Parameter, 0x144u, &v48, 0LL);
            v28 = v17;
          }
          break;
        case 0:
          v16 = v32;
          goto LABEL_20;
        case 3:
          v17 = 1;
          v28 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)&Parameter, 0, 0, 4u, 0x14u);
          goto LABEL_21;
      }
    }
  }
LABEL_8:
  v11 = *(_QWORD *)a1;
  v12 = *(struct REGION **)(*(_QWORD *)a1 + 1576LL);
  if ( v12 && v12 != prgnDefault )
  {
    FreeObject(*(_QWORD *)(*(_QWORD *)a1 + 1576LL), 4LL);
    v11 = *(_QWORD *)a1;
  }
  *(_QWORD *)(v11 + 1576) = 0LL;
LABEL_10:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return updated;
}
