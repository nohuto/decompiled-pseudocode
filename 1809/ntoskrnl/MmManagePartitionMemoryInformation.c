/*
 * XREFs of MmManagePartitionMemoryInformation @ 0x140609464
 * Callers:
 *     NtManagePartition @ 0x140609170 (NtManagePartition.c)
 * Callees:
 *     MiQueryMemoryListInformation @ 0x140090FB4 (MiQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetChannelInformation @ 0x1406096FC (MiGetChannelInformation.c)
 */

__int64 __fastcall MmManagePartitionMemoryInformation(ULONG_PTR **a1, __int64 a2)
{
  ULONG_PTR *v2; // r15
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  _QWORD *v21; // r14
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r11
  _QWORD *v25; // rcx
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v29; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v30[5]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A8h]
  __int128 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+88h] [rbp-78h]
  __int128 v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A8h] [rbp-58h]
  __int128 v37; // [rsp+B8h] [rbp-48h]
  __int128 v38; // [rsp+C8h] [rbp-38h]
  _BYTE v39[24]; // [rsp+E0h] [rbp-20h] BYREF
  char v40; // [rsp+F8h] [rbp-8h] BYREF

  v2 = *a1;
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 != -1 && v4 >= (unsigned __int16)KeNumberNodes )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 8) != -1 )
    return 3221225485LL;
  do
  {
    if ( v4 == -1 )
    {
      *(_DWORD *)(a2 + 12) = (unsigned __int16)KeNumberNodes;
      *(_QWORD *)(a2 + 16) = v2[920];
      v5 = 0LL;
      *(_QWORD *)(a2 + 24) = v2[957];
      *(_QWORD *)(a2 + 32) = v2[973];
      *(_QWORD *)(a2 + 40) = v2[800];
      if ( v2 == &MiSystemPartition )
        v5 = qword_14043B810;
      *(_QWORD *)(a2 + 224) = v5;
      MiQueryMemoryListInformation(v2, v30);
      v6 = v32;
      *(_OWORD *)(a2 + 88) = v31;
      v7 = v33;
      *(_OWORD *)(a2 + 104) = v6;
      v8 = v34;
      *(_OWORD *)(a2 + 120) = v7;
      v9 = v35;
      *(_OWORD *)(a2 + 136) = v8;
      v10 = v36;
      *(_OWORD *)(a2 + 152) = v9;
      v11 = v37;
      *(_OWORD *)(a2 + 168) = v10;
      v12 = v38;
      *(_OWORD *)(a2 + 184) = v11;
      *(_OWORD *)(a2 + 200) = v12;
      *(_QWORD *)(a2 + 216) = v2[801];
      v13 = *(_QWORD *)(a2 + 32);
      if ( v13 > *(_QWORD *)(a2 + 216) )
        *(_QWORD *)(a2 + 216) = v13;
      v14 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a2 + 40) < v14 )
        *(_QWORD *)(a2 + 40) = v14;
      if ( v14 > v13 )
        *(_QWORD *)(a2 + 24) = v13;
      v15 = (unsigned __int16)KeNumberNodes;
      v16 = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(a2 + 216) = 0LL;
      *(_QWORD *)(a2 + 224) = 0LL;
      memset((void *)(a2 + 88), 0, 0x40uLL);
      memset((void *)(a2 + 152), 0, 0x40uLL);
      v16 = *(_DWORD *)(a2 + 4);
      v15 = v16 + 1;
    }
    v17 = 0LL;
    *(_QWORD *)(a2 + 64) = 0LL;
    v18 = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
    v19 = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    v20 = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    if ( v16 < v15 )
    {
      v21 = (_QWORD *)(v2[2] + 1984LL * v16 + 1808);
      do
      {
        MiGetChannelInformation(v2, v16, v39, &v29);
        v19 = *(_QWORD *)(a2 + 64);
        v18 = *(_QWORD *)(a2 + 72);
        v17 = *(_QWORD *)(a2 + 80);
        if ( (unsigned int)(v29 / 0x28) )
        {
          v22 = &v40;
          v23 = (unsigned int)(v29 / 0x28);
          do
          {
            v19 += *((_QWORD *)v22 - 1);
            v18 += *(_QWORD *)v22;
            v17 += *((_QWORD *)v22 + 1);
            v22 += 40;
            --v23;
          }
          while ( v23 );
        }
        v24 = *(_QWORD *)(a2 + 48);
        ++v16;
        *(_QWORD *)(a2 + 64) = v19;
        *(_QWORD *)(a2 + 72) = v18;
        *(_QWORD *)(a2 + 80) = v17;
        v20 = *v21 + v24;
        v21 += 248;
        *(_QWORD *)(a2 + 48) = v20;
      }
      while ( v16 < v15 );
    }
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 == -1 )
    {
      *(_QWORD *)(a2 + 80) = 0LL;
      v17 = 0LL;
      v25 = (_QWORD *)(a2 + 88);
      v26 = 8LL;
      do
      {
        v17 += *v25++;
        *(_QWORD *)(a2 + 80) = v17;
        --v26;
      }
      while ( v26 );
      v18 = *(_QWORD *)(a2 + 72);
      v19 = *(_QWORD *)(a2 + 64);
      v20 = *(_QWORD *)(a2 + 48);
    }
    v27 = v17 + v19 + v18;
    *(_QWORD *)(a2 + 56) = v27;
  }
  while ( v27 > v20 );
  *(_DWORD *)(a2 + 232) = *(unsigned __int16 *)v2;
  return 0LL;
}
