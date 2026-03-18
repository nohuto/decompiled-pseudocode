/*
 * XREFs of ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C01849CC
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01848BC (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C003B2A0 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C0184CF4 (-CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C0184F9C (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C018500C (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 */

struct _CIT_PROG_DATA *__fastcall CitpProgDataEnsure(struct _CIT_IMPACT_CONTEXT *a1, const struct _CIT_PROGRAM_ID *a2)
{
  struct _CIT_PROG_DATA *v4; // rbx
  _QWORD *v6; // rax
  struct _CIT_IMPACT_CONTEXT *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r9
  struct _CIT_PROG_DATA *i; // rdx
  unsigned int v14; // eax
  struct _CIT_IMPACT_CONTEXT *v15; // rcx
  struct _CIT_IMPACT_CONTEXT **v16; // rdx
  struct _CIT_IMPACT_CONTEXT **v17; // rax
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  __int64 v21; // rdx
  unsigned int v22; // r8d
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  _OWORD v26[3]; // [rsp+20h] [rbp-38h] BYREF

  memset(v26, 0, 0x28uLL);
  v4 = CitpProgDataFind(a1, a2);
  if ( !v4 )
  {
    if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)v26, a2) < 0 )
    {
LABEL_3:
      v4 = 0LL;
      goto LABEL_4;
    }
    v6 = (_QWORD *)((char *)a1 + 8);
    v7 = (struct _CIT_IMPACT_CONTEXT *)*((_QWORD *)a1 + 1);
    if ( v7 == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 8) )
    {
      v9 = (_QWORD *)((char *)a1 + 24);
      if ( (_QWORD *)*v9 == v9 )
        goto LABEL_3;
      v10 = (_QWORD *)*((_QWORD *)a1 + 4);
      if ( (_QWORD *)*v10 != v9 )
        goto LABEL_24;
      v11 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v11 != v10 )
        goto LABEL_24;
      *((_QWORD *)a1 + 4) = v11;
      v4 = (struct _CIT_PROG_DATA *)(v10 - 2);
      *v11 = v9;
      --*((_DWORD *)a1 + 15);
      v10[1] = v10;
      *v10 = v10;
      *((_BYTE *)v10 + 18) = 0;
      v12 = *(v10 - 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
      for ( i = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 10)
                                        + 8
                                        * ((HIBYTE(v12)
                                          + 37
                                          * (BYTE6(v12)
                                           + 37
                                           * (BYTE5(v12)
                                            + 37
                                            * (BYTE4(v12)
                                             + 37
                                             * (((*(_DWORD *)(v10 - 1) & (unsigned int)(-1 << (*((_DWORD *)a1 + 19) & 0x1F))) >> 24)
                                              + 37
                                              * (BYTE2(v12)
                                               + 37
                                               * (37 * ((unsigned __int8)v12 + 11623883)
                                                + (unsigned __int8)((unsigned __int16)(*(_WORD *)(v10 - 1) & (-1 << (*((_DWORD *)a1 + 19) & 0x1F))) >> 8)))))))) & ((*((_DWORD *)a1 + 19) >> 5) - 1)));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct _CIT_PROG_DATA **)i )
      {
        if ( *(struct _CIT_PROG_DATA **)i == v4 )
        {
          *(_QWORD *)i = *(_QWORD *)v4;
          --*((_DWORD *)a1 + 18);
          *(_QWORD *)v4 |= 0x8000000000000002uLL;
          break;
        }
      }
      *(_QWORD *)v4 = 0LL;
      CitpProgDataReinitialize(v4);
    }
    else
    {
      if ( *((_QWORD **)v7 + 1) != v6 )
        goto LABEL_24;
      v8 = *(_QWORD *)v7;
      if ( *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)v7 + 8LL) != v7 )
        goto LABEL_24;
      *v6 = v8;
      v4 = (struct _CIT_IMPACT_CONTEXT *)((char *)v7 - 16);
      *(_QWORD *)(v8 + 8) = v6;
    }
    v14 = *((_DWORD *)a1 + 16);
    v15 = (struct _CIT_PROG_DATA *)((char *)v4 + 16);
    if ( v14 >= *((_DWORD *)a1 + 17) )
    {
      ++*((_DWORD *)a1 + 15);
      v17 = (struct _CIT_IMPACT_CONTEXT **)((char *)a1 + 24);
      v18 = *((_QWORD *)a1 + 3);
      if ( *(struct _CIT_IMPACT_CONTEXT **)(v18 + 8) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 24) )
      {
        *(_QWORD *)v15 = v18;
        *((_QWORD *)v4 + 3) = v17;
        *(_QWORD *)(v18 + 8) = v15;
        *v17 = v15;
        *((_BYTE *)v4 + 34) = 1;
        goto LABEL_23;
      }
    }
    else
    {
      *((_DWORD *)a1 + 16) = v14 + 1;
      v16 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6);
      if ( *v16 == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40) )
      {
        *(_QWORD *)v15 = (char *)a1 + 40;
        *((_QWORD *)v4 + 3) = v16;
        *v16 = v15;
        *((_QWORD *)a1 + 6) = v15;
        *((_BYTE *)v4 + 35) = 1;
LABEL_23:
        v19 = v26[1];
        *(_OWORD *)((char *)v4 + 40) = v26[0];
        v20 = *(_QWORD *)&v26[2];
        *(_OWORD *)((char *)v4 + 56) = v19;
        *((_QWORD *)v4 + 9) = v20;
        memset(v26, 0, 0x28uLL);
        v21 = *((_QWORD *)v4 + 7);
        *((_QWORD *)v4 + 1) = v21;
        v22 = *((_DWORD *)a1 + 19);
        v23 = v21 & (-1LL << (v22 & 0x1F));
        v24 = *((_QWORD *)a1 + 10);
        v25 = (HIBYTE(v23)
             + 37
             * (BYTE6(v23)
              + 37
              * (BYTE5(v23)
               + 37
               * (BYTE4(v23)
                + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))) & ((v22 >> 5) - 1);
        *(_QWORD *)v4 = *(_QWORD *)(v24 + 8 * v25);
        *(_QWORD *)(v24 + 8 * v25) = v4;
        ++*((_DWORD *)a1 + 18);
        goto LABEL_4;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_4:
  CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)v26);
  return v4;
}
