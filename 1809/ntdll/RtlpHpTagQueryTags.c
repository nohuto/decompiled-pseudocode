/*
 * XREFs of RtlpHpTagQueryTags @ 0x18007B480
 * Callers:
 *     RtlQueryHeapInformation @ 0x18007B050 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x1800650DC (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180107028 (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  char v8; // al
  __int16 v9; // cx
  __int16 v11; // cx
  char *v12; // r14
  unsigned __int64 v13; // rbx
  char *v14; // r12
  __int64 v15; // r9
  _QWORD *i; // r8
  _QWORD *v17; // rcx
  _QWORD **j; // rdx
  __int64 v19; // rdx
  unsigned __int8 *v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 Mapping; // rax
  __int64 v24; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v6 = 2LL;
    if ( (v5 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    v7 = 0;
    v8 = (unsigned __int8)RtlpHpHeapFeatures >> 1;
    a1[2] = 0LL;
    v9 = *((_WORD *)a1 + 1);
    if ( (v8 & 1) != 0 )
    {
      v11 = v9 | 1;
      v12 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v11;
      if ( (v11 & 2) != 0 )
      {
        v20 = (unsigned __int8 *)(a1 + 3);
        v21 = 314159LL;
        do
        {
          v22 = *v20;
          v20 += 8;
          v21 = *(v20 - 1)
              + 37
              * (*(v20 - 2)
               + 37
               * (*(v20 - 3)
                + 37 * (*(v20 - 4) + 37 * (*(v20 - 5) + 37 * (*(v20 - 6) + 37 * (*(v20 - 7) + 37 * (v22 + 37 * v21)))))));
          --v6;
        }
        while ( v6 );
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (__int64)(a1 + 3), v21);
        a1[2] = 1LL;
        if ( Mapping )
          v24 = *(_QWORD *)(Mapping + 32);
        else
          v24 = 0LL;
        a1[5] = v24;
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
        *a3 = 48LL;
      }
      else
      {
        v13 = (a2 - 24) / 0x18;
        v14 = &v12[24 * v13];
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        if ( (unsigned int)dword_180163AA8 > v13 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_180163AA8 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v15 = qword_180163AB0;
          for ( i = (_QWORD *)qword_180163AB0; v12 < v14; v12 += 24 )
          {
            if ( !i )
              goto LABEL_16;
            v17 = (_QWORD *)*i;
            if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v17 = (_QWORD *)*i;
            if ( ((unsigned __int8)v17 & 1) == 0 )
            {
              i = v17;
            }
            else
            {
LABEL_16:
              for ( j = (_QWORD **)(v15 + 8);
                    (unsigned __int64)j < qword_180163AB0 + 8 * ((unsigned __int64)(unsigned int)dword_180163AAC >> 5);
                    ++j )
              {
                if ( (*(_BYTE *)j & 1) == 0 )
                {
                  i = *j;
                  v15 = (__int64)j;
                  v17 = *j;
                  goto LABEL_21;
                }
              }
              v17 = 0LL;
            }
LABEL_21:
            if ( !v17 )
              break;
            *(_OWORD *)v12 = *((_OWORD *)v17 + 1);
            *((_QWORD *)v12 + 2) = v17[4];
          }
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v19 = (v12 - (char *)a1 - 24) / 24;
          a1[2] = v19;
          *a3 = 24 * (v19 + 1);
        }
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v9 & 0xFFFE;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1, a2);
  }
  return v7;
}
