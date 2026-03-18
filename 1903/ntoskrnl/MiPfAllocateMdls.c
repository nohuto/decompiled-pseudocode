/*
 * XREFs of MiPfAllocateMdls @ 0x14066DD10
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiSetInPagePriority @ 0x1400A5934 (MiSetInPagePriority.c)
 *     MiGetInPageSupportBlock @ 0x1400A61EC (MiGetInPageSupportBlock.c)
 *     MiGetSubsectionDriverProtos @ 0x1400A8B4C (MiGetSubsectionDriverProtos.c)
 *     MiEndingOffsetWithLock @ 0x1400D8A40 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MmCreateMdl @ 0x140126E30 (MmCreateMdl.c)
 *     MiGetSharedProtos @ 0x14015C5CC (MiGetSharedProtos.c)
 */

__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // eax
  _QWORD *v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // r10
  unsigned __int64 v8; // r12
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  _QWORD *v20; // rax
  char *v21; // rsi
  __int64 v22; // r10
  SIZE_T v23; // r8
  __int64 v24; // rsi
  __int64 *v25; // rdi
  unsigned int v26; // r12d
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rcx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v31; // rax
  ULONG v32; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+20h] [rbp-A8h]
  _QWORD *v38; // [rsp+28h] [rbp-A0h]
  _QWORD *v39; // [rsp+30h] [rbp-98h]
  unsigned int v40; // [rsp+38h] [rbp-90h]
  unsigned int v41; // [rsp+3Ch] [rbp-8Ch]
  __int64 *v42; // [rsp+40h] [rbp-88h]
  _QWORD *v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+50h] [rbp-78h]
  PMDL Mdl; // [rsp+58h] [rbp-70h]
  _QWORD *v46; // [rsp+60h] [rbp-68h]
  unsigned __int64 v47; // [rsp+68h] [rbp-60h]
  unsigned __int64 v48; // [rsp+70h] [rbp-58h]
  unsigned int v52; // [rsp+E8h] [rbp+20h]

  v40 = *(_DWORD *)(a1 + 80);
  v4 = *(_DWORD *)(a1 + 84);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  v52 = 0;
  v8 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v9 = *(_QWORD **)(a1 + 96);
  v10 = a1 + 8 * (*(unsigned int *)(a1 + 92) + 17LL);
  v41 = v4;
  v44 = v6;
  v47 = v10;
  v38 = v9;
  if ( (unsigned __int64)v9 >= v10 )
    return 0;
  v11 = v6 + 128;
  v12 = v9 + 1;
  v39 = v9 + 1;
  if ( *(_QWORD *)(a1 + 16) )
    v11 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v37 = v11;
  while ( 1 )
  {
    v14 = *v9;
    v15 = (*v9 >> 2) & 0x3FFFFFFFLL;
    if ( (*v9 & 2) != 0 )
      break;
LABEL_6:
    if ( (v14 & 1) != 0 )
    {
      if ( v15 )
      {
        v31 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 )
        {
          if ( (__int64)(v31 - v8) >> 3 > dword_1404667FC )
            goto LABEL_17;
        }
        else
        {
          v7 = v9;
          v43 = v9;
        }
        v5 = v9;
        v8 = v31;
      }
      if ( v5 )
        goto LABEL_18;
    }
    else
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 )
      {
        if ( (__int64)(v16 - v8) >> 3 > dword_1404667FC )
          goto LABEL_17;
      }
      else
      {
        v7 = v9;
        v43 = v9;
      }
      v5 = v9;
      v8 = v16;
      if ( v12 == (_QWORD *)v10 )
        goto LABEL_18;
    }
