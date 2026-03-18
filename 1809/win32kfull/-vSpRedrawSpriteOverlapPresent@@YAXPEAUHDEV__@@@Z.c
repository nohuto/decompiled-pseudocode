/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0045DE4
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x1C0045CF4 (GreRedrawSpriteOverlapPresent.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00106E8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096D68 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015A944 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vSpRedrawSpriteOverlapPresent(HDEV a1)
{
  HDEV v1; // rbx
  struct REGION *v2; // rdx
  int v3; // esi
  __int64 v4; // rdx
  struct REGION *v5; // rdi
  int v6; // r15d
  int v7; // r12d
  int v8; // eax
  int v9; // edx
  int v10; // r14d
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // edx
  REGION *v15; // r12
  unsigned int v16; // edi
  struct _RECTL v17; // xmm0
  int v18; // eax
  struct _RECTL *v19; // r14
  __int64 v20; // r15
  struct REGION *v21[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-C0h] BYREF
  HDEV v23; // [rsp+58h] [rbp-B0h] BYREF
  REGION *v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v25[24]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v26[4]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v27[4]; // [rsp+148h] [rbp+40h] BYREF
  char v28[16]; // [rsp+14Ch] [rbp+44h] BYREF
  char v29; // [rsp+15Ch] [rbp+54h]
  __int64 v30; // [rsp+180h] [rbp+78h]
  __int64 v31; // [rsp+198h] [rbp+90h]
  int v32; // [rsp+1A0h] [rbp+98h]
  int v33; // [rsp+1C8h] [rbp+C0h]
  __int64 v34; // [rsp+1D8h] [rbp+D0h]
  _BYTE v35[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v36[16]; // [rsp+1ECh] [rbp+E4h] BYREF
  char v37; // [rsp+1FCh] [rbp+F4h]
  __int64 v38; // [rsp+220h] [rbp+118h]
  __int64 v39; // [rsp+238h] [rbp+130h]
  int v40; // [rsp+240h] [rbp+138h]
  int v41; // [rsp+268h] [rbp+160h]
  __int64 v42; // [rsp+278h] [rbp+170h]
  _BYTE v43[4]; // [rsp+288h] [rbp+180h] BYREF
  struct _RECTL v44; // [rsp+28Ch] [rbp+184h]
  char v45; // [rsp+29Ch] [rbp+194h]
  __int64 v46; // [rsp+2C0h] [rbp+1B8h]
  __int64 v47; // [rsp+2D8h] [rbp+1D0h]
  int v48; // [rsp+2E0h] [rbp+1D8h]
  int v49; // [rsp+308h] [rbp+200h]
  __int64 v50; // [rsp+318h] [rbp+210h]
  int v51; // [rsp+328h] [rbp+220h] BYREF
  struct _RECTL v52[20]; // [rsp+32Ch] [rbp+224h] BYREF
  _DWORD v53[84]; // [rsp+478h] [rbp+370h] BYREF

  v23 = a1;
  v1 = a1 + 22;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v25, (struct PDEVOBJ *)&v23);
  GreAcquireSemaphore(*((_QWORD *)v1 + 15));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_QWORD *)v1 + 15), 8LL);
  v2 = (struct REGION *)*((_QWORD *)v1 + 130);
  v3 = 0;
  if ( !v2 )
    goto LABEL_2;
  v5 = (struct REGION *)*((_QWORD *)v1 + 131);
  if ( !v5 )
    goto LABEL_2;
  v6 = 1;
  v31 = 0LL;
  v32 = 0;
  v33 = 1;
  v34 = 0LL;
  v30 = 0LL;
  v7 = 1;
  v39 = 0LL;
  v40 = 0;
  v41 = 1;
  v42 = 0LL;
  v38 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v27, v2, (struct ERECTL *)(v1 + 10), 0);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v35, v5, (struct ERECTL *)(v1 + 10), 0);
  ERECTL::bEmpty((ERECTL *)v28);
  v8 = ERECTL::bEmpty((ERECTL *)v36);
  if ( v9 == v8 )
  {
    if ( v29 || v37 )
    {
      if ( v29 != v37 )
        goto LABEL_28;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v27, 0, 0, 4u, 0x64u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v35, 0, 0, 4u, 0x64u);
      v10 = 1;
      while ( 1 )
      {
        v51 = 0;
        v11 = 0;
        v53[0] = 0;
        if ( v10 )
        {
          v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)v27, 0x144u, &v51, 0LL);
          v11 = v51;
          v10 = v12;
        }
        if ( v6 )
        {
          v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v35, 0x144u, v53, 0LL);
          v3 = v53[0];
          v6 = v13;
        }
        if ( v11 != v3 )
          break;
        v3 = 0;
        v14 = 0;
        if ( v11 )
        {
          while ( v53[4 * v14 + 1] == v52[v14].left
               && v53[4 * v14 + 2] == v52[v14].top
               && v53[4 * v14 + 3] == v52[v14].right
               && v53[4 * v14 + 4] == v52[v14].bottom )
          {
            if ( ++v14 >= v11 )
              goto LABEL_22;
          }
          v7 = 0;
          v10 = 0;
          v6 = 0;
        }
