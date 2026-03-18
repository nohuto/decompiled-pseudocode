/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x14098F480
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpGxDrawRectangle @ 0x140178640 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140178A38 (BgpGetBitsPerPixel.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x14098F79C (LogFwStat.c)
 */

void __fastcall AnFwpFadeAnimationTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // r12
  char v8; // r15
  char v9; // bp
  unsigned int v10; // r14d
  __int64 v11; // r9
  __int64 v12; // r11
  int v13; // esi
  __int64 v14; // r10
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 m; // rbx
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // edi
  int v23; // ebx
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 n; // rbx
  int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 i; // r10
  unsigned __int8 v35; // al
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 j; // r10
  unsigned __int8 v40; // al
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 k; // r9
  unsigned __int8 v45; // al
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 ii; // r10
  int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  _BYTE *v54; // [rsp+20h] [rbp-58h]
  __int64 v55; // [rsp+28h] [rbp-50h]
  __int64 v56; // [rsp+30h] [rbp-48h] BYREF
  _BYTE *v57; // [rsp+38h] [rbp-40h]
  __int64 v58; // [rsp+40h] [rbp-38h] BYREF

  v58 = 0LL;
  v56 = 0LL;
  BgpFwAcquireLock();
  if ( byte_1404F2AE1 )
  {
    LogFwStat(1LL, 6LL, 0LL);
    LogFwStat(1LL, 4LL, 0LL);
    v4 = dword_140429E34;
    v5 = qword_140429E70;
    v6 = qword_140429E80;
    v7 = byte_140429E40;
    v8 = byte_140429E41;
    v9 = byte_140429E42;
    v56 = qword_140429E38;
    v55 = qword_140429EB0;
    v54 = (_BYTE *)qword_140429E70;
    v57 = (_BYTE *)qword_140429E80;
    v10 = 10 * (dword_140429E30 - dword_140429E30 / (unsigned int)(dword_14042C034 - dword_140429E34));
    v13 = 0;
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      if ( !v9 )
      {
        v31 = qword_140429E78;
        v32 = 0LL;
        v33 = *(_QWORD *)(v6 + 24);
        for ( i = *(_QWORD *)(qword_140429E78 + 24);
              (unsigned int)v32 < *(_DWORD *)(v31 + 12);
              v32 = (unsigned int)(v32 + 1) )
        {
          v35 = *(_BYTE *)(v32 + i);
          if ( v35 )
          {
            v36 = (v10 * v35) >> 10;
            *(_BYTE *)(v32 + v33) = v36;
            if ( v36 )
              ++v13;
          }
        }
        v5 = (__int64)v54;
      }
      v22 = 0;
      if ( !v7 )
      {
        v37 = *(_QWORD *)(v11 + 24);
        v38 = 0LL;
        for ( j = *(_QWORD *)(v5 + 24); (unsigned int)v38 < *(_DWORD *)(v11 + 12); v38 = (unsigned int)(v38 + 1) )
        {
          v40 = *(_BYTE *)(v38 + v37);
          if ( v40 )
          {
            v41 = (v10 * v40) >> 10;
            *(_BYTE *)(v38 + j) = v41;
            if ( v41 )
              ++v22;
          }
        }
      }
      v23 = 0;
      if ( !v8 )
      {
        v42 = 0LL;
        v43 = *(_QWORD *)(v12 + 24);
        for ( k = *(_QWORD *)(v55 + 24); (unsigned int)v42 < *(_DWORD *)(v12 + 12); v42 = (unsigned int)(v42 + 1) )
        {
          v45 = *(_BYTE *)(v42 + v43);
          if ( v45 )
          {
            v46 = (v10 * v45) >> 10;
            *(_BYTE *)(v42 + k) = v46;
            if ( v46 )
              ++v23;
          }
        }
      }
    }
    else
    {
      if ( !v9 )
      {
        v14 = qword_140429E78;
        v15 = 0LL;
        v16 = *(_QWORD *)(v6 + 24);
        for ( m = *(_QWORD *)(qword_140429E78 + 24);
              (unsigned int)v15 < *(_DWORD *)(v14 + 12);
              v15 = (unsigned int)(v15 + 4) )
        {
          if ( *(_DWORD *)(v15 + m) )
          {
            v18 = v13 + 1;
            v19 = (v10 * *(unsigned __int8 *)(v15 + m)) >> 10;
            *(_BYTE *)(v15 + v16) = v19;
            if ( !v19 )
              v18 = v13;
            v13 = v18 + 1;
            v20 = (v10 * *(unsigned __int8 *)((unsigned int)(v15 + 1) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v15 + 1) + v16) = v20;
            if ( !v20 )
              v13 = v18;
            v21 = (v10 * *(unsigned __int8 *)((unsigned int)(v15 + 2) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v15 + 2) + v16) = v21;
            if ( v21 )
              ++v13;
          }
        }
        v5 = (__int64)v54;
      }
      v22 = 0;
      if ( !v7 )
      {
        v24 = *(_QWORD *)(v11 + 24);
        v25 = 0LL;
        for ( n = *(_QWORD *)(v5 + 24); (unsigned int)v25 < *(_DWORD *)(v11 + 12); v25 = (unsigned int)(v25 + 4) )
        {
          if ( *(_DWORD *)(v25 + v24) )
          {
            v27 = v22 + 1;
            v28 = (v10 * *(unsigned __int8 *)(v25 + v24)) >> 10;
            *(_BYTE *)(v25 + n) = v28;
            if ( !v28 )
              v27 = v22;
            v22 = v27 + 1;
            v29 = (v10 * *(unsigned __int8 *)((unsigned int)(v25 + 1) + v24)) >> 10;
            *(_BYTE *)((unsigned int)(v25 + 1) + n) = v29;
            if ( !v29 )
              v22 = v27;
            v30 = (v10 * *(unsigned __int8 *)((unsigned int)(v25 + 2) + v24)) >> 10;
            *(_BYTE *)((unsigned int)(v25 + 2) + n) = v30;
            if ( v30 )
              ++v22;
          }
        }
      }
      v23 = 0;
      if ( !v8 )
      {
        v47 = 0LL;
        v48 = *(_QWORD *)(v12 + 24);
        for ( ii = *(_QWORD *)(v55 + 24); (unsigned int)v47 < *(_DWORD *)(v12 + 12); v47 = (unsigned int)(v47 + 4) )
        {
          if ( *(_DWORD *)(v47 + v48) )
          {
            v50 = v23 + 1;
            v51 = (v10 * *(unsigned __int8 *)(v47 + v48)) >> 10;
            *(_BYTE *)(v47 + ii) = v51;
            if ( !v51 )
              v50 = v23;
            v23 = v50 + 1;
            v52 = (v10 * *(unsigned __int8 *)((unsigned int)(v47 + 1) + v48)) >> 10;
            *(_BYTE *)((unsigned int)(v47 + 1) + ii) = v52;
            if ( !v52 )
              v23 = v50;
            v53 = (v10 * *(unsigned __int8 *)((unsigned int)(v47 + 2) + v48)) >> 10;
            *(_BYTE *)((unsigned int)(v47 + 2) + ii) = v53;
            if ( v53 )
              ++v23;
          }
        }
      }
    }
    LogFwStat(0LL, 4LL, 0LL);
    LogFwStat(1LL, 3LL, 0LL);
    if ( !v9 )
    {
      BgpGxDrawRectangle(v57, (__int64)&v56);
      v9 = v13 == 0;
    }
    if ( !v7 )
    {
      if ( !v4 && !v22 || (BgpGxDrawRectangle(v54, (__int64)&xmmword_140429E50), !v22) )
        v7 = 1;
    }
    if ( !v8 )
    {
      if ( !v4 && !v23 || (BgpGxDrawRectangle((_BYTE *)v55, (__int64)&xmmword_140429E88), !v23) )
        v8 = 1;
    }
    LogFwStat(0LL, 3LL, 0LL);
    LogFwStat(0LL, 6LL, &v58);
    if ( v13 || v23 || v22 )
    {
      byte_140429E40 = v7;
      byte_140429E41 = v8;
      dword_140429E30 = v10 / 0xA;
      dword_140429E34 = v4 + 1;
      byte_140429E42 = v9;
    }
    else
    {
      byte_1404F2AE1 = 0;
      KeCancelTimer(&Timer);
      KeSetEvent(&stru_140509420, 0, 0);
    }
  }
  BgpFwReleaseLock();
}
