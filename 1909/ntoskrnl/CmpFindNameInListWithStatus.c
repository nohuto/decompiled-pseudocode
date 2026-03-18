/*
 * XREFs of CmpFindNameInListWithStatus @ 0x140600430
 * Callers:
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140631140 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInList @ 0x140634354 (CmpFindNameInList.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408277E4 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpCompareCompressedName @ 0x14066A180 (CmpCompareCompressedName.c)
 *     RtlCompareUnicodeStrings @ 0x1406AF3A0 (RtlCompareUnicodeStrings.c)
 *     CmpCompareTwoCompressedNames @ 0x1408322B8 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        __int64 a1,
        unsigned int *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  __int64 v7; // rax
  unsigned int v9; // r13d
  unsigned int v12; // ebp
  int v13; // edi
  unsigned int *v14; // r14
  __int64 v15; // rax
  unsigned __int16 v16; // r9
  const WCHAR *v17; // rbx
  unsigned __int16 v18; // r10
  unsigned __int16 *v19; // r11
  unsigned __int16 v20; // di
  unsigned int v21; // esi
  int v22; // edi
  unsigned int v23; // ebx
  __int64 v24; // rdx
  unsigned __int16 v26; // ax
  LONG v27; // eax
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h] BYREF
  __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  const WCHAR *v31; // [rsp+48h] [rbp-40h]
  __int64 v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A8h] [rbp+20h]

  v29 = 0LL;
  v7 = 0LL;
  v9 = *a2;
  v32 = 0LL;
  LODWORD(v29) = -1;
  if ( v9 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, a2[1], &v29);
    v9 = *a2;
    v32 = v7;
  }
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0xFFFFFFFFLL;
  if ( v9 )
  {
    v12 = 0;
    v13 = a4 & 0x10000;
    v14 = (unsigned int *)v7;
    v33 = v13;
    while ( 1 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *v14, &v28);
      v16 = *(_WORD *)(v15 + 2);
      v17 = (const WCHAR *)(v15 + 20);
      LOBYTE(v15) = *(_BYTE *)(v15 + 16);
      v31 = v17;
      LOWORD(v30) = v16;
      WORD1(v30) = v16;
      if ( (v15 & 1) != 0 )
      {
        if ( v13 )
        {
          v27 = CmpCompareTwoCompressedNames(*((_QWORD *)a3 + 1), *a3, v17, v16);
          goto LABEL_30;
        }
        v18 = *a3 >> 1;
        v19 = (unsigned __int16 *)*((_QWORD *)a3 + 1);
        if ( v18 )
        {
          while ( v16 )
          {
            v20 = *v19++;
            v21 = *(unsigned __int8 *)v17;
            v17 = (const WCHAR *)((char *)v17 + 1);
            if ( v20 != (_WORD)v21 )
            {
              if ( v20 >= 0x61u )
              {
                if ( v20 > 0x7Au )
                  v20 = NLS_UPCASE(v20);
                else
                  v20 -= 32;
              }
              if ( v21 >= 0x61 )
              {
                if ( v21 > 0x7A )
                  LOWORD(v21) = NLS_UPCASE(v21);
                else
                  LOWORD(v21) = v21 - 32;
              }
              v22 = v20 - (unsigned __int16)v21;
              if ( v22 )
                goto LABEL_15;
            }
            --v16;
            if ( !--v18 )
              break;
          }
        }
        v22 = v18 - v16;
      }
      else
      {
        v26 = *a3;
        if ( !v13 )
        {
          v27 = RtlCompareUnicodeStrings(
                  *((PCWCH *)a3 + 1),
                  (unsigned __int64)v26 >> 1,
                  v17,
                  (unsigned __int64)v16 >> 1,
                  1u);
LABEL_30:
          v22 = v27;
          goto LABEL_15;
        }
        v22 = -(int)CmpCompareCompressedName(&v30, *((_QWORD *)a3 + 1), v26, 0LL);
      }
LABEL_15:
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v28);
      if ( !v22 )
      {
        v24 = v32;
        v23 = 0;
        *a6 = *(_DWORD *)(v32 + 4LL * v12);
        if ( a5 )
          *a5 = v12;
        goto LABEL_25;
      }
      v13 = v33;
      ++v12;
      ++v14;
      if ( v12 >= v9 )
      {
        v23 = -1073741772;
        v24 = v32;
        *a6 = -1;
        if ( a5 )
          *a5 = v9;
        goto LABEL_25;
      }
    }
  }
  v23 = -1073741772;
  v24 = v32;
  *a6 = -1;
  if ( a5 )
    *a5 = 0;
LABEL_25:
  if ( v24 )
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v29);
  return v23;
}
