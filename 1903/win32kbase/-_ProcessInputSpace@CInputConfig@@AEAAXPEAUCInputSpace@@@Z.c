/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C0066484
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0065C58 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0067544 (PtInRect.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C0067704 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct CInputSpaceRegion *v6; // r15
  struct CInputSpaceRegion *v7; // rbx
  struct CInputSpace *v8; // rdi
  int v9; // r12d
  int v10; // r13d
  struct CInputSpaceRegion *v11; // rax
  int v12; // r9d
  struct CInputSpaceRegion *v13; // r8
  unsigned int v14; // r10d
  int v15; // ecx
  int v16; // eax
  __int16 v17; // cx
  unsigned __int16 v18; // ax
  _OWORD *v19; // rax
  _OWORD *v20; // rcx
  __int64 v21; // r8
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // [rsp+20h] [rbp-40h]
  __int128 v35; // [rsp+28h] [rbp-38h]
  _QWORD v36[3]; // [rsp+40h] [rbp-20h] BYREF

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  v35 = 0uLL;
  v6 = 0LL;
  v7 = 0LL;
  v36[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v8 = (struct CInputSpace *)*((_QWORD *)a2 + 150);
  v9 = (unsigned __int128)0LL >> 96;
  v10 = 0;
  v34 = 0LL;
  v36[1] = (char *)a2 + 1200;
  while ( 1 )
  {
    v36[2] = v8;
    if ( v8 == (struct CInputSpace *)((char *)a2 + 1200) || v8 == (struct CInputSpace *)-16LL )
      break;
    v11 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v36);
    v12 = HIDWORD(v34);
    v13 = v11;
    v14 = v34;
    if ( (int)v34 >= *(_DWORD *)v11 )
      v14 = *(_DWORD *)v11;
    v15 = *((_DWORD *)v11 + 1);
    v16 = *((_DWORD *)v11 + 2);
    LODWORD(v34) = v14;
    if ( SHIDWORD(v34) >= v15 )
      v12 = v15;
    *(_QWORD *)&v35 = __PAIR64__(v12, v14);
    HIDWORD(v34) = v12;
    if ( v10 <= v16 )
      v10 = v16;
    DWORD2(v35) = v10;
    if ( v9 <= *((_DWORD *)v13 + 3) )
      v9 = *((_DWORD *)v13 + 3);
    HIDWORD(v35) = v9;
    if ( (*((_BYTE *)v13 + 16) & 1) != 0 )
      v6 = v13;
    if ( !v7 || (unsigned int)PtInRect(v13, 0LL) )
      v7 = v13;
    v17 = *((_WORD *)v13 + 10);
    v18 = *((_WORD *)v13 + 11);
    if ( (unsigned __int16)v17 < 0x60u )
    {
      if ( v18 <= 0x60u )
        v17 = 96;
      else
        v17 = *((_WORD *)v13 + 11);
      *((_WORD *)v13 + 10) = v17;
    }
    if ( !v18 )
      *((_WORD *)v13 + 11) = v17;
    v8 = *(struct CInputSpace **)v8;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  v19 = (_OWORD *)((char *)a2 + 24);
  *((_DWORD *)a2 + 10) = 0;
  *(_OWORD *)((char *)a2 + 24) = v35;
  if ( v6 )
    v7 = v6;
  v20 = (_OWORD *)((char *)a2 + 608);
  v21 = 4LL;
  if ( v7 )
  {
    *((_DWORD *)v7 + 4) |= 1u;
    do
    {
      *v20 = *(_OWORD *)v7;
      v20[1] = *((_OWORD *)v7 + 1);
      v20[2] = *((_OWORD *)v7 + 2);
      v20[3] = *((_OWORD *)v7 + 3);
      v20[4] = *((_OWORD *)v7 + 4);
      v20[5] = *((_OWORD *)v7 + 5);
      v20[6] = *((_OWORD *)v7 + 6);
      v20 += 8;
      v22 = *((_OWORD *)v7 + 7);
      v7 = (struct CInputSpaceRegion *)((char *)v7 + 128);
      *(v20 - 1) = v22;
      --v21;
    }
    while ( v21 );
    *v20 = *(_OWORD *)v7;
    v20[1] = *((_OWORD *)v7 + 1);
    v20[2] = *((_OWORD *)v7 + 2);
    v20[3] = *((_OWORD *)v7 + 3);
    v23 = *((_QWORD *)v7 + 8);
  }
  else
  {
    do
    {
      v24 = v19[1];
      *v20 = *v19;
      v25 = v19[2];
      v20[1] = v24;
      v26 = v19[3];
      v20[2] = v25;
      v27 = v19[4];
      v20[3] = v26;
      v28 = v19[5];
      v20[4] = v27;
      v29 = v19[6];
      v20[5] = v28;
      v30 = v19[7];
      v19 += 8;
      v20[6] = v29;
      v20 += 8;
      *(v20 - 1) = v30;
      --v21;
    }
    while ( v21 );
    v31 = v19[1];
    *v20 = *v19;
    v32 = v19[2];
    v20[1] = v31;
    v33 = v19[3];
    v23 = *((_QWORD *)v19 + 8);
    v20[2] = v32;
    v20[3] = v33;
  }
  *((_QWORD *)v20 + 8) = v23;
}
