/*
 * XREFs of ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C015CBA0
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C015B89C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z @ 0x1C015E774 (-Send2FingerTap@CPTPEngine@@AEAAXPEAUPTPInput@@K@Z.c)
 */

__int64 __fastcall CPTPEngine::Process2FingerTap(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  __int64 v3; // r10
  int v4; // ebx
  char *v6; // rcx
  unsigned int v7; // eax
  __int64 v9; // rdx
  __int64 *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r14d
  int v13; // esi
  int v14; // r10d
  __int64 v15; // r11
  int v16; // eax
  unsigned int v17; // r10d
  bool v18; // zf
  int v19; // r8d
  int v20; // edx
  bool v21; // cc
  int v23; // eax
  int v24; // ebp
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // [rsp+48h] [rbp+10h] BYREF
  __int64 v35; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v35 = 0LL;
  v34 = 0LL;
  v6 = (char *)a2 + 52;
  v7 = *((_DWORD *)a2 + 12);
  if ( !v7 )
    return 0LL;
  v9 = v7;
  do
  {
    if ( *((_DWORD *)v6 + 3) )
    {
      ++v4;
      v10 = &v34;
      if ( v3 )
        v10 = &v35;
      *v10 = (__int64)v6;
      v3 = v34;
    }
    v6 += 96;
    --v9;
  }
  while ( v9 );
  if ( (unsigned int)(v4 - 1) > 1 )
    return 0LL;
  v11 = *(_DWORD *)(v3 + 4);
  v12 = *((_DWORD *)this + 4);
  v13 = *(_DWORD *)(v3 + 12);
  v14 = *((_DWORD *)this + 824);
  v15 = 296LL * (v11 % v12);
  if ( (v14 & 0x2000) == 0 )
  {
    if ( v4 != 2 )
      return 0LL;
    v24 = *(_DWORD *)(v35 + 12);
    v25 = *(_QWORD *)((char *)this + v15 + 1256);
    v26 = 296LL * (*(_DWORD *)(v35 + 4) % v12);
    v27 = *(_QWORD *)((char *)this + v26 + 1256);
    v28 = v25 - v27;
    if ( v25 < v27 )
      v28 = *(_QWORD *)((char *)this + v26 + 1256) - v25;
    if ( v28 > *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 31) / 0x3E8 )
      return 0LL;
    v29 = *(_DWORD *)((char *)this + v15 + 1192);
    if ( (v29 & 4) != 0 )
      return 0LL;
    v30 = *(_DWORD *)((char *)this + v26 + 1192);
    if ( (v30 & 4) != 0 || (v29 & 8) != 0 || (v30 & 8) != 0 )
      return 0LL;
    if ( (v13 & v24 & 0x40000) != 0 )
    {
      if ( (*((_DWORD *)this + 104) & 0x400) == 0 || (v14 & 0x10) != 0 )
        return 1LL;
      v31 = *(_QWORD *)((char *)this + v15 + 1216);
      v32 = v31 - *(_QWORD *)((char *)this + v26 + 1216);
      LODWORD(v31) = HIDWORD(v31) - HIDWORD(*(_QWORD *)((char *)this + v26 + 1216));
      v21 = (int)v31 * (int)v31 + v32 * v32 <= (unsigned __int64)*((unsigned int *)this + 74);
LABEL_20:
      if ( v21 )
        CPTPEngine::Send2FingerTap(this, a2, *(_DWORD *)((char *)this + v15 + 1324));
      return 1LL;
    }
    if ( !*((_DWORD *)a2 + 10) )
    {
      *((_DWORD *)this + 824) = v14 | 0x2000;
      if ( (v13 & 0x40000) != 0 )
      {
        v33 = *(_QWORD *)((char *)this + v15 + 1216);
LABEL_46:
        *((_QWORD *)this + 385) = v33;
        return 1LL;
      }
      if ( (v24 & 0x40000) != 0 )
      {
        v33 = *(_QWORD *)((char *)this + v26 + 1216);
        goto LABEL_46;
      }
    }
    return 1LL;
  }
  if ( v4 == 1 )
  {
    if ( (v13 & 0x40000) != 0 && (*((_DWORD *)this + 824) & 1) == a3 )
    {
      v16 = *(_DWORD *)((char *)this + v15 + 1192);
      if ( (v16 & 4) == 0
        && (v16 & 8) == 0
        && ((v16 & 0x80u) == 0
         || *(_QWORD *)((char *)this + v15 + 1272) - *(_QWORD *)((char *)this + v15 + 1264) < *((_QWORD *)this + 12)
                                                                                            * (unsigned __int64)*((unsigned int *)this + 27)
                                                                                            / 0x3E8) )
      {
        v17 = v14 & 0xFFFFDFFF;
        v18 = (*((_DWORD *)this + 104) & 0x400) == 0;
        *((_DWORD *)this + 824) = v17;
        if ( v18 || (v17 & 0x10) != 0 )
          return 1LL;
        v19 = *(_QWORD *)((char *)this + v15 + 1216) - *((_QWORD *)this + 385);
        v20 = HIDWORD(*(_QWORD *)((char *)this + v15 + 1216)) - HIDWORD(*((_QWORD *)this + 385));
        v21 = v20 * v20 + v19 * v19 <= (unsigned __int64)*((unsigned int *)this + 74);
        goto LABEL_20;
      }
    }
    if ( (v13 & 0x20000) != 0 && (*((_DWORD *)this + 824) & 1) == a3 )
    {
      v23 = *(_DWORD *)((char *)this + v15 + 1192);
      if ( (v23 & 4) == 0 && (v23 & 8) == 0 )
        return 1LL;
    }
  }
  *((_DWORD *)this + 824) = v14 & 0xFFFFDFFF;
  return 0LL;
}
