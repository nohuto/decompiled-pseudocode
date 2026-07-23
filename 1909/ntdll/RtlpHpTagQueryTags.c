/*
 * XREFs of RtlpHpTagQueryTags @ 0x180067C90
 * Callers:
 *     RtlQueryHeapInformation @ 0x180067860 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F04D0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x18004EEEC (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180104578 (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  char v8; // al
  __int16 v9; // cx
  __int16 v10; // cx
  char *v11; // r14
  unsigned __int64 v12; // rbx
  char *v13; // r12
  __int64 v14; // r9
  _QWORD *i; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD **j; // rdx
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
      v10 = v9 | 1;
      v11 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v10;
      if ( (v10 & 2) != 0 )
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
        v12 = (a2 - 24) / 0x18;
        v13 = &v11[24 * v12];
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        if ( (unsigned int)dword_180163B48 > v12 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_180163B48 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v14 = qword_180163B50;
          for ( i = (_QWORD *)qword_180163B50; v11 < v13; v11 += 24 )
          {
            if ( !i )
              goto LABEL_20;
            v16 = (_QWORD *)*i;
            if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v16 = (_QWORD *)*i;
            if ( ((unsigned __int8)v16 & 1) != 0 )
            {
LABEL_20:
              for ( j = (_QWORD **)(v14 + 8);
                    (unsigned __int64)j < qword_180163B50 + 8 * ((unsigned __int64)(unsigned int)dword_180163B4C >> 5);
                    ++j )
              {
                if ( (*(_BYTE *)j & 1) == 0 )
                {
                  i = *j;
                  v14 = (__int64)j;
                  v16 = *j;
                  goto LABEL_16;
                }
              }
              v16 = 0LL;
            }
            else
            {
              i = v16;
            }
LABEL_16:
            if ( !v16 )
              break;
            *(_OWORD *)v11 = *((_OWORD *)v16 + 1);
            *((_QWORD *)v11 + 2) = v16[4];
          }
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v17 = (v11 - (char *)a1 - 24) / 24;
          a1[2] = v17;
          *a3 = 24 * (v17 + 1);
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
