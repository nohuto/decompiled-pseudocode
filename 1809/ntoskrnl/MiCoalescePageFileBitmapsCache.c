/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x14002A820
 * Callers:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x1402B7650 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402B8110 (MiFinishPageFileExtension.c)
 * Callees:
 *     MiBitmapsCachedEntryLengthChanged @ 0x140028C34 (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlLengthCurrentClearRunForward @ 0x14002AD00 (RtlLengthCurrentClearRunForward.c)
 *     RtlRbRemoveNode @ 0x1400BDD30 (RtlRbRemoveNode.c)
 *     MiRescanPageFileBitmapPortion @ 0x1401209DC (MiRescanPageFileBitmapPortion.c)
 */

char __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  _RTL_RB_TREE *v4; // r13
  unsigned __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 Root; // rbx
  __int64 v10; // r9
  unsigned int v11; // edi
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  unsigned __int64 v17; // rax
  int v18; // r15d
  unsigned __int64 v19; // r14
  char v20; // r12
  unsigned __int64 j; // rax
  int v22; // r8d
  unsigned __int64 v23; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v25; // r13
  int v26; // edx
  int v27; // ecx
  _RTL_RB_TREE *v28; // rbp
  _RTL_RB_TREE *v29; // rbp
  _RTL_BALANCED_NODE *v30; // rax
  int v31; // ecx
  __int64 v32; // r10
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // r9d
  unsigned int v36; // r14d
  __int64 v37; // r11
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // rcx
  char v42; // dl
  unsigned int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // edi
  int v50; // ebx
  unsigned int v51; // eax
  int v52; // r15d
  __int64 v53; // rbx
  unsigned int v54; // ebp
  _RTL_BALANCED_NODE *v55; // rax
  unsigned int v56; // r11d
  unsigned int v57; // ecx
  int v58; // eax
  unsigned int v59; // r8d
  _DWORD *v60; // r10
  _DWORD *v61; // rdx
  __int64 v62; // rax
  int v63; // r9d
  __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned int v66; // edi
  __int64 v68; // [rsp+30h] [rbp-48h]
  __int64 v69; // [rsp+38h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  _RTL_RB_TREE *v71; // [rsp+80h] [rbp+8h] BYREF
  int v72; // [rsp+98h] [rbp+20h]

  v3 = &retaddr;
  v71 = (_RTL_RB_TREE *)a1;
  v4 = (_RTL_RB_TREE *)a1;
  v5 = a3;
  if ( (*(_BYTE *)(a1 + 207) & 1) == 0 )
  {
    v6 = 24LL;
    v7 = *(_QWORD *)(a1 + 112);
    v8 = 8LL;
    if ( !a2 )
      v8 = 24LL;
    v68 = v7 + v8;
    Root = (unsigned __int64)v4[10].Root;
    if ( !a2 )
      v6 = 8LL;
    v10 = v7 + v6;
    v11 = 0;
    Min = v4[10].Min;
    v13 = 0LL;
    v69 = v10;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)&v4[10];
      else
        Root = 0LL;
    }
    v14 = 0LL;
    v15 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v16 = *(_DWORD *)(Root + 24);
      if ( a3 < v16 )
      {
        v17 = *(_QWORD *)Root;
        v14 = Root;
      }
      else
      {
        if ( a3 <= v16 )
          goto LABEL_21;
        v17 = *(_QWORD *)(Root + 8);
      }
      if ( v15 && v17 )
        Root ^= v17;
      else
        Root = v17;
    }
    Root = v14;
