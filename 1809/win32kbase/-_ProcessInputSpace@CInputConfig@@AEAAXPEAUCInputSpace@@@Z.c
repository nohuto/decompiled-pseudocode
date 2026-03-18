/*
 * XREFs of ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C003C024
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1C003D7B4 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?RegionIterator@CInputSpace@@QEBA?AVIter@1@XZ @ 0x1C00AD880 (-RegionIterator@CInputSpace@@QEBA-AVIter@1@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_ProcessInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct CInputSpaceRegion *v6; // r14
  struct CInputSpaceRegion *v7; // rbx
  int v8; // r15d
  int v9; // r12d
  signed int v10; // r13d
  _QWORD *v11; // rdi
  struct CInputSpaceRegion *v12; // rax
  unsigned int v13; // r9d
  struct CInputSpaceRegion *v14; // r8
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
  int v34; // [rsp+20h] [rbp-40h]
  __int128 v35; // [rsp+28h] [rbp-38h]
  _QWORD v36[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-10h]

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  v35 = 0uLL;
  v6 = 0LL;
  v7 = 0LL;
  CInputSpace::RegionIterator(a2, v36);
  v8 = (unsigned __int128)0LL >> 96;
  v9 = 0;
  v10 = 0;
  v11 = v37;
  v34 = 0;
  while ( v11 != (_QWORD *)v36[1] && v11 != (_QWORD *)-16LL )
  {
    v12 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v36);
    v13 = v34;
    v14 = v12;
    if ( v34 >= *(_DWORD *)v12 )
      v13 = *(_DWORD *)v12;
    v15 = *((_DWORD *)v12 + 1);
    v16 = *((_DWORD *)v12 + 2);
    v34 = v13;
    if ( v10 >= v15 )
      v10 = v15;
    *(_QWORD *)&v35 = __PAIR64__(v10, v13);
    if ( v9 <= v16 )
      v9 = v16;
    DWORD2(v35) = v9;
    if ( v8 <= *((_DWORD *)v14 + 3) )
      v8 = *((_DWORD *)v14 + 3);
    HIDWORD(v35) = v8;
    if ( (*((_BYTE *)v14 + 16) & 1) != 0 )
      v6 = v14;
    if ( !v7 || (unsigned int)PtInRect(v14, 0LL) )
      v7 = v14;
    v17 = *((_WORD *)v14 + 10);
    v18 = *((_WORD *)v14 + 11);
    if ( (unsigned __int16)v17 < 0x60u )
    {
      if ( v18 <= 0x60u )
        v17 = 96;
      else
        v17 = *((_WORD *)v14 + 11);
      *((_WORD *)v14 + 10) = v17;
    }
    if ( !v18 )
      *((_WORD *)v14 + 11) = v17;
    v11 = (_QWORD *)*v11;
    v37 = v11;
  }
  ExReleaseResourceLite(*(PERESOURCE *)v36[0]);
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
