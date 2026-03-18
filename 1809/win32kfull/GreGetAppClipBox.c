/*
 * XREFs of GreGetAppClipBox @ 0x1C00FA8EC
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00FA890 (NtGdiGetAppClipBox.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  unsigned int v3; // edi
  unsigned __int16 v5; // ax
  int v6; // ebx
  unsigned __int64 v7; // r9
  DC *v8; // r15
  LONG v9; // r8d
  LONG v10; // r10d
  char *v11; // rcx
  LONG v12; // edx
  LONG v13; // r8d
  LONG v14; // r10d
  int v15; // ecx
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  LONG v19; // edx
  LONG v20; // eax
  LONG x; // r9d
  LONG v22; // r11d
  LONG v23; // eax
  LONG v24; // ebx
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // ecx
  LONG y; // r8d
  bool v29; // cc
  LONG v30; // r10d
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // ecx
  DC *v44[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v45[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct REGION *v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+74h] [rbp-8Ch]
  _BYTE v49[32]; // [rsp+80h] [rbp-80h] BYREF
  char v50[80]; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v51; // [rsp+F0h] [rbp-10h] BYREF
  LONG v52; // [rsp+F8h] [rbp-8h]
  LONG v53; // [rsp+FCh] [rbp-4h]
  LONG v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+104h] [rbp+4h]
  LONG v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]

  v3 = 0;
  v44[0] = 0LL;
  v44[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v45);
  XDCOBJ::vLock((XDCOBJ *)v44, a1);
  if ( !v44[0] )
  {
    EngSetLastError(6u);
    v6 = 0;
    goto LABEL_94;
  }
  v5 = *((_WORD *)v44[0] + 6);
  if ( v5 == 1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v50);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v49, (struct XDCOBJ *)v44, 1);
    if ( (v49[24] & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v44) )
      {
        *(_QWORD *)a2 = 0LL;
        v6 = 3;
        *((_QWORD *)a2 + 1) = 0LL;
LABEL_92:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v49);
LABEL_94:
        v3 = v6;
        goto LABEL_95;
      }
LABEL_86:
      v6 = 0;
      goto LABEL_92;
    }
    v46 = XDCOBJ::prgnEffRao(v44);
    *(_OWORD *)a2 = *(_OWORD *)((char *)v46 + 88);
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      v8 = v44[0];
      v6 = 1;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v47, (struct XDCOBJ *)v44, 0x80000402);
      v7 = v47;
      if ( !v47 )
        goto LABEL_86;
      v8 = v44[0];
      v9 = a2[2];
      v10 = a2[1];
      v11 = (char *)v44[0] + 1024;
      if ( (*((_DWORD *)v44[0] + 10) & 1) == 0 )
        v11 = (char *)v44[0] + 1016;
      v12 = *a2 - *(_DWORD *)v11;
      *a2 = v12;
      v13 = v9 - *(_DWORD *)v11;
      a2[2] = v13;
      v14 = v10 - *((_DWORD *)v11 + 1);
      a2[1] = v14;
      v15 = a2[3] - *((_DWORD *)v11 + 1);
      a2[3] = v15;
      v16 = *(_DWORD *)(v7 + 32);
      if ( (v16 & 1) != 0 )
      {
        if ( (v16 & 0x43) == 0x43 || (v17 = (unsigned int)bCvtPts1(v7, a2, 2LL) == 0, v18 = 0, !v17) )
          v18 = 1;
        if ( v48 )
        {
          ++*a2;
          ++a2[2];
        }
        if ( v18 )
          v6 = RGNOBJ::iComplexity((RGNOBJ *)&v46);
        else
          v6 = 0;
      }
      else
      {
        v51.x = v12;
        v52 = v13;
        v54 = v12;
        v55 = v15;
        v56 = v13;
        v57 = v15;
        v51.y = v14;
        v53 = v14;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v47, &v51, 4LL);
        v19 = v52;
        v20 = v52;
        x = v51.x;
        v22 = v54;
        if ( v51.x < v52 )
          v20 = v51.x;
        if ( v20 >= v54 )
        {
          v23 = v54;
        }
        else
        {
          v23 = v52;
          if ( v51.x < v52 )
            v23 = v51.x;
        }
        v24 = v56;
        if ( v23 >= v56 )
        {
          v26 = v56;
        }
        else
        {
          v25 = v52;
          if ( v51.x < v52 )
            v25 = v51.x;
          if ( v25 >= v54 )
          {
            v26 = v54;
          }
          else
          {
            v26 = v52;
            if ( v51.x < v52 )
              v26 = v51.x;
          }
        }
        v27 = v53;
        y = v51.y;
        v29 = v51.y < v53;
        v30 = v55;
        *a2 = v26;
        v31 = v27;
        if ( v29 )
          v31 = y;
        if ( v31 >= v30 )
        {
          v32 = v30;
        }
        else
        {
          v32 = v27;
          if ( y < v27 )
            v32 = y;
        }
        if ( v32 >= v57 )
        {
          v34 = v57;
        }
        else
        {
          v33 = v27;
          if ( y < v27 )
            v33 = y;
          if ( v33 >= v30 )
          {
            v34 = v30;
          }
          else
          {
            v34 = v27;
            if ( y < v27 )
              v34 = y;
          }
        }
        a2[1] = v34;
        v35 = v19;
        if ( x > v19 )
          v35 = x;
        if ( v35 <= v22 )
        {
          v36 = v22;
        }
        else
        {
          v36 = v19;
          if ( x > v19 )
            v36 = x;
        }
        if ( v36 <= v24 )
        {
          v19 = v24;
        }
        else
        {
          v37 = v19;
          if ( x > v19 )
            v37 = x;
          if ( v37 <= v22 )
          {
            v19 = v22;
          }
          else if ( x > v19 )
          {
            v19 = x;
          }
        }
        a2[2] = v19;
        v38 = v27;
        if ( y > v27 )
          v38 = y;
        if ( v38 <= v30 )
        {
          v39 = v30;
        }
        else
        {
          v39 = v27;
          if ( y > v27 )
            v39 = y;
        }
        if ( v39 <= v57 )
        {
          v27 = v57;
        }
        else
        {
          v40 = v27;
          if ( y > v27 )
            v40 = y;
          if ( v40 <= v30 )
          {
            v27 = v30;
          }
          else if ( y > v27 )
          {
            v27 = y;
          }
        }
        a2[3] = v27;
        v6 = 3;
      }
    }
    if ( v6 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
      {
        v41 = *a2;
        v42 = a2[2];
        if ( *a2 > v42 )
        {
          *a2 = v42;
          a2[2] = v41;
        }
      }
    }
    goto LABEL_92;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, v5);
  EngSetLastError(6u);
LABEL_95:
  DCOBJ::~DCOBJ((DCOBJ *)v44);
  return v3;
}