LABEL_21:
    v18 = *(_DWORD *)(Root + 24);
    v19 = Root - 24;
    v20 = -1;
    if ( v18 == a3 + 1 && v18 != -1 )
    {
      ++*(_DWORD *)(v19 + 52);
      v13 = Root - 24;
      *(_DWORD *)(v19 + 48) = a3;
    }
    j = *(_QWORD *)Root;
    v22 = 0;
    v23 = Root;
    if ( *(_QWORD *)Root )
    {
      for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
        j = i;
    }
    else
    {
      for ( j = *(_QWORD *)(Root + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)(j + 8) == v23 )
          break;
        v23 = j;
      }
    }
    if ( j )
    {
      v25 = j - 24;
      v26 = *(_DWORD *)(j - 24 + 52);
      v27 = v26 + *(_DWORD *)(j + 24);
      v22 = v27 - 1;
      v72 = v27 - 1;
      if ( v27 == (_DWORD)v5 )
      {
        if ( *(_DWORD *)(v19 + 48) == (_DWORD)v5 )
        {
          v28 = v71;
          *(_DWORD *)(v25 + 52) = *(_DWORD *)(v19 + 52) + v26;
          *(_DWORD *)(v19 + 52) = 0;
          RtlRbRemoveNode(v28 + 9, (PRTL_BALANCED_NODE)(Root - 24));
          RtlRbRemoveNode(v28 + 10, (PRTL_BALANCED_NODE)Root);
          v29 = v28 + 11;
          v30 = v29->Min;
          if ( (_RTL_RB_TREE *)v30->Children[0] != v29 )
            __fastfail(3u);
          v22 = v72;
          v10 = v69;
          *(_QWORD *)v19 = v29;
          *(_QWORD *)(v19 + 8) = v30;
          v30->Children[0] = (_RTL_BALANCED_NODE *)v19;
          v29->Min = (_RTL_BALANCED_NODE *)v19;
          v13 = v25 | 1;
        }
        else
        {
          v13 = j - 24;
          *(_DWORD *)(v25 + 52) = v26 + 1;
        }
      }
      v4 = v71;
    }
    if ( v13 )
    {
      if ( (v13 & 1) != 0 )
      {
        v13 &= ~1uLL;
      }
      else
      {
        v31 = *(_DWORD *)(v13 + 48);
        if ( v31 == (_DWORD)v5 )
        {
          v32 = *(_QWORD *)(v10 + 8);
          v33 = v5 & 0x1F;
          v34 = 0;
          v35 = 31 - v33;
          v36 = dword_140361C10[v33];
          v37 = 4 * (v5 >> 5);
          v38 = v37 + v32;
          v39 = *(_DWORD *)(v37 + v32) & v36;
          if ( (*(_DWORD *)(v37 + v32) & v36) != 0 )
          {
LABEL_48:
            v40 = !_BitScanReverse64((unsigned __int64 *)&v41, v39);
            v42 = -1;
            if ( !v40 )
              v42 = v41;
            v34 += 31 - v42;
          }
          else
          {
            while ( 1 )
            {
              v34 += 32;
              if ( v34 == -1 && v35 == 0 )
                break;
              if ( v38 == v32 )
                break;
              v39 = *(unsigned int *)(v38 - 4);
              v38 -= 4LL;
              if ( (_DWORD)v39 )
                goto LABEL_48;
            }
          }
          v43 = v34 - v35;
          if ( v43 > 1 )
          {
            v44 = *(_QWORD *)(v68 + 8);
            v45 = v37 + v44;
            v46 = v36 & *(_DWORD *)(v37 + v44);
            if ( (v36 & *(_DWORD *)(v37 + v44)) != 0 )
            {
LABEL_57:
              v40 = !_BitScanReverse64((unsigned __int64 *)&v48, v46);
              if ( !v40 )
                v20 = v48;
              v11 += 31 - v20;
            }
            else
            {
              while ( 1 )
              {
                v47 = v11 + 32;
                v11 = v47;
                if ( v47 >= v43 && v47 - v35 >= v43 )
                  break;
                if ( v45 == v44 )
                  break;
                v46 = *(unsigned int *)(v45 - 4);
                v45 -= 4LL;
                if ( (_DWORD)v46 )
                  goto LABEL_57;
              }
            }
            v49 = v11 - v35;
            if ( v49 <= v43 )
              v43 = v49;
            *(_DWORD *)(v13 + 52) += v43 - 1;
            *(_DWORD *)(v13 + 48) = v5 - v43 + 1;
          }
        }
        else
        {
          v50 = v31 + *(_DWORD *)(v13 + 52);
          v51 = RtlLengthCurrentClearRunForward(v10, (unsigned int)(v50 - 1), 0xFFFFFFFFLL);
          if ( v51 > 1 )
            *(_DWORD *)(v13 + 52) += RtlLengthCurrentClearRunForward(v68, (unsigned int)(v50 - 1), v51) - 1;
        }
      }
      LOBYTE(v3) = MiBitmapsCachedEntryLengthChanged(v4, v13, 1);
    }
    else
    {
      v52 = v18 - ((v18 != -1) + 1) - v5;
      v53 = (__int64)v4[11].Root;
      v54 = v5 - ((v22 != 0) + 1) - v22;
      if ( (_RTL_RB_TREE *)v53 == &v4[11] )
      {
        v55 = v4[9].Min;
        if ( ((unsigned __int8)v55 & 1) != 0 )
        {
          if ( v55 == (_RTL_BALANCED_NODE *)1 )
            v53 = 0LL;
          else
            v53 = (unsigned __int64)v55 ^ ((unsigned __int64)&v4[9] | 1);
        }
        else
        {
          v53 = (__int64)v4[9].Min;
        }
      }
      v56 = *(_DWORD *)(v53 + 52);
      v57 = v52 + v5 - (v22 != 0) - v22;
      v71 = (_RTL_RB_TREE *)v53;
      if ( v56 >= v57 )
        goto LABEL_91;
      if ( v57 < 0x20 )
        goto LABEL_91;
      if ( v52 )
      {
        v58 = RtlLengthCurrentClearRunForward(v10, (unsigned int)v5, (unsigned int)(v52 + 1));
        v56 = *(_DWORD *)(v53 + 52);
        v52 = v58 - 1;
        v57 = v54 + v58;
        if ( v56 >= v54 + v58 || v57 < 0x20 )
          goto LABEL_91;
      }
      if ( !v54 )
        goto LABEL_90;
      v59 = v54 + 1;
      v60 = *(_DWORD **)(v69 + 8);
      v61 = &v60[v5 >> 5];
      v62 = v5 & 0x1F;
      v63 = 31 - v62;
      LODWORD(v64) = dword_140361C10[v62] & *v61;
      if ( (_DWORD)v64 )
      {
LABEL_83:
        v40 = !_BitScanReverse64((unsigned __int64 *)&v64, (unsigned int)v64);
        if ( !v40 )
          v20 = v64;
        v11 += 31 - v20;
      }
      else
      {
        while ( 1 )
        {
          v65 = v11 + 32;
          v11 = v65;
          if ( v65 >= v59 && v65 - v63 >= v59 )
            break;
          if ( v61 == v60 )
            break;
          LODWORD(v64) = *--v61;
          if ( (_DWORD)v64 )
            goto LABEL_83;
        }
      }
      v66 = v11 - v63;
      if ( v66 <= v59 )
        v59 = v66;
      v57 = v59 + v52;
      v54 = v59 - 1;
      if ( v56 >= v59 + v52 || v57 < 0x20 )
      {
LABEL_91:
        LODWORD(v3) = HIDWORD(v4[8].Min);
        if ( (unsigned int)v3 <= v57 )
          LODWORD(v3) = v57;
        HIDWORD(v4[8].Min) = (_DWORD)v3;
      }
      else
      {
LABEL_90:
        LOBYTE(v3) = MiRescanPageFileBitmapPortion((_DWORD)v4, v68, (unsigned int)v5 - v54, v57, (__int64)&v71);
      }
    }
  }
  return (char)v3;
}
