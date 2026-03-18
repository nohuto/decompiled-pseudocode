/*
 * XREFs of CmpCheckLeaf @ 0x14064F610
 * Callers:
 *     CmpCheckKey @ 0x140651270 (CmpCheckKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x1406DE26C (CmpGenerateFastLeafHintForUnicodeString.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int v7; // ebx
  char v9; // r15
  __int16 v10; // cx
  int v12; // esi
  unsigned int v13; // r12d
  __int64 v14; // r9
  _WORD *v15; // rbp
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  int *v20; // rax
  int v21; // r8d
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // r9
  bool v26; // bl
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v29; // r10d
  unsigned __int8 *v30; // r9
  __int16 v31; // cx
  unsigned __int16 v32; // ax
  int v33; // eax
  int v34; // eax
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __m128i v36; // [rsp+38h] [rbp-50h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp+20h]

  LODWORD(BugCheckParameter3) = a4;
  result = 0LL;
  v36 = 0uLL;
  v7 = 0;
  v35 = 0LL;
  v9 = 0;
  v10 = *a3 - 26220;
  LODWORD(v35) = -1;
  if ( (v10 & 0xFDFF) != 0 )
    return result;
  v12 = 0;
  if ( !a3[1] )
    return 0LL;
  v13 = -1073741492;
  while ( 1 )
  {
    v14 = *(unsigned int *)&a3[4 * v12 + 2];
    v15 = &a3[4 * v12];
    v37 = 0LL;
    v16 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    LODWORD(v37) = -1;
    if ( !v16 )
      goto LABEL_20;
    if ( ((unsigned int)v14 & 0x7FFFFFFF) < *(_DWORD *)(632 * ((unsigned __int64)(unsigned int)v14 >> 31)
                                                      + BugCheckParameter2
                                                      + 272)
      && (v14 & 7) == 0 )
    {
      v17 = (unsigned int)v14 >> 31;
      if ( (unsigned int)(v14 + ((_DWORD)v17 << 31)) < *(_DWORD *)(632 * v17 + BugCheckParameter2 + 272) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(632 * v17 + BugCheckParameter2 + 280) + 8LL * (((unsigned int)v14 >> 21) & 0x3FF))
            + 24 * (((unsigned __int64)(unsigned int)v14 >> 12) & 0x1FF);
        if ( v18 )
        {
          if ( (*(_BYTE *)(v18 + 8) & 2) == 0 )
          {
            v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    (unsigned int)v14,
                    &v37);
            if ( !v19 )
              goto LABEL_19;
            v20 = (int *)(v19 - 4);
            if ( !v20 )
              goto LABEL_19;
            v21 = (int)v20;
            v22 = *v20;
            v23 = v21 - (*(_DWORD *)(v18 + 8) & 0xFFFFFFF0);
            v24 = -v22;
            v26 = 0;
            if ( v22 < 0 && v24 - 8 <= 0xFFFF8 )
            {
              v25 = *(unsigned int *)((*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
              if ( v24 <= (unsigned __int64)(v25 - 32) && v23 - v22 <= (unsigned int)v25 && v23 >= 0x20 )
                v26 = 1;
            }
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v37);
            if ( v26 )
            {
LABEL_19:
              v7 = 0;
LABEL_20:
              v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *, __int64))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      *((unsigned int *)v15 + 1),
                      &v35,
                      v14);
              if ( !v27 )
              {
                SetFailureLocation(a5, 0, 23, -1073741670, 0);
                return 3221225626LL;
              }
              v28 = -4 - *(_DWORD *)(v27 - 4);
              if ( v28 < 0x4C || (v29 = *(unsigned __int16 *)(v27 + 72), v29 > v28 - 76) )
              {
LABEL_29:
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v35);
                goto LABEL_30;
              }
              v30 = (unsigned __int8 *)(v27 + 76);
              v31 = *(_WORD *)(v27 + 2) & 0x20;
              v36.m128i_i16[1] = *(_WORD *)(v27 + 72);
              v36.m128i_i16[0] = v29;
              v36.m128i_i64[1] = v27 + 76;
              if ( *a3 == 26732 )
              {
                if ( v31 )
                {
                  for ( ; v29; --v29 )
                  {
                    v32 = *v30;
                    if ( (unsigned __int8)v32 >= 0x61u )
                    {
                      if ( (unsigned __int8)v32 > 0x7Au )
                        v32 = NLS_UPCASE(*v30);
                      else
                        v32 -= 32;
                    }
                    ++v30;
                    v7 = v32 + 37 * v7;
                  }
LABEL_28:
                  if ( *((_DWORD *)v15 + 2) != v7 )
                  {
                    v9 = 1;
                    if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbCodePageTag) && (CmpBootType & 6) == 0 )
                    {
                      v34 = 16;
                      goto LABEL_56;
                    }
                    SetFailureLocation(a5, 1, 23, -1073741492, 32);
                    if ( !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
                    {
                      v34 = 48;
                      v13 = -1073741443;
LABEL_56:
                      SetFailureLocation(a5, 0, 23, v13, v34);
                      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v35);
                      return v13;
                    }
                    *((_DWORD *)v15 + 2) = v7;
                    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
                  }
                  goto LABEL_29;
                }
                v33 = CmpHashUnicodeComponent(&v36);
              }
              else
              {
                if ( v31 )
                {
                  LODWORD(v37) = 0;
                  if ( v29 < 4 )
                  {
                    if ( !v29 )
                      goto LABEL_28;
                  }
                  else
                  {
                    v29 = 4;
                  }
                  memmove(&v37, v30, v29);
                  v7 = v37;
                  goto LABEL_28;
                }
                v33 = CmpGenerateFastLeafHintForUnicodeString(&v36);
              }
              v7 = v33;
              goto LABEL_28;
            }
          }
        }
      }
    }
LABEL_30:
    if ( ++v12 >= (unsigned int)(unsigned __int16)a3[1] )
      break;
    v7 = 0;
  }
  if ( !v9 )
    return 0LL;
  return 2147483690LL;
}
