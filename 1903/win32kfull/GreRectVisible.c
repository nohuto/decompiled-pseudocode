/*
 * XREFs of GreRectVisible @ 0x1C0075A84
 * Callers:
 *     NtGdiRectVisible @ 0x1C0075A20 (NtGdiRectVisible.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0075C14 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, LONG *a2)
{
  unsigned int v3; // ebx
  struct REGION *v4; // rax
  __int128 v5; // xmm0
  LONG x; // edx
  LONG v7; // r8d
  char *v8; // rcx
  LONG v10; // eax
  LONG v11; // edx
  DC *v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h]
  struct REGION *v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h]
  _BYTE v19[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[2]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v21; // [rsp+A0h] [rbp-60h]
  char v22[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-38h]
  struct _POINTL v24[2]; // [rsp+140h] [rbp+40h] BYREF
  struct _POINTL v25; // [rsp+150h] [rbp+50h] BYREF
  struct _POINTL v26; // [rsp+158h] [rbp+58h] BYREF
  LONG v27; // [rsp+160h] [rbp+60h]
  LONG v28; // [rsp+164h] [rbp+64h]
  LONG v29; // [rsp+168h] [rbp+68h]
  LONG v30; // [rsp+16Ch] [rbp+6Ch]

  v12[0] = 0LL;
  v12[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v12, a1);
  if ( !v12[0] )
  {
    EngSetLastError(6u);
    v3 = -1;
    goto LABEL_11;
  }
  v3 = 1;
  v20[0] = 0LL;
  v20[1] = 0LL;
  v21 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v12, 1);
  if ( (v19[24] & 1) != 0 )
  {
    v4 = XDCOBJ::prgnEffRao(v12);
    v5 = *(_OWORD *)a2;
    v15 = v4;
    *(_OWORD *)&v24[0].x = v5;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v13, (struct XDCOBJ *)v12, 0x80000204);
    if ( (*(_DWORD *)(v13 + 32) & 1) != 0 )
    {
      EXFORMOBJ::vOrder((EXFORMOBJ *)&v13, (struct _RECTL *)v24);
      EXFORMOBJ::bXform((EXFORMOBJ *)&v13, v24, 2uLL);
      x = v24[0].x;
      v7 = v24[1].x;
      if ( v14 )
      {
        x = v24[0].x + 1;
        v7 = v24[1].x + 1;
        ++v24[0].x;
        ++v24[1].x;
      }
      v8 = (char *)v12[0] + 1024;
      if ( (*((_DWORD *)v12[0] + 10) & 1) == 0 )
        v8 = (char *)v12[0] + 1016;
      v24[0].x = *(_DWORD *)v8 + x;
      v24[1].x = *(_DWORD *)v8 + v7;
      v24[0].y += *((_DWORD *)v8 + 1);
      v24[1].y += *((_DWORD *)v8 + 1);
      v3 = RGNOBJ::bInside((RGNOBJ *)&v15, (struct _RECTL *)v24) == 2;
      goto LABEL_9;
    }
    v10 = a2[2];
    v11 = *a2;
    v25.y = a2[1];
    v26.x = v10;
    v26.y = v25.y;
    v27 = v10;
    v28 = a2[3];
    v30 = v28;
    v25.x = v11;
    v29 = v11;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v22);
    if ( v23 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v22, (struct EXFORMOBJ *)&v13, &v25)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v22, (struct EXFORMOBJ *)&v13, &v26, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v22) )
      {
        v18 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v17, (struct EPATHOBJ *)v22, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
        if ( v17 && v16[0] )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)v16, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v17, BYTE1(gafjRgnOp))
            && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v16) != 1 )
          {
            v3 = 2;
          }
        }
        else
        {
          EngSetLastError(8u);
          v3 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
        goto LABEL_18;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v3 = -1;
LABEL_18:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v22);
  }
LABEL_9:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
  if ( v20[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v20);
LABEL_11:
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v3;
}
