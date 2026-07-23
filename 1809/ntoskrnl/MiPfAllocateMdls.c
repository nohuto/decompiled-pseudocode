/*
 * XREFs of MiPfAllocateMdls @ 0x140699460
 * Callers:
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14001B7BC (MiGetSubsectionDriverProtos.c)
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiEndingOffsetWithLock @ 0x140031000 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiSetInPagePriority @ 0x140113C54 (MiSetInPagePriority.c)
 *     MmCreateMdl @ 0x140113CB0 (MmCreateMdl.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // eax
  _QWORD *v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // r10
  unsigned __int64 v8; // r13
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 *v11; // rcx
  _QWORD *v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r15
  _QWORD *v20; // rax
  char *v21; // rsi
  __int64 v22; // r10
  SIZE_T v23; // r8
  __int64 v24; // rbp
  __int64 *v25; // rdi
  unsigned int v26; // r13d
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v29; // r15d
  PMDL v30; // rcx
  _QWORD *v31; // rcx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v33; // rax
  int v34; // eax
  ULONG v35; // eax
  __int64 v36; // rax
  __int64 SharedProtos; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 *v40; // [rsp+20h] [rbp-A8h]
  _QWORD *v41; // [rsp+28h] [rbp-A0h]
  _QWORD *v42; // [rsp+30h] [rbp-98h]
  PMDL Mdl; // [rsp+38h] [rbp-90h]
  unsigned int v44; // [rsp+40h] [rbp-88h]
  unsigned int v45; // [rsp+44h] [rbp-84h]
  __int64 *v46; // [rsp+48h] [rbp-80h]
  _QWORD *v47; // [rsp+50h] [rbp-78h]
  __int64 v48; // [rsp+58h] [rbp-70h]
  _QWORD *v49; // [rsp+60h] [rbp-68h]
  unsigned __int64 v50; // [rsp+68h] [rbp-60h]
  unsigned __int64 v51; // [rsp+70h] [rbp-58h]
  unsigned int v55; // [rsp+E8h] [rbp+20h]

  v44 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  v55 = 0;
  v8 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v9 = *(_QWORD **)(a1 + 72);
  v10 = a1 + 8 * (*(unsigned int *)(a1 + 68) + 14LL);
  v45 = v4;
  v48 = v6;
  v50 = v10;
  v41 = v9;
  if ( (unsigned __int64)v9 >= v10 )
    return 0;
  v11 = (__int64 *)(v6 + 128);
  v12 = v9 + 1;
  v42 = v9 + 1;
  if ( *(_QWORD *)(a1 + 16) )
    v11 = *(__int64 **)(a1 + 16);
  v13 = 0;
  v40 = v11;
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
        v33 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 )
        {
          if ( (__int64)(v33 - v8) >> 3 > dword_14043BE3C )
            goto LABEL_17;
        }
        else
        {
          v7 = v9;
          v47 = v9;
        }
        v5 = v9;
        v8 = v33;
      }
      if ( v5 )
        goto LABEL_18;
    }
    else
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 )
      {
        if ( (__int64)(v16 - v8) >> 3 > dword_14043BE3C )
          goto LABEL_17;
      }
      else
      {
        v7 = v9;
        v47 = v9;
      }
      v5 = v9;
      v8 = v16;
      if ( v12 == (_QWORD *)v10 )
        goto LABEL_18;
    }
LABEL_10:
    ++v9;
    ++v12;
    v41 = v9;
    v42 = v12;
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
  v41 = v9 - 1;
  v42 = v12 - 1;
LABEL_18:
  v51 = *v5 & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = *v7 & 0xFFFFFFFFFFFFFFFCuLL;
  v19 = ((__int64)(v51 - v18) >> 3) + 1;
  v20 = MiGetInPageSupportBlock(0);
  v49 = v20;
  v21 = (char *)v20;
  if ( !v20 )
    return (unsigned int)-1073741670;
  v20[31] = 0LL;
  MiSetInPagePriority((__int64)v20, v45, v44);
  v23 = v19 << 12;
  if ( v19 <= 0x10 )
  {
    Mdl = (PMDL)(v21 + 272);
    *((_WORD *)v21 + 140) = 8 * (((__int64)(v51 - v18) >> 3) + 7);
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
    v24 = (__int64)v40;
    v25 = v46;
    v26 = v55;
    while ( 1 )
    {
      v27 = *(_QWORD *)(v24 + 8);
      if ( v18 >= v27 && v18 < v27 + 8LL * *(unsigned int *)(v24 + 44) )
        break;
      if ( (*(_BYTE *)(v24 + 34) & 2) != 0 && (*(_DWORD *)(v48 + 56) & 0x4000000) != 0 )
      {
        if ( *(_QWORD *)(v24 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v48, a2, v24);
          if ( SharedProtos )
          {
            v38 = *(_QWORD *)(SharedProtos + 72);
            if ( v18 >= v38 && v18 < v38 + 8LL * *(unsigned int *)(v24 + 44) )
              break;
          }
        }
      }
      if ( (*(_DWORD *)(v48 + 56) & 0x20) != 0 )
      {
        SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)v24);
        if ( SubsectionDriverProtos )
        {
          v39 = *(_QWORD *)(SubsectionDriverProtos + 72);
          if ( v18 >= v39 && v18 < v39 + 8LL * *(unsigned int *)(v24 + 44) )
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
    v55 = v26;
    v46 = v25;
    v40 = (__int64 *)v24;
    v28 = MiStartingOffset((__int64 *)v24, v18, a2);
    v29 = v28;
    v9 = v41;
    v12 = v42;
    v10 = v50;
    v8 = v51;
    v49[12] = v28;
    if ( (*(_BYTE *)v5 & 1) != 0 && (*(_DWORD *)(v48 + 56) & 0x20) != 0 )
    {
      v34 = MiEndingOffsetWithLock(v40);
      v30 = Mdl;
      v35 = v34 - v29;
      if ( v35 <= Mdl->ByteCount )
        Mdl->ByteCount = (v35 + 511) & 0xFFFFFE00;
    }
    else
    {
      v30 = Mdl;
    }
    v7 = v47;
    v49[30] = v47;
    v49[25] = v5;
    v49[26] = v48;
    v49[28] = a3;
    if ( a3 )
      *((_DWORD *)v49 + 48) |= 0x8000u;
    v49[32] = v30;
    v31 = *(_QWORD **)(a1 + 104);
    if ( *v31 != a1 + 96 )
      __fastfail(3u);
    *v49 = a1 + 96;
    v49[1] = v31;
    *v31 = v49;
    *(_QWORD *)(a1 + 104) = v49;
    ++*(_DWORD *)(a1 + 84);
    v13 = 0;
    v5 = 0LL;
    goto LABEL_10;
  }
  MiFreeInPageSupportBlock(v21);
  return (unsigned int)-1073741670;
}
