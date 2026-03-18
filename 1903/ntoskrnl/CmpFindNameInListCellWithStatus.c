/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x140839860
 * Callers:
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14083A2F0 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x140657160 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x140832C58 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v10; // edx
  __int64 v11; // rbx
  unsigned int *v12; // r12
  int v13; // r15d
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  wchar_t *v16; // r10
  LONG v17; // eax
  int v18; // esi
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+70h] [rbp+30h]

  v22 = a1;
  v20 = 0xFFFFFFFFLL;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  if ( !a3 )
  {
    v10 = -1073741772;
    *a7 = -1;
    if ( a6 )
      *a6 = 0;
    return v10;
  }
  v11 = 0LL;
  v12 = a2;
  v13 = a5 & 0x10000;
  while ( 1 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *v12, &v20);
    v15 = *(_WORD *)(v14 + 2);
    v16 = (wchar_t *)(v14 + 20);
    LOBYTE(v14) = *(_BYTE *)(v14 + 16);
    String2.Buffer = v16;
    String2.Length = v15;
    String2.MaximumLength = v15;
    if ( (v14 & 1) != 0 )
    {
      v17 = v13
          ? CmpCompareTwoCompressedNames(*(unsigned __int8 **)(a4 + 8), *(_WORD *)a4, (unsigned __int8 *)v16, v15)
          : CmpCompareCompressedName(a4, (unsigned __int8 *)v16, v15, 0);
    }
    else
    {
      if ( v13 )
      {
        v18 = -(int)CmpCompareCompressedName((__int64)&String2, *(unsigned __int8 **)(a4 + 8), *(_WORD *)a4, 0);
        goto LABEL_13;
      }
      v17 = RtlCompareUnicodeString((PCUNICODE_STRING)a4, &String2, 1u);
    }
    v18 = v17;
LABEL_13:
    (*(void (__fastcall **)(__int64, __int64 *))(v22 + 16))(v22, &v20);
    if ( !v18 )
      break;
    a1 = v22;
    v11 = (unsigned int)(v11 + 1);
    ++v12;
    if ( (unsigned int)v11 >= a3 )
    {
      v10 = -1073741772;
      *a7 = -1;
      if ( a6 )
        *a6 = a3;
      return v10;
    }
  }
  v10 = 0;
  *a7 = a2[v11];
  if ( a6 )
    *a6 = v11;
  return v10;
}
