/*
 * XREFs of ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0042CC4
 * Callers:
 *     GreRedrawSpriteOverlapPresent @ 0x1C0042BD4 (GreRedrawSpriteOverlapPresent.c)
 * Callees:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003E928 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0043FD4 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047FEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0162510 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int128 v16; // xmm0
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
  unsigned int v39; // [rsp+288h] [rbp+180h] BYREF
  _OWORD v40[20]; // [rsp+28Ch] [rbp+184h] BYREF
  _DWORD v41[84]; // [rsp+3D8h] [rbp+2D0h] BYREF

  v19 = a1;
  v1 = a1 + 22;
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
  if ( v8 == v7 )
  {
    if ( v25 || v33 )
    {
      if ( v25 != v33 )
        goto LABEL_28;
      memset(&v41[1], 0, 0x140uLL);
      memset(v40, 0, sizeof(v40));
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v23, 0, 0, 4u, 0x64u);
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)v31, 0, 0, 4u, 0x64u);
      v9 = 1;
      while ( 1 )
      {
        v41[0] = 0;
        v10 = 0;
        v39 = 0;
        if ( v9 )
        {
          v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)v23, 0x144u, v41, 0LL);
          v10 = v41[0];
          v9 = v11;
        }
        if ( v5 )
        {
          v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)v31, 0x144u, &v39, 0LL);
          v3 = v39;
          v5 = v12;
        }
        if ( v10 != v3 )
          break;
        v3 = 0;
        v13 = 0;
        if ( v10 )
        {
          while ( LODWORD(v40[v13]) == v41[4 * v13 + 1]
               && DWORD1(v40[v13]) == v41[4 * v13 + 2]
               && DWORD2(v40[v13]) == v41[4 * v13 + 3]
               && HIDWORD(v40[v13]) == v41[4 * v13 + 4] )
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
  *(_QWORD *)((char *)&v40[4] + 12) = 0LL;
  DWORD1(v40[5]) = 0;
  HIDWORD(v40[7]) = 1;
  *(_QWORD *)((char *)&v40[8] + 12) = 0LL;
  *(_QWORD *)((char *)&v40[3] + 4) = 0LL;
  XCLIPOBJ::vSetup((XCLIPOBJ *)&v39, v17[0], (struct ERECTL *)(v1 + 10), 1);
  memset(v41, 0, 0x144uLL);
  if ( !LOBYTE(v40[1]) )
  {
    v16 = *(_OWORD *)(v1 + 10);
    goto LABEL_37;
  }
  if ( LOBYTE(v40[1]) == 1 )
  {
    v16 = v40[0];
LABEL_37:
    *(_OWORD *)&v41[1] = v16;
    v41[0] = 1;
    v15 = 0;
    goto LABEL_38;
  }
  if ( LOBYTE(v40[1]) == 3 )
  {
    v15 = 1;
    XCLIPOBJ::cEnumStart((XCLIPOBJ *)&v39, 0, 0, 4u, 0x14u);
LABEL_38:
    if ( !v15 )
      goto LABEL_40;
    do
    {
      v15 = XCLIPOBJ::bEnum((XCLIPOBJ *)&v39, 0x144u, v41, 0LL);
LABEL_40:
      if ( v41[0] )
      {
        do
        {
          PIDLOCKSPRITEAREA::vLock(
            (PIDLOCKSPRITEAREA *)v22,
            (struct _SPRITESTATE *)v1,
            (struct _RECTL *)&v41[4 * v3 + 1]);
          if ( v22[0] )
            vSpRedrawArea((struct _SPRITESTATE *)v1, (struct _RECTL *)&v41[4 * v3 + 1], 0);
          PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v22);
          ++v3;
        }
        while ( v3 < v41[0] );
      }
      v3 = 0;
    }
    while ( v15 );
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
