/*
 * XREFs of CmpCheckLeaf @ 0x1405D9BC0
 * Callers:
 *     CmpCheckKey @ 0x1405DB210 (CmpCheckKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x1405B0420 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, unsigned int a4, __int64 a5)
{
  __int16 v6; // ax
  unsigned int v8; // r14d
  unsigned __int64 v9; // r9
  _WORD *v10; // r13
  bool v11; // zf
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  int *v15; // r11
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // r10
  bool v19; // bl
  _WORD *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // esi
  unsigned __int8 *v23; // rdi
  __int16 v24; // cx
  int i; // ebx
  WCHAR v26; // ax
  int FastLeafHintForUnicodeString; // eax
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // [rsp+30h] [rbp-68h] BYREF
  __int64 v32; // [rsp+38h] [rbp-60h] BYREF
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  __m128i v34; // [rsp+48h] [rbp-50h] BYREF
  char v36; // [rsp+B0h] [rbp+18h]

  v36 = 0;
  v32 = 0LL;
  v6 = *a3 - 26220;
  LODWORD(v32) = -1;
  if ( (v6 & 0xFDFF) != 0 )
    return 0LL;
  v8 = 0;
  if ( !a3[1] )
    return 0LL;
  do
  {
    v9 = *(unsigned int *)&a3[4 * v8 + 2];
    v10 = &a3[4 * v8];
    v11 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
    v33 = 0xFFFFFFFFLL;
    if ( !v11 )
    {
LABEL_22:
      v20 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *, unsigned __int64))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       *((unsigned int *)v10 + 1),
                       &v32,
                       v9);
      if ( !v20 )
      {
        SetFailureLocation(a5, 0, 23, -1073741670, 0);
        return 3221225626LL;
      }
      v21 = -4 - *((_DWORD *)v20 - 1);
      if ( v21 < 0x4C )
        goto LABEL_31;
      v22 = (unsigned __int16)v20[36];
      if ( v22 > v21 - 76 )
        goto LABEL_31;
      v23 = (unsigned __int8 *)(v20 + 38);
      v24 = v20[1] & 0x20;
      v34.m128i_i16[1] = v20[36];
      v34.m128i_i16[0] = v22;
      v34.m128i_i64[1] = (__int64)(v20 + 38);
      if ( *a3 == 26732 )
      {
        if ( v24 )
        {
          for ( i = 0; v22; --v22 )
          {
            v26 = *v23;
            if ( (unsigned __int8)v26 >= 0x61u )
            {
              if ( (unsigned __int8)v26 > 0x7Au )
                v26 = RtlUpcaseUnicodeChar(*v23);
              else
                v26 -= 32;
            }
            ++v23;
            i = v26 + 37 * i;
          }
LABEL_30:
          if ( *((_DWORD *)v10 + 2) != i )
          {
            v36 = 1;
            if ( (a2 & 0x20000) != 0 || !CmpSelfHeal && (CmpBootType & 6) == 0 )
            {
              v30 = 16;
              v29 = -1073741492;
              goto LABEL_58;
            }
            SetFailureLocation(a5, 1, 23, -1073741492, 32);
            if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, a4) )
            {
              v29 = -1073741443;
              v30 = 48;
LABEL_58:
              SetFailureLocation(a5, 0, 23, v29, v30);
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
              return v29;
            }
            *((_DWORD *)v10 + 2) = i;
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
          }
LABEL_31:
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v32);
          goto LABEL_32;
        }
        FastLeafHintForUnicodeString = CmpHashUnicodeComponent(&v34);
      }
      else
      {
        if ( v24 )
        {
          i = 0;
          v31 = 0;
          if ( v22 < 4 )
          {
            if ( !v22 )
              goto LABEL_30;
          }
          else
          {
            v22 = 4;
          }
          memmove(&v31, v20 + 38, v22);
          i = v31;
          goto LABEL_30;
        }
        FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString((unsigned __int16 *)&v34);
      }
      i = FastLeafHintForUnicodeString;
      goto LABEL_30;
    }
    if ( (v9 & 0x7FFFFFFF) >= *(_DWORD *)(632 * ((unsigned __int64)(unsigned int)v9 >> 31) + BugCheckParameter2 + 272) )
      goto LABEL_32;
    if ( (v9 & 7) != 0 )
      goto LABEL_32;
    v12 = (unsigned int)v9 >> 31;
    if ( (unsigned int)(v9 + ((_DWORD)v12 << 31)) >= *(_DWORD *)(632 * v12 + BugCheckParameter2 + 272) )
      goto LABEL_32;
    v13 = *(_QWORD *)(*(_QWORD *)(632 * v12 + BugCheckParameter2 + 280) + 8LL * (((unsigned int)v9 >> 21) & 0x3FF))
        + 24 * (((unsigned __int64)(unsigned int)v9 >> 12) & 0x1FF);
    if ( !v13 || (*(_BYTE *)(v13 + 8) & 2) != 0 )
      goto LABEL_32;
    v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)v9,
            &v33);
    if ( !v14 )
    {
      v15 = 0LL;
LABEL_46:
      v19 = 1;
      goto LABEL_19;
    }
    v15 = (int *)(v14 - 4);
    if ( v14 == 4 )
      goto LABEL_46;
    v9 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
    v16 = -*v15;
    v17 = (_DWORD)v15 - v9;
    v19 = 0;
    if ( *v15 < 0 && v16 - 8 <= 0xFFFF8 )
    {
      v18 = *(unsigned int *)((*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      if ( v16 <= (unsigned __int64)(v18 - 32) && v17 - *v15 <= (unsigned int)v18 && v17 >= 0x20 )
        v19 = 1;
    }
    if ( v9 )
      LOWORD(v31) = 0;
LABEL_19:
    if ( v15 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v33);
    if ( v19 )
      goto LABEL_22;
LABEL_32:
    ++v8;
  }
  while ( v8 < (unsigned __int16)a3[1] );
  if ( !v36 )
    return 0LL;
  return 2147483690LL;
}