LABEL_10:
    ++v9;
    ++v12;
    v38 = v9;
    v39 = v12;
    if ( (unsigned __int64)v9 >= v10 )
      return v13;
  }
  if ( !v5 )
  {
    if ( !v15 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( !v15 )
    goto LABEL_18;
LABEL_17:
  v38 = v9 - 1;
  v39 = v12 - 1;
LABEL_18:
  v48 = *v5 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = *v7 & 0xFFFFFFFFFFFFFFFCuLL;
  v19 = ((__int64)(v48 - v18) >> 3) + 1;
  v20 = MiGetInPageSupportBlock(0);
  v46 = v20;
  v21 = (char *)v20;
  if ( !v20 )
    return (unsigned int)-1073741670;
  v20[31] = 0LL;
  MiSetInPagePriority((__int64)v20, v41, v40);
  v23 = v19 << 12;
  if ( v19 <= 0x10 )
  {
    Mdl = (PMDL)(v21 + 272);
    *((_WORD *)v21 + 140) = 8 * (((__int64)(v48 - v18) >> 3) + 7);
    *((_QWORD *)v21 + 34) = v22;
    *((_WORD *)v21 + 141) = v22;
    *((_QWORD *)v21 + 38) = v22;
    *((_DWORD *)v21 + 79) = v22;
    *((_DWORD *)v21 + 78) = v23;
    goto LABEL_21;
  }
  Mdl = MmCreateMdl(0LL, 0LL, v23);
  if ( Mdl )
  {
LABEL_21:
    v24 = v37;
    v25 = v42;
    v26 = v52;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v24 + 8);
      if ( v18 >= v27 && v18 < v27 + 8LL * *(unsigned int *)(v24 + 44) )
        break;
      if ( (*(_BYTE *)(v24 + 34) & 2) != 0 && (*(_DWORD *)(v44 + 56) & 0x4000000) != 0 )
      {
        if ( *(_QWORD *)(v24 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v44);
          if ( SharedProtos )
          {
            v34 = *(_QWORD *)(SharedProtos + 72);
            if ( v18 >= v34 && v18 < v34 + 8LL * *(unsigned int *)(v24 + 44) )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(v44 + 56) & 0x20) != 0 )
      {
        SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v24);
        if ( SubsectionDriverProtos )
        {
          v35 = *(_QWORD *)(SubsectionDriverProtos + 72);
          if ( v18 >= v35 && v18 < v35 + 8LL * *(unsigned int *)(v24 + 44) )
            break;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( v25 )
        {
          if ( v26 >= *((_DWORD *)v25 + 4) )
          {
            v25 = (__int64 *)*v25;
            v26 = 1;
            v24 = v25[3];
          }
          else
          {
            v36 = v26++;
            v24 = v25[v36 + 3];
          }
        }
        else
        {
          v25 = *(__int64 **)(a1 + 24);
          v26 = 1;
          v24 = v25[3];
        }
      }
      else
      {
        v24 = *(_QWORD *)(v24 + 16);
      }
    }
    v52 = v26;
    v42 = v25;
    v37 = v24;
    v28 = MiStartingOffset((__int64 *)v24, v18, a2);
    v9 = v38;
    v12 = v39;
    v10 = v47;
    v8 = v48;
    v46[12] = v28;
    if ( (*(_BYTE *)v5 & 1) != 0 && (*(_DWORD *)(v44 + 56) & 0x20) != 0 )
    {
      v32 = MiEndingOffsetWithLock((_QWORD *)v24) - v28;
      if ( v32 <= Mdl->ByteCount )
        Mdl->ByteCount = (v32 + 511) & 0xFFFFFE00;
    }
    v7 = v43;
    v46[30] = v43;
    v46[25] = v5;
    v46[26] = v44;
    v46[28] = a3;
    if ( a3 )
      *((_DWORD *)v46 + 48) |= 0x8000u;
    v46[32] = Mdl;
    v29 = *(_QWORD **)(a1 + 128);
    if ( *v29 != a1 + 120 )
      __fastfail(3u);
    *v46 = a1 + 120;
    v46[1] = v29;
    *v29 = v46;
    *(_QWORD *)(a1 + 128) = v46;
    ++*(_DWORD *)(a1 + 108);
    v13 = 0;
    v5 = 0LL;
    goto LABEL_10;
  }
  MiFreeInPageSupportBlock(v21);
  return (unsigned int)-1073741670;
}
