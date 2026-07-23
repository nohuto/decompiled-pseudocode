/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x14008A450
 * Callers:
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD610 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402CE0FC (MiFinishPageFileExtension.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     RtlLengthCurrentClearRunForward @ 0x14008A98C (RtlLengthCurrentClearRunForward.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x14008AA5C (MiBitmapsCachedEntryLengthChanged.c)
 *     MiRescanPageFileBitmapPortion @ 0x14012502C (MiRescanPageFileBitmapPortion.c)
 */

__int64 __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  _RTL_RB_TREE *v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 Root; // rbx
  __int64 v10; // r9
  _RTL_BALANCED_NODE *Min; // rax
  unsigned int v12; // ebp
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // r15d
  unsigned __int64 v18; // r13
  char v19; // r14
  unsigned __int64 i; // rcx
  int v21; // r12d
  unsigned __int64 v22; // rdx
  int v23; // edx
  unsigned __int64 v24; // rsi
  int v25; // ecx
  int v26; // ecx
  int v27; // ebx
  unsigned int v28; // eax
  unsigned __int64 v29; // rdx
  int v30; // r8d
  __int64 v31; // r13
  _RTL_RB_TREE *v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // ebx
  unsigned int v35; // r11d
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // r9d
  __int64 v39; // rdx
  _DWORD *v40; // rsi
  unsigned int v41; // ecx
  _DWORD *v42; // r10
  int v43; // r15d
  unsigned __int64 v44; // rax
  bool v45; // zf
  __int64 v46; // rcx
  unsigned int v47; // ebp
  unsigned int v48; // eax
  int v49; // eax
  __int64 v50; // r11
  __int64 v51; // rcx
  int v52; // r9d
  unsigned int v53; // r12d
  __int64 v54; // r15
  __int64 v55; // rdx
  int v56; // r10d
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  char v59; // dl
  unsigned int v60; // r9d
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rax
  unsigned int v64; // eax
  unsigned int v65; // ebp
  _RTL_RB_TREE *v66; // rcx
  __int64 v67; // rax
  unsigned __int64 *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // [rsp+30h] [rbp-58h]
  __int64 v72; // [rsp+38h] [rbp-50h]
  _RTL_RB_TREE *Tree; // [rsp+40h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v75; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp+20h]

  result = (__int64)&retaddr;
  v75 = a1;
  v4 = (_RTL_RB_TREE *)a1;
  v5 = a3;
  if ( (*(_BYTE *)(a1 + 207) & 1) == 0 )
  {
    v6 = 24LL;
    v7 = *(_QWORD *)(a1 + 112);
    v8 = 8LL;
    if ( !a2 )
      v8 = 24LL;
    v71 = v7 + v8;
    Root = (unsigned __int64)v4[10].Root;
    if ( !a2 )
      v6 = 8LL;
    v10 = v7 + v6;
    Tree = v4 + 10;
    Min = v4[10].Min;
    v12 = 0;
    v72 = v10;
    v13 = 0LL;
    v76 = 0LL;
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
      if ( (unsigned int)v5 < *(_DWORD *)(Root + 24) )
      {
        v16 = *(_QWORD *)Root;
        v14 = Root;
        if ( v15 && v16 )
          goto LABEL_27;
      }
      else
      {
        if ( (unsigned int)v5 <= *(_DWORD *)(Root + 24) )
          goto LABEL_17;
        v16 = *(_QWORD *)(Root + 8);
        if ( v15 && v16 )
        {
LABEL_27:
          Root ^= v16;
          continue;
        }
      }
      Root = v16;
    }
    Root = v14;
LABEL_17:
    v17 = *(_DWORD *)(Root + 24);
    v18 = Root - 24;
    v19 = -1;
    if ( v17 == (_DWORD)v5 + 1 && v17 != -1 )
    {
      ++*(_DWORD *)(v18 + 52);
      v13 = Root - 24;
      *(_DWORD *)(v18 + 48) = v5;
      v76 = Root - 24;
    }
    i = *(_QWORD *)Root;
    v21 = 0;
    v22 = Root;
    if ( *(_QWORD *)Root )
    {
      for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(Root + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)(i + 8) == v22 )
          break;
        v22 = i;
      }
    }
    if ( i )
    {
      v23 = *(_DWORD *)(i + 28);
      v24 = i - 24;
      v25 = v23 + *(_DWORD *)(i + 24);
      v21 = v25 - 1;
      if ( v25 == (_DWORD)v5 )
      {
        if ( *(_DWORD *)(v18 + 48) == (_DWORD)v5 )
        {
          v66 = (_RTL_RB_TREE *)v75;
          *(_DWORD *)(v24 + 52) = *(_DWORD *)(v18 + 52) + v23;
          *(_DWORD *)(v18 + 52) = 0;
          RtlRbRemoveNode(v66 + 9, (PRTL_BALANCED_NODE)(Root - 24));
          RtlRbRemoveNode(Tree, (PRTL_BALANCED_NODE)Root);
          v67 = v75 + 176;
          v68 = *(unsigned __int64 **)(v75 + 184);
          if ( *v68 != v75 + 176 )
            __fastfail(3u);
          v10 = v72;
          *(_QWORD *)v18 = v67;
          v13 = v24 | 1;
          *(_QWORD *)(v18 + 8) = v68;
          *v68 = v18;
          v76 = v24 | 1;
          *(_QWORD *)(v67 + 8) = v18;
        }
        else
        {
          v76 = v24;
          *(_DWORD *)(v24 + 52) = v23 + 1;
          v13 = v24;
        }
      }
      v4 = (_RTL_RB_TREE *)v75;
    }
    if ( v13 )
    {
      if ( (v13 & 1) != 0 )
      {
        v76 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
      }
      else
      {
        v26 = *(_DWORD *)(v13 + 48);
        if ( v26 == (_DWORD)v5 )
        {
          v50 = *(_QWORD *)(v10 + 8);
          v51 = v5 & 0x1F;
          v52 = 0;
          v53 = dword_14037C900[v51];
          v54 = 4 * (v5 >> 5);
          v55 = v54 + v50;
          v56 = 31 - v51;
          v57 = v53 & *(_DWORD *)(v54 + v50);
          if ( (v53 & *(_DWORD *)(v54 + v50)) != 0 )
          {
LABEL_73:
            v45 = !_BitScanReverse64((unsigned __int64 *)&v58, v57);
            v59 = -1;
            if ( !v45 )
              v59 = v58;
            v52 += 31 - v59;
          }
          else
          {
            while ( 1 )
            {
              v52 += 32;
              if ( v52 == -1 && v56 == 0 )
                break;
              if ( v55 == v50 )
                break;
              v57 = *(unsigned int *)(v55 - 4);
              v55 -= 4LL;
              if ( (_DWORD)v57 )
                goto LABEL_73;
            }
          }
          v60 = v52 - v56;
          if ( v60 > 1 )
          {
            v61 = *(_QWORD *)(v71 + 8);
            v62 = v54 + v61;
            v63 = v53 & *(_DWORD *)(v54 + v61);
            if ( (v53 & *(_DWORD *)(v54 + v61)) != 0 )
            {
LABEL_92:
              v45 = !_BitScanReverse64((unsigned __int64 *)&v69, v63);
              if ( !v45 )
                v19 = v69;
              v12 += 31 - v19;
            }
            else
            {
              while ( 1 )
              {
                v64 = v12 + 32;
                v12 = v64;
                if ( v64 >= v60 && v64 - v56 >= v60 )
                  break;
                if ( v62 == v61 )
                  break;
                v63 = *(unsigned int *)(v62 - 4);
                v62 -= 4LL;
                if ( (_DWORD)v63 )
                  goto LABEL_92;
              }
            }
            v65 = v12 - v56;
            if ( v65 <= v60 )
              v60 = v65;
            *(_DWORD *)(v13 + 52) += v60 - 1;
            *(_DWORD *)(v13 + 48) = v5 - v60 + 1;
          }
        }
        else
        {
          v27 = v26 + *(_DWORD *)(v13 + 52);
          v28 = RtlLengthCurrentClearRunForward(v10, (unsigned int)(v27 - 1), 0xFFFFFFFFLL);
          if ( v28 > 1 )
          {
            v49 = RtlLengthCurrentClearRunForward(v71, (unsigned int)(v27 - 1), v28);
            v29 = v76;
            *(_DWORD *)(v76 + 52) += v49 - 1;
            return MiBitmapsCachedEntryLengthChanged(v4, v29, 1LL);
          }
        }
      }
      v29 = v76;
      return MiBitmapsCachedEntryLengthChanged(v4, v29, 1LL);
    }
    v30 = v17 - v5 - 1;
    if ( v17 != -1 )
      v30 = v17 - v5 - 2;
    v31 = v75;
    v32 = v4 + 11;
    v33 = (__int64)v4[11].Root;
    v34 = v5 - ((v21 != 0) + 1) - v21;
    if ( (_RTL_RB_TREE *)v33 == v32 )
    {
      v70 = *(_QWORD *)(v75 + 152);
      if ( (v70 & 1) != 0 )
      {
        if ( v70 == 1 )
          v33 = 0LL;
        else
          v33 = v70 ^ ((v75 + 144) | 1);
      }
      else
      {
        v33 = *(_QWORD *)(v75 + 152);
      }
    }
    v35 = *(_DWORD *)(v33 + 52);
    v36 = v5 - (v21 != 0) - v21 + v30;
    v75 = v33;
    if ( v36 < 0x20 )
      goto LABEL_58;
    if ( v35 >= v36 )
      goto LABEL_58;
    if ( v30 )
    {
      v37 = RtlLengthCurrentClearRunForward(v10, (unsigned int)v5, (unsigned int)(v30 + 1));
      v35 = *(_DWORD *)(v33 + 52);
      v30 = v37 - 1;
      v36 = v34 + v37;
      if ( v34 + v37 < 0x20 || v35 >= v36 )
        goto LABEL_58;
    }
    if ( !v34 )
      return MiRescanPageFileBitmapPortion(v31, v71, (unsigned int)v5 - v34, v36, (__int64)&v75);
    v38 = v5 - (v21 != 0) - v21;
    v39 = v5 & 0x1F;
    v40 = *(_DWORD **)(v72 + 8);
    v41 = dword_14037C900[v39];
    v42 = &v40[v5 >> 5];
    v43 = 31 - v39;
    v44 = v41 & *v42;
    if ( (v41 & *v42) != 0 )
    {
LABEL_52:
      v45 = !_BitScanReverse64((unsigned __int64 *)&v46, v44);
      if ( !v45 )
        v19 = v46;
      v12 += 31 - v19;
    }
    else
    {
      while ( 1 )
      {
        v48 = v12 + 32;
        v12 = v48;
        if ( v48 >= v38 && v48 - v43 >= v38 )
          break;
        if ( v42 == v40 )
          break;
        v44 = (unsigned int)*--v42;
        if ( (_DWORD)v44 )
          goto LABEL_52;
      }
    }
    v47 = v12 - v43;
    if ( v47 <= v38 )
      v38 = v47;
    v36 = v38 + v30;
    v34 = v38 - 1;
    if ( v38 + v30 < 0x20 || v35 >= v36 )
    {
LABEL_58:
      result = *(unsigned int *)(v31 + 140);
      if ( (unsigned int)result <= v36 )
        result = v36;
      *(_DWORD *)(v31 + 140) = result;
    }
    else
    {
      return MiRescanPageFileBitmapPortion(v31, v71, (unsigned int)v5 - v34, v36, (__int64)&v75);
    }
  }
  return result;
}
