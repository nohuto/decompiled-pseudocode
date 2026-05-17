/*
 * XREFs of sub_180067A40 @ 0x180067A40
 * Callers:
 *     RtlQueryHeapInformation @ 0x180067610 (RtlQueryHeapInformation.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18004EE4C @ 0x18004EE4C (sub_18004EE4C.c)
 *     sub_180104440 @ 0x180104440 (sub_180104440.c)
 */

__int64 __fastcall sub_180067A40(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, unsigned __int64 a4)
{
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  char v9; // al
  __int16 v10; // cx
  __int16 v11; // cx
  char *v12; // r14
  unsigned __int64 v13; // rbx
  char *v14; // r12
  __int64 v15; // r9
  _QWORD *i; // r8
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  _QWORD **j; // rdx
  unsigned __int8 *v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v6 = *((unsigned __int16 *)a1 + 1);
  if ( (v6 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v7 = 2LL;
    if ( (v6 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    v8 = 0;
    v9 = (unsigned __int8)byte_180166058 >> 1;
    a1[2] = 0LL;
    v10 = *((_WORD *)a1 + 1);
    if ( (v9 & 1) != 0 )
    {
      v11 = v10 | 1;
      v12 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v11;
      if ( (v11 & 2) != 0 )
      {
        v21 = (unsigned __int8 *)(a1 + 3);
        v22 = 314159LL;
        do
        {
          v23 = *v21;
          v21 += 8;
          v24 = *(v21 - 3)
              + 37 * (*(v21 - 4) + 37 * (*(v21 - 5) + 37 * (*(v21 - 6) + 37 * (*(v21 - 7) + 37 * (v23 + 37 * v22)))));
          v22 = *(v21 - 1) + 37 * (*(v21 - 2) + 37 * v24);
          --v7;
        }
        while ( v7 );
        RtlAcquireSRWLockShared(&qword_180163B40, v24, 0LL, (unsigned __int64)v21);
        v25 = sub_18004EE4C((__int64)&qword_180163B40, (__int64)(a1 + 3), v22);
        a1[2] = 1LL;
        if ( v25 )
          v26 = *(_QWORD *)(v25 + 32);
        else
          v26 = 0LL;
        a1[5] = v26;
        RtlReleaseSRWLockShared(&qword_180163B40);
        *a3 = 48LL;
      }
      else
      {
        v13 = (a2 - 24) / 0x18;
        v14 = &v12[24 * v13];
        RtlAcquireSRWLockShared(
          &qword_180163B40,
          ((a2 - 24) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64,
          2uLL,
          a4);
        if ( (unsigned int)dword_180163B48 > v13 )
        {
          v8 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_180163B48 + 3);
          RtlReleaseSRWLockShared(&qword_180163B40);
        }
        else
        {
          v15 = qword_180163B50;
          for ( i = (_QWORD *)qword_180163B50; v12 < v14; v12 += 24 )
          {
            if ( !i )
              goto LABEL_20;
            v17 = (_QWORD *)*i;
            if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v17 = (_QWORD *)*i;
            if ( ((unsigned __int8)v17 & 1) != 0 )
            {
LABEL_20:
              for ( j = (_QWORD **)(v15 + 8);
                    (unsigned __int64)j < qword_180163B50 + 8 * ((unsigned __int64)(unsigned int)dword_180163B4C >> 5);
                    ++j )
              {
                if ( (*(_BYTE *)j & 1) == 0 )
                {
                  i = *j;
                  v15 = (__int64)j;
                  v17 = *j;
                  goto LABEL_16;
                }
              }
              v17 = 0LL;
            }
            else
            {
              i = v17;
            }
LABEL_16:
            if ( !v17 )
              break;
            *(_OWORD *)v12 = *((_OWORD *)v17 + 1);
            *((_QWORD *)v12 + 2) = v17[4];
          }
          RtlReleaseSRWLockShared(&qword_180163B40);
          v18 = (v12 - (char *)a1 - 24) / 24;
          a1[2] = v18;
          *a3 = 24 * (v18 + 1);
        }
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v10 & 0xFFFE;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)sub_180104440(a1);
  }
  return v8;
}
