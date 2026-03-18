/*
 * XREFs of WheaTelemetryLogErrorRecord @ 0x14034177C
 * Callers:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     RtlStringCbPrintfA @ 0x14018C564 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

char __fastcall WheaTelemetryLogErrorRecord(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  __int128 v4; // xmm0
  unsigned int v5; // eax
  int v6; // r8d
  int v7; // r10d
  int v8; // r9d
  unsigned __int16 v9; // si
  unsigned __int16 v10; // r12
  _OWORD *PoolWithTag; // r15
  SIZE_T v12; // rdi
  _BYTE *v13; // r14
  ULONG_PTR v14; // rdi
  unsigned __int16 v15; // r11
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // bx
  __int64 v18; // rdx
  _QWORD *v19; // r8
  signed __int64 v20; // r10
  _OWORD *v21; // r9
  __int128 v22; // xmm1
  __int16 v23; // r11
  int v24; // r9d
  unsigned __int16 v25; // r11
  int v26; // r10d
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v29; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v30; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v31; // [rsp+64h] [rbp-A4h]
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int128 v35; // [rsp+88h] [rbp-80h]
  __int128 v36; // [rsp+B8h] [rbp-50h]
  __int128 v37; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v39; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v40; // [rsp+108h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+148h] [rbp+40h] BYREF
  __int64 *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  __int128 *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int128 *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int128 *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  __int128 *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  __int64 *v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  int *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  _OWORD *v59; // [rsp+1C8h] [rbp+C0h]
  int v60; // [rsp+1D0h] [rbp+C8h]
  int v61; // [rsp+1D4h] [rbp+CCh]
  __int16 *v62; // [rsp+1D8h] [rbp+D0h]
  __int64 v63; // [rsp+1E0h] [rbp+D8h]
  _BYTE *v64; // [rsp+1E8h] [rbp+E0h]
  int v65; // [rsp+1F0h] [rbp+E8h]
  int v66; // [rsp+1F4h] [rbp+ECh]
  unsigned int *v67; // [rsp+1F8h] [rbp+F0h]
  __int64 v68; // [rsp+200h] [rbp+F8h]
  ULONG_PTR v69; // [rsp+208h] [rbp+100h]
  int v70; // [rsp+210h] [rbp+108h]
  int v71; // [rsp+214h] [rbp+10Ch]
  _DWORD *v72; // [rsp+218h] [rbp+110h]
  __int64 v73; // [rsp+220h] [rbp+118h]
  __int64 v74; // [rsp+228h] [rbp+120h]
  _DWORD v75[2]; // [rsp+230h] [rbp+128h] BYREF
  char pszDest[64]; // [rsp+238h] [rbp+130h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  LOBYTE(v2) = 1;
  v32 = v1;
  if ( *(_DWORD *)(v1 + 12) == 1 )
  {
    v4 = *(_OWORD *)(v1 + 32);
    v31 = *(_WORD *)(v1 + 20);
    v5 = *(_DWORD *)(v1 + 104);
    v37 = v4;
    v30 = v5;
    v38 = *(_OWORD *)(v1 + 48);
    v39 = *(_OWORD *)(v1 + 64);
    v40 = *(_OWORD *)(v1 + 80);
    v6 = *(unsigned __int8 *)(v1 + 25);
    v7 = *(unsigned __int8 *)(v1 + 26);
    v8 = *(unsigned __int8 *)(v1 + 29);
    v34 = *(_QWORD *)(v1 + 96);
    RtlStringCbPrintfA(
      pszDest,
      0x40uLL,
      "%u/%u/%u %u:%02u:%02u (UTC)",
      v8,
      *(unsigned __int8 *)(v1 + 28),
      *(unsigned __int8 *)(v1 + 30) + 100 * *(unsigned __int8 *)(v1 + 31),
      v7,
      v6,
      (unsigned __int8)*(_DWORD *)(v1 + 24));
    v9 = *(_WORD *)(v1 + 10);
    v10 = 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v9, 0x61656857u);
    LOWORD(v28) = 0;
    if ( PoolWithTag )
      LOWORD(v28) = v9;
    v12 = 8LL * v9;
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x61656857u);
    if ( v13 )
      v10 = v9;
    v2 = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x61656857u);
    v33 = (__int64)v2;
    v14 = (ULONG_PTR)v2;
    v15 = 0;
    if ( v2 )
      v15 = v9;
    v16 = 0;
    if ( v9 )
    {
      v17 = v28;
      v18 = 0LL;
      v19 = v2;
      v20 = v13 - (_BYTE *)v2;
      v21 = PoolWithTag;
      do
      {
        v2 = *(_QWORD **)(a1 + 32);
        v22 = *(_OWORD *)&v2[v18 + 22];
        v35 = *(_OWORD *)&v2[v18 + 16];
        v36 = v22;
        if ( v17 < v16 )
          *v21 = *(_OWORD *)&v2[v18 + 18];
        if ( v10 < v16 )
        {
          v2 = (_QWORD *)HIDWORD(*((_QWORD *)&v35 + 1));
          *(_QWORD *)((char *)v19 + v20) = HIDWORD(*((_QWORD *)&v35 + 1));
        }
        if ( v15 < v16 )
        {
          LOBYTE(v2) = v36;
          *v19 = (int)v36;
        }
        ++v16;
        v18 += 9LL;
        ++v21;
        ++v19;
      }
      while ( v16 < v9 );
      v1 = v32;
      v14 = v33;
    }
    if ( stru_1404266C0.LevelPlus1 > 2 )
    {
      LOBYTE(v2) = TlgKeywordOn(&stru_1404266C0, 0x800000000000uLL);
      if ( (_BYTE)v2 )
      {
        v32 = v30;
        v42 = &v33;
        v33 = 0x1000000LL;
        v29 = v10;
        LOWORD(v30) = v23;
        v43 = 8LL;
        TlgCreateSz(&pDesc, pszDest);
        v46 = 8LL;
        v47 = &v37;
        v45 = &v32;
        v49 = &v38;
        v51 = &v39;
        v53 = &v40;
        v55 = &v34;
        v57 = &v28;
        v60 = 16 * v24;
        v62 = (__int16 *)&v29;
        v65 = 8 * v10;
        v67 = &v30;
        v70 = 8 * v25;
        v72 = v75;
        v75[0] = v31;
        v48 = 16LL;
        v50 = 16LL;
        v52 = 16LL;
        v54 = 16LL;
        v56 = 8LL;
        v58 = 2LL;
        v59 = PoolWithTag;
        v61 = v26;
        v63 = 2LL;
        v64 = v13;
        v66 = v26;
        v68 = 2LL;
        v69 = v14;
        v71 = v26;
        v73 = 2LL;
        v74 = v1;
        v75[1] = v26;
        LOBYTE(v2) = TlgWrite(&stru_1404266C0, &unk_140394A3F, 0LL, 0LL, 0x12u, &pData);
      }
    }
    if ( PoolWithTag )
      LOBYTE(v2) = ExFreeHeapPool((ULONG_PTR)PoolWithTag);
    if ( v13 )
      LOBYTE(v2) = ExFreeHeapPool((ULONG_PTR)v13);
    if ( v14 )
      LOBYTE(v2) = ExFreeHeapPool(v14);
  }
  return (char)v2;
}
