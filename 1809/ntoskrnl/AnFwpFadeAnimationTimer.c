/*
 * XREFs of AnFwpFadeAnimationTimer @ 0x140950440
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     BgpGxDrawRectangle @ 0x14016EF30 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14016F2E0 (BgpGetBitsPerPixel.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140950754 (LogFwStat.c)
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
  int v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // edi
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 n; // rbx
  int v27; // eax
  int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 i; // r10
  unsigned __int8 v37; // al
  unsigned int v38; // eax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 j; // r10
  unsigned __int8 v42; // al
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 k; // r9
  unsigned __int8 v47; // al
  unsigned int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 ii; // r10
  int v52; // eax
  int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // [rsp+20h] [rbp-58h]
  __int64 v58; // [rsp+28h] [rbp-50h]
  __int64 v59; // [rsp+30h] [rbp-48h] BYREF
  __int64 v60; // [rsp+38h] [rbp-40h]
  _BYTE v61[16]; // [rsp+40h] [rbp-38h] BYREF

  BgpFwAcquireLock();
  if ( byte_1404C75A1 )
  {
    LogFwStat(1LL, 6LL, 0LL);
    LogFwStat(1LL, 4LL, 0LL);
    v4 = dword_1404049E4;
    v5 = qword_140404A20;
    v6 = qword_140404A30;
    v7 = byte_1404049F0;
    v8 = byte_1404049F1;
    v9 = byte_1404049F2;
    v59 = qword_1404049E8;
    v58 = qword_140404A60;
    v57 = qword_140404A20;
    v60 = qword_140404A30;
    v10 = 10 * (dword_1404049E0 - dword_1404049E0 / (unsigned int)(dword_140406AD4 - dword_1404049E4));
    v13 = 0;
    if ( (unsigned int)BgpGetBitsPerPixel() == 24 )
    {
      if ( !v9 )
      {
        v33 = qword_140404A28;
        v34 = 0LL;
        v35 = *(_QWORD *)(v6 + 24);
        for ( i = *(_QWORD *)(qword_140404A28 + 24);
              (unsigned int)v34 < *(_DWORD *)(v33 + 12);
              v34 = (unsigned int)(v34 + 1) )
        {
          v37 = *(_BYTE *)(v34 + i);
          if ( v37 )
          {
            v38 = (v10 * v37) >> 10;
            *(_BYTE *)(v34 + v35) = v38;
            if ( v38 )
              ++v13;
          }
        }
        v5 = v57;
      }
      v23 = 0;
      if ( !v7 )
      {
        v39 = *(_QWORD *)(v11 + 24);
        v40 = 0LL;
        for ( j = *(_QWORD *)(v5 + 24); (unsigned int)v40 < *(_DWORD *)(v11 + 12); v40 = (unsigned int)(v40 + 1) )
        {
          v42 = *(_BYTE *)(v40 + v39);
          if ( v42 )
          {
            v43 = (v10 * v42) >> 10;
            *(_BYTE *)(v40 + j) = v43;
            if ( v43 )
              ++v23;
          }
        }
      }
      v32 = 0;
      if ( !v8 )
      {
        v44 = 0LL;
        v45 = *(_QWORD *)(v12 + 24);
        for ( k = *(_QWORD *)(v58 + 24); (unsigned int)v44 < *(_DWORD *)(v12 + 12); v44 = (unsigned int)(v44 + 1) )
        {
          v47 = *(_BYTE *)(v44 + v45);
          if ( v47 )
          {
            v48 = (v10 * v47) >> 10;
            *(_BYTE *)(v44 + k) = v48;
            if ( v48 )
              ++v32;
          }
        }
      }
    }
    else
    {
      if ( !v9 )
      {
        v14 = qword_140404A28;
        v15 = 0LL;
        v16 = *(_QWORD *)(v6 + 24);
        for ( m = *(_QWORD *)(qword_140404A28 + 24);
              (unsigned int)v15 < *(_DWORD *)(v14 + 12);
              v15 = (unsigned int)(v15 + 4) )
        {
          v18 = *(_DWORD *)(v15 + m);
          if ( v18 )
          {
            v19 = v13 + 1;
            v20 = (v10 * (unsigned __int8)v18) >> 10;
            *(_BYTE *)(v15 + v16) = v20;
            if ( !v20 )
              v19 = v13;
            v13 = v19 + 1;
            v21 = (v10 * *(unsigned __int8 *)((unsigned int)(v15 + 1) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v15 + 1) + v16) = v21;
            if ( !v21 )
              v13 = v19;
            v22 = (v10 * *(unsigned __int8 *)((unsigned int)(v15 + 2) + m)) >> 10;
            *(_BYTE *)((unsigned int)(v15 + 2) + v16) = v22;
            if ( v22 )
              ++v13;
          }
        }
        v5 = v57;
      }
      v23 = 0;
      if ( !v7 )
      {
        v24 = *(_QWORD *)(v11 + 24);
        v25 = 0LL;
        for ( n = *(_QWORD *)(v5 + 24); (unsigned int)v25 < *(_DWORD *)(v11 + 12); v25 = (unsigned int)(v25 + 4) )
        {
          v27 = *(_DWORD *)(v25 + v24);
          if ( v27 )
          {
            v28 = v23 + 1;
            v29 = (v10 * (unsigned __int8)v27) >> 10;
            *(_BYTE *)(v25 + n) = v29;
            if ( !v29 )
              v28 = v23;
            v23 = v28 + 1;
            v30 = (v10 * *(unsigned __int8 *)((unsigned int)(v25 + 1) + v24)) >> 10;
            *(_BYTE *)((unsigned int)(v25 + 1) + n) = v30;
            if ( !v30 )
              v23 = v28;
            v31 = (v10 * *(unsigned __int8 *)((unsigned int)(v25 + 2) + v24)) >> 10;
            *(_BYTE *)((unsigned int)(v25 + 2) + n) = v31;
            if ( v31 )
              ++v23;
          }
        }
      }
      v32 = 0;
      if ( !v8 )
      {
        v49 = 0LL;
        v50 = *(_QWORD *)(v12 + 24);
        for ( ii = *(_QWORD *)(v58 + 24); (unsigned int)v49 < *(_DWORD *)(v12 + 12); v49 = (unsigned int)(v49 + 4) )
        {
          v52 = *(_DWORD *)(v49 + v50);
          if ( v52 )
          {
            v53 = v32 + 1;
            v54 = (v10 * (unsigned __int8)v52) >> 10;
            *(_BYTE *)(v49 + ii) = v54;
            if ( !v54 )
              v53 = v32;
            v32 = v53 + 1;
            v55 = (v10 * *(unsigned __int8 *)((unsigned int)(v49 + 1) + v50)) >> 10;
            *(_BYTE *)((unsigned int)(v49 + 1) + ii) = v55;
            if ( !v55 )
              v32 = v53;
            v56 = (v10 * *(unsigned __int8 *)((unsigned int)(v49 + 2) + v50)) >> 10;
            *(_BYTE *)((unsigned int)(v49 + 2) + ii) = v56;
            if ( v56 )
              ++v32;
          }
        }
      }
    }
    LogFwStat(0LL, 4LL, 0LL);
    LogFwStat(1LL, 3LL, 0LL);
    if ( !v9 )
    {
      BgpGxDrawRectangle(v60, (__int64)&v59);
      v9 = v13 == 0;
    }
    if ( !v7 )
    {
      if ( !v4 && !v23 || (BgpGxDrawRectangle(v57, (__int64)&xmmword_140404A00), !v23) )
        v7 = 1;
    }
    if ( !v8 )
    {
      if ( !v4 && !v32 || (BgpGxDrawRectangle(v58, (__int64)&xmmword_140404A38), !v32) )
        v8 = 1;
    }
    LogFwStat(0LL, 3LL, 0LL);
    LogFwStat(0LL, 6LL, v61);
    if ( v13 || v32 || v23 )
    {
      byte_1404049F0 = v7;
      byte_1404049F1 = v8;
      dword_1404049E0 = v10 / 0xA;
      dword_1404049E4 = v4 + 1;
      byte_1404049F2 = v9;
    }
    else
    {
      byte_1404C75A1 = 0;
      KeCancelTimer(&Timer);
      KeSetEvent(&stru_1404DCE90, 0, 0);
    }
  }
  BgpFwReleaseLock();
}
