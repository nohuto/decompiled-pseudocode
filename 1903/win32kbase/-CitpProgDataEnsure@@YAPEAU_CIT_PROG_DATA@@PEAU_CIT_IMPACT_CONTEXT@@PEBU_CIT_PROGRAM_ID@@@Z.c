/*
 * XREFs of ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C01C9580
 * Callers:
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C01C9470 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C0086C1C (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C01C985C (-CitpProgDataFind@@YAPEAU_CIT_PROG_DATA@@PEBU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C01C9B04 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C01C9B74 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
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
  struct _CIT_PROG_DATA *i; // rdx
  unsigned int v13; // eax
  struct _CIT_IMPACT_CONTEXT *v14; // rcx
  struct _CIT_IMPACT_CONTEXT **v15; // rdx
  struct _CIT_IMPACT_CONTEXT **v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  __int64 v20; // rdx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  _OWORD v24[3]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+80h] [rbp+30h]
  __int64 v26; // [rsp+80h] [rbp+30h]

  memset(v24, 0, 0x28uLL);
  v4 = CitpProgDataFind(a1, a2);
  if ( !v4 )
  {
    if ( (int)CitpProgramIdCopy((struct _CIT_PROGRAM_ID *)v24, a2) < 0 )
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
      v25 = *(v10 - 1) & (-1LL << (*((_DWORD *)a1 + 19) & 0x1F));
      for ( i = (struct _CIT_PROG_DATA *)(*((_QWORD *)a1 + 10)
                                        + 8LL
                                        * ((37
                                          * (BYTE6(v25)
                                           + 37
                                           * (BYTE5(v25)
                                            + 37
                                            * (BYTE4(v25)
                                             + 37
                                             * (BYTE3(v25)
                                              + 37
                                              * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                                          + HIBYTE(v25)) & (unsigned int)((*((_DWORD *)a1 + 19) >> 5) - 1)));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct _CIT_PROG_DATA **)i )
      {
        if ( *(struct _CIT_PROG_DATA **)i == v4 )
        {
          *(_QWORD *)i = *(_QWORD *)v4;
          --*((_DWORD *)a1 + 18);
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
    v13 = *((_DWORD *)a1 + 16);
    v14 = (struct _CIT_PROG_DATA *)((char *)v4 + 16);
    if ( v13 >= *((_DWORD *)a1 + 17) )
    {
      ++*((_DWORD *)a1 + 15);
      v16 = (struct _CIT_IMPACT_CONTEXT **)((char *)a1 + 24);
      v17 = *((_QWORD *)a1 + 3);
      if ( *(struct _CIT_IMPACT_CONTEXT **)(v17 + 8) == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 24) )
      {
        *(_QWORD *)v14 = v17;
        *((_QWORD *)v4 + 3) = v16;
        *(_QWORD *)(v17 + 8) = v14;
        *v16 = v14;
        *((_BYTE *)v4 + 34) = 1;
        goto LABEL_23;
      }
    }
    else
    {
      *((_DWORD *)a1 + 16) = v13 + 1;
      v15 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6);
      if ( *v15 == (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40) )
      {
        *(_QWORD *)v14 = (char *)a1 + 40;
        *((_QWORD *)v4 + 3) = v15;
        *v15 = v14;
        *((_QWORD *)a1 + 6) = v14;
        *((_BYTE *)v4 + 35) = 1;
LABEL_23:
        v18 = v24[1];
        *(_OWORD *)((char *)v4 + 40) = v24[0];
        v19 = *(_QWORD *)&v24[2];
        *(_OWORD *)((char *)v4 + 56) = v18;
        *((_QWORD *)v4 + 9) = v19;
        memset(v24, 0, 0x28uLL);
        v20 = *((_QWORD *)v4 + 7);
        *((_QWORD *)v4 + 1) = v20;
        v21 = *((_DWORD *)a1 + 19);
        v26 = v20 & (-1LL << (v21 & 0x1F));
        v22 = *((_QWORD *)a1 + 10);
        v23 = (37
             * (BYTE6(v26)
              + 37
              * (BYTE5(v26)
               + 37
               * (BYTE4(v26)
                + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
             + HIBYTE(v26)) & ((v21 >> 5) - 1);
        *(_QWORD *)v4 = *(_QWORD *)(v22 + 8 * v23);
        *(_QWORD *)(v22 + 8 * v23) = v4;
        ++*((_DWORD *)a1 + 18);
        goto LABEL_4;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_4:
  CitpProgramIdCleanup((struct _CIT_PROGRAM_ID *)v24);
  return v4;
}
