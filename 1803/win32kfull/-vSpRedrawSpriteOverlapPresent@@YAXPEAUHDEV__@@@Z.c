/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C007A1D4
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x1C007A128 (GreRedrawSpriteOverlapPresent.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00C7FE4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE2C8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02510A4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0256250 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawSpriteOverlapPresent(HDEV a1)
{
  HDEV v1; // rbx
  struct REGION *v2; // rdx
  unsigned int v3; // esi
  struct REGION *v4; // rdi
  int v5; // r15d
  int v6; // r12d
  int v7; // eax
  int v8; // edx
  int v9; // r14d
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  REGION *v14; // r14
  int v15; // edi
  struct _RECTL v16; // xmm0
  struct REGION *v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v19; // [rsp+58h] [rbp-B0h] BYREF
  REGION *v20; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v21[192]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v22[4]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v23[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v24[16]; // [rsp+14Ch] [rbp+44h] BYREF
  char v25; // [rsp+15Ch] [rbp+54h]
  __int64 v26; // [rsp+180h] [rbp+78h]
  __int64 v27; // [rsp+198h] [rbp+90h]
  int v28; // [rsp+1A0h] [rbp+98h]
  int v29; // [rsp+1C8h] [rbp+C0h]
  __int64 v30; // [rsp+1D8h] [rbp+D0h]
  _BYTE v31[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v32[16]; // [rsp+1ECh] [rbp+E4h] BYREF
  char v33; // [rsp+1FCh] [rbp+F4h]
  __int64 v34; // [rsp+220h] [rbp+118h]
  __int64 v35; // [rsp+238h] [rbp+130h]
  int v36; // [rsp+240h] [rbp+138h]
  int v37; // [rsp+268h] [rbp+160h]
  __int64 v38; // [rsp+278h] [rbp+170h]
  _BYTE v39[4]; // [rsp+288h] [rbp+180h] BYREF
  struct _RECTL v40; // [rsp+28Ch] [rbp+184h]
  char v41; // [rsp+29Ch] [rbp+194h]
  __int64 v42; // [rsp+2C0h] [rbp+1B8h]
  __int64 v43; // [rsp+2D8h] [rbp+1D0h]
  int v44; // [rsp+2E0h] [rbp+1D8h]
  int v45; // [rsp+308h] [rbp+200h]
  __int64 v46; // [rsp+318h] [rbp+210h]
  unsigned int v47; // [rsp+328h] [rbp+220h] BYREF
  struct _RECTL v48[20]; // [rsp+32Ch] [rbp+224h] BYREF
  _DWORD v49[84]; // [rsp+478h] [rbp+370h] BYREF

  v19 = a1;
  v1 = a1 + 20;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v21, (struct PDEVOBJ *)&v19);
  GreAcquireSemaphore(*((_QWORD *)v1 + 15));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_QWORD *)v1 + 15), 8LL);
  v2 = (struct REGION *)*((_QWORD *)v1 + 130);
  v3 = 0;
  if ( !v2 )
    goto LABEL_2;
  v4 = (struct REGION *)*((_QWORD *)v1 + 131);
  if ( !v4 )
    goto LABEL_2;
  v5 = 1;
  v27 = 0LL;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v26 = 0LL;
  v6 = 1;
  v35 = 0LL;
  v36 = 0;
  v37 = 1;
  v38 = 0LL;
  v34 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v23, v2, (struct ERECTL *)(v1 + 10), 0);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v31, v4, (struct ERECTL *)(v1 + 10), 0);
  ERECTL::bEmpty((ERECTL *)v24);
  v7 = ERECTL::bEmpty((ERECTL *)v32);
  if ( v7 == v8 )
  {
    if ( v25 || v33 )
    {
      if ( v25 != v33 )
        goto LABEL_28;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v23, 0, 0, 4u, 0x64u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v31, 0, 0, 4u, 0x64u);
      v9 = 1;
      while ( 1 )
      {
        v47 = 0;
        v10 = 0;
        v49[0] = 0;
        if ( v9 )
        {
          v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v23, 0x144u, &v47, 0LL);
          v10 = v47;
          v9 = v11;
        }
        if ( v5 )
        {
          v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)v31, 0x144u, v49, 0LL);
          v3 = v49[0];
          v5 = v12;
        }
        if ( v10 != v3 )
          break;
        v3 = 0;
        v13 = 0;
        if ( v10 )
        {
          while ( v49[4 * v13 + 1] == v48[v13].left
               && v49[4 * v13 + 2] == v48[v13].top
               && v49[4 * v13 + 3] == v48[v13].right
               && v49[4 * v13 + 4] == v48[v13].bottom )
          {
            if ( ++v13 >= v10 )
              goto LABEL_22;
          }
          v6 = 0;
          v9 = 0;
          v5 = 0;
        }
LABEL_22:
        if ( !v9 && !v5 )
          goto LABEL_26;
      }
      v3 = 0;
      v6 = 0;
    }
LABEL_26:
    if ( v6 )
    {
      REGION::vDeleteREGION(*((REGION **)v1 + 131));
      *((_QWORD *)v1 + 131) = 0LL;
      goto LABEL_2;
    }
  }
LABEL_28:
  v14 = (REGION *)*((_QWORD *)v1 + 130);
  *((_QWORD *)v1 + 130) = *((_QWORD *)v1 + 131);
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v1);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
  if ( !v18[0] )
    goto LABEL_45;
  if ( !v17[0] )
    goto LABEL_45;
  RGNOBJ::vSet((RGNOBJ *)v18, (struct _RECTL *)(v1 + 10));
  v20 = v14;
  if ( !RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)v18, (struct RGNOBJ *)&v20, BYTE4(gafjRgnOp)) )
    goto LABEL_45;
  v43 = 0LL;
  v44 = 0;
  v45 = 1;
  v46 = 0LL;
  v42 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v39, v17[0], (struct ERECTL *)(v1 + 10), 1);
  switch ( v41 )
  {
    case 0:
      v16 = *(struct _RECTL *)(v1 + 10);
      goto LABEL_37;
    case 1:
      v16 = v40;
LABEL_37:
      v48[0] = v16;
      v47 = 1;
      v15 = 0;
      goto LABEL_38;
    case 3:
      v15 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v39, 0, 0, 4u, 0x14u);
LABEL_38:
      if ( !v15 )
        goto LABEL_40;
      do
      {
        v15 = XCLIPOBJ::bEnum((XCLIPOBJ *)v39, 0x144u, &v47, 0LL);
LABEL_40:
        if ( v47 )
        {
          do
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v22, (struct _SPRITESTATE *)v1, &v48[v3]);
            if ( v22[0] )
              vSpRedrawArea((struct _SPRITESTATE *)v1, &v48[v3], 0);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v22);
            ++v3;
          }
          while ( v3 < v47 );
        }
        v3 = 0;
      }
      while ( v15 );
      break;
  }
LABEL_45:
  if ( v14 )
    REGION::vDeleteREGION(v14);
  *((_QWORD *)v1 + 131) = 0LL;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
LABEL_2:
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_QWORD *)v1 + 15));
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 15));
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v21);
}
