/*
 * XREFs of GreRectVisible @ 0x1C009F264
 * Callers:
 *     NtGdiRectVisible @ 0x1C009F210 (NtGdiRectVisible.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, LONG *a2)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // ebx
  struct REGION *v6; // rax
  __int128 v7; // xmm0
  LONG x; // edx
  LONG v9; // r8d
  char *v10; // rcx
  LONG v11; // eax
  LONG v12; // edx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  struct REGION *v18; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+58h] [rbp-A8h] BYREF
  DC *v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+74h] [rbp-8Ch]
  char v23[40]; // [rsp+78h] [rbp-88h] BYREF
  char v24[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h]
  _BYTE v26[32]; // [rsp+120h] [rbp+20h] BYREF
  char v27[80]; // [rsp+140h] [rbp+40h] BYREF
  struct _POINTL v28[2]; // [rsp+190h] [rbp+90h] BYREF
  struct _POINTL v29; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _POINTL v30; // [rsp+1A8h] [rbp+A8h] BYREF
  LONG v31; // [rsp+1B0h] [rbp+B0h]
  LONG v32; // [rsp+1B4h] [rbp+B4h]
  LONG v33; // [rsp+1B8h] [rbp+B8h]
  LONG v34; // [rsp+1BCh] [rbp+BCh]

  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v23);
  XDCOBJ::vLock((XDCOBJ *)&v20, a1);
  if ( !v20 )
    goto LABEL_4;
  v4 = *((_WORD *)v20 + 6);
  v5 = 1;
  if ( v4 == 1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v27);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v26, (struct XDCOBJ *)&v20, 1);
    if ( (v26[24] & 1) == 0 )
    {
LABEL_16:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v26);
      goto LABEL_17;
    }
    v6 = XDCOBJ::prgnEffRao(&v20);
    v7 = *(_OWORD *)a2;
    v18 = v6;
    *(_OWORD *)&v28[0].x = v7;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)&v20, 0x80000204);
    if ( (*(_DWORD *)(v14 + 32) & 1) != 0 )
    {
      EXFORMOBJ::vOrder((EXFORMOBJ *)&v14, (struct _RECTL *)v28);
      EXFORMOBJ::bXform((EXFORMOBJ *)&v14, v28, 2uLL);
      x = v28[0].x;
      v9 = v28[1].x;
      if ( v15 )
      {
        x = v28[0].x + 1;
        v9 = v28[1].x + 1;
        ++v28[0].x;
        ++v28[1].x;
      }
      v10 = (char *)v20 + 1024;
      if ( (*((_DWORD *)v20 + 10) & 1) == 0 )
        v10 = (char *)v20 + 1016;
      v28[0].x = *(_DWORD *)v10 + x;
      v28[1].x = *(_DWORD *)v10 + v9;
      v28[0].y += *((_DWORD *)v10 + 1);
      v28[1].y += *((_DWORD *)v10 + 1);
      v5 = RGNOBJ::bInside((RGNOBJ *)&v18, (struct _RECTL *)v28) == 2;
      goto LABEL_16;
    }
    v11 = a2[2];
    v12 = *a2;
    v29.y = a2[1];
    v30.x = v11;
    v30.y = v29.y;
    v31 = v11;
    v32 = a2[3];
    v34 = v32;
    v29.x = v12;
    v33 = v12;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v24);
    if ( v25 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v24, (struct EXFORMOBJ *)&v14, &v29)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v24, (struct EXFORMOBJ *)&v14, &v30, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v24) )
      {
        v16 = 0LL;
        v17 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v16, (struct EPATHOBJ *)v24, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
        if ( v16 && v19[0] )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)v19, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v16, BYTE1(gafjRgnOp))
            && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v19) != 1 )
          {
            v5 = 2;
          }
        }
        else
        {
          EngSetLastError(8u);
          v5 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
        goto LABEL_15;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v5 = -1;
LABEL_15:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v24);
    goto LABEL_16;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, v4);
LABEL_4:
  EngSetLastError(6u);
  v5 = -1;
LABEL_17:
  DCOBJ::~DCOBJ((DCOBJ *)&v20);
  return v5;
}
