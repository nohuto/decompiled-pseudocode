/*
 * XREFs of CmpDoCompareKeyName @ 0x1405D6C70
 * Callers:
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCompareInIndex @ 0x1405D61D0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D6370 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpSelectLeaf @ 0x140701300 (CmpSelectLeaf.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14073E400 (CmpFindSubKeyByHashWithStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x1407FA9AC (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpDoCompareKeyName(__int64 a1, const UNICODE_STRING *a2, unsigned __int16 *a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned __int16 v9; // cx
  __int64 v10; // r10
  LONG v11; // eax
  int v12; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+30h] [rbp-8h]
  int v15; // [rsp+40h] [rbp+8h] BYREF
  int v16; // [rsp+44h] [rbp+Ch]

  v15 = -1;
  v16 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a4, &v15);
  if ( !v7 )
    return 2LL;
  v9 = *(_WORD *)(v7 + 72);
  v10 = v7 + 76;
  if ( (*(_BYTE *)(v7 + 2) & 0x20) != 0 )
  {
    if ( a3 )
      v11 = CmpCompareTwoCompressedNames(*((_QWORD *)a3 + 1), *a3, v10, v9);
    else
      v11 = CmpCompareCompressedName(a2, v10, v9, 0LL, *(_QWORD *)&String2.Length, String2.Buffer, v14);
  }
  else
  {
    String2.Buffer = (wchar_t *)(v7 + 76);
    String2.Length = v9;
    String2.MaximumLength = v9;
    if ( a3 )
    {
      v12 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, _QWORD, _QWORD, _QWORD))CmpCompareCompressedName)(
                    &String2,
                    *((_QWORD *)a3 + 1),
                    *a3,
                    0LL);
      goto LABEL_11;
    }
    v11 = RtlCompareUnicodeString(a2, &String2, 1u);
  }
  v12 = v11;
LABEL_11:
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v15);
  if ( v12 )
    return ((v12 >> 31) & 0xFFFFFFFE) + 1;
  else
    return 0LL;
}