LABEL_22:
        if ( !v10 && !v6 )
          goto LABEL_26;
      }
      v3 = 0;
      v7 = 0;
    }
LABEL_26:
    if ( v7 )
    {
      REGION::vDeleteREGION(*((REGION **)v1 + 131));
      *((_QWORD *)v1 + 131) = 0LL;
      goto LABEL_2;
    }
  }
LABEL_28:
  v15 = (REGION *)*((_QWORD *)v1 + 130);
  *((_QWORD *)v1 + 130) = *((_QWORD *)v1 + 131);
  vSpComputeUnlockedRegion((struct _SPRITESTATE *)v1);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v22);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
  if ( !v22[0] )
    goto LABEL_46;
  if ( !v21[0] )
    goto LABEL_46;
  RGNOBJ::vSet((RGNOBJ *)v22, (struct _RECTL *)(v1 + 10));
  v24 = v15;
  if ( !RGNOBJ::bMerge((RGNOBJ *)v21, (struct RGNOBJ *)v22, (struct RGNOBJ *)&v24, BYTE4(gafjRgnOp)) )
    goto LABEL_46;
  v47 = 0LL;
  v48 = 0;
  v49 = 1;
  v50 = 0LL;
  v46 = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)v43, v21[0], (struct ERECTL *)(v1 + 10), 1);
  switch ( v45 )
  {
    case 0:
      v17 = *(struct _RECTL *)(v1 + 10);
      goto LABEL_37;
    case 1:
      v17 = v44;
LABEL_37:
      v52[0] = v17;
      v51 = 1;
      v16 = 1;
      goto LABEL_38;
    case 3:
      v3 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v43, 0, 0, 4u, 0x14u);
      v16 = v51;
LABEL_38:
      if ( !v3 )
        goto LABEL_40;
      do
      {
        v18 = XCLIPOBJ::bEnum((XCLIPOBJ *)v43, 0x144u, &v51, 0LL);
        v16 = v51;
        v3 = v18;
LABEL_40:
        if ( v16 )
        {
          v19 = v52;
          v20 = v16;
          do
          {
            PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v26, (struct _SPRITESTATE *)v1, v19);
            if ( v26[0] )
              vSpRedrawArea((struct _SPRITESTATE *)v1, v19, 0);
            PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v26);
            ++v19;
            --v20;
          }
          while ( v20 );
        }
      }
      while ( v3 );
      break;
  }
LABEL_46:
  if ( v15 )
    REGION::vDeleteREGION(v15);
  *((_QWORD *)v1 + 131) = 0LL;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
LABEL_2:
  EtwTraceGreLockReleaseSemaphore(L"hsem", *((_QWORD *)v1 + 15));
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 15));
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v25, v4);
}
