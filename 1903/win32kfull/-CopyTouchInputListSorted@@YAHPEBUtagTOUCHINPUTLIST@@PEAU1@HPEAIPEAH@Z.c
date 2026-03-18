/*
 * XREFs of ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01DE010
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DE258 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall CopyTouchInputListSorted(
        const struct tagTOUCHINPUTLIST *a1,
        struct tagTOUCHINPUTLIST *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 *v9; // rsi
  int v10; // r13d
  unsigned int v11; // r11d
  __int64 v12; // rdx
  __int128 v13; // xmm3
  __int128 v14; // xmm2
  __int128 v15; // xmm4
  __int64 v16; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // edx
  unsigned __int64 v26; // r10
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  _OWORD v32[3]; // [rsp+38h] [rbp-50h] BYREF

  memset(v32, 0, sizeof(v32));
  v9 = (__int128 *)*((_QWORD *)a1 + 1);
  v10 = *((_DWORD *)a1 + 1);
  v11 = 1;
  while ( 2 )
  {
    v12 = 4LL;
    if ( v10 )
    {
      v13 = *v9;
      v32[0] = *v9;
      v32[1] = v9[1];
      v14 = v32[1];
      v15 = v9[2];
      v32[2] = v15;
      if ( (DWORD1(v32[1]) & 0xFFFFFF00) != 0
        || (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v32[1], 8)) & 0xFFFFFFF8) != 0 )
      {
        v16 = 1004LL;
LABEL_5:
        UserSetLastError(v16, v12, v7, v8);
        return 0LL;
      }
      v18 = (_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v32[1], 4)) & 0xF) - 4;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
          goto LABEL_17;
        v20 = v19 - 4;
        if ( !v20 )
        {
          v23 = 1;
          goto LABEL_19;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          v23 = 2;
          goto LABEL_19;
        }
        if ( (unsigned int)(v21 - 1) < 2 )
        {
LABEL_17:
          v16 = RtlNtStatusToDosError(-1073741811);
          goto LABEL_5;
        }
        v22 = -1;
      }
      else
      {
        v22 = 3;
      }
      if ( v22 == -1 )
        goto LABEL_17;
      v23 = 4;
LABEL_19:
      if ( v11 != v23 )
      {
        if ( v11 == 1 )
        {
          v11 = v23;
        }
        else if ( v23 != 1 )
        {
          goto LABEL_17;
        }
      }
      v24 = *((_DWORD *)a2 + 1);
      v25 = v24;
      v26 = *((_QWORD *)&v32[0] + 1);
      while ( 1 )
      {
        if ( !v25 )
          goto LABEL_31;
        v27 = v25 - 1;
        v8 = *((_QWORD *)a2 + 1);
        v7 = 6 * v27;
        if ( v26 >= *(_QWORD *)(v8 + 48 * v27 + 8)
          && (v26 != *(_QWORD *)(v8 + 48 * v27 + 8) || (unsigned int)v14 >= *(_DWORD *)(v8 + 48 * v27 + 16)) )
        {
          break;
        }
        v28 = 6LL * v25;
        *(_OWORD *)(v8 + 8 * v28) = *(_OWORD *)(v8 + 48 * v27);
        *(_OWORD *)(v8 + 8 * v28 + 16) = *(_OWORD *)(v8 + 48 * v27 + 16);
        *(_OWORD *)(v8 + 8 * v28 + 32) = *(_OWORD *)(v8 + 48 * v27 + 32);
        --v25;
      }
      v29 = *((_QWORD *)a2 + 1) + 48LL * (v25 - 1);
      if ( v26 != *(_QWORD *)(v29 + 8) || (_DWORD)v14 != *(_DWORD *)(v29 + 16) )
      {
LABEL_31:
        v30 = 6LL * v25;
        v31 = *((_QWORD *)a2 + 1);
        *(_OWORD *)(v31 + 8 * v30) = v13;
        *(_OWORD *)(v31 + 8 * v30 + 16) = v14;
        *(_OWORD *)(v31 + 8 * v30 + 32) = v15;
        *((_DWORD *)a2 + 1) = v24 + 1;
        --v10;
        v9 += 3;
        continue;
      }
      goto LABEL_17;
    }
    break;
  }
  if ( a4 )
    *a4 = v11;
  return 1LL;
}
