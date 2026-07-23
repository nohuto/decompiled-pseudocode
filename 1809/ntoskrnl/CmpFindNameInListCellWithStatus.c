/*
 * XREFs of CmpFindNameInListCellWithStatus @ 0x1405D1720
 * Callers:
 *     CmpFindNameInListWithStatus @ 0x1405D1670 (CmpFindNameInListWithStatus.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x140801FC0 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x1407FA9AC (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindNameInListCellWithStatus(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        const UNICODE_STRING *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v7; // rsi
  const UNICODE_STRING *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r12
  unsigned int *v11; // r13
  int v12; // r15d
  __int64 v13; // rax
  unsigned __int16 v14; // r14
  wchar_t *v15; // rbp
  unsigned __int16 v16; // r15
  WCHAR *Buffer; // rbx
  WCHAR v18; // di
  unsigned int v19; // esi
  int v20; // edi
  int v21; // edi
  __int64 result; // rax
  LONG v23; // eax
  __int64 v24; // [rsp+20h] [rbp-68h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-60h] BYREF
  int v30; // [rsp+B0h] [rbp+28h]

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v24 = 0xFFFFFFFFLL;
  if ( a3 )
  {
    v10 = 0LL;
    v11 = a2;
    v12 = a5 & 0x10000;
    v30 = a5 & 0x10000;
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v7 + 8))(v7, *v11, &v24);
      v14 = *(_WORD *)(v13 + 2);
      v15 = (wchar_t *)(v13 + 20);
      LOBYTE(v13) = *(_BYTE *)(v13 + 16);
      String2.Buffer = v15;
      String2.Length = v14;
      String2.MaximumLength = v14;
      if ( (v13 & 1) != 0 )
      {
        if ( v12 )
        {
          v23 = CmpCompareTwoCompressedNames(v8->Buffer, v8->Length, v15, v14);
          goto LABEL_32;
        }
        v16 = v8->Length >> 1;
        Buffer = v8->Buffer;
        if ( v16 )
        {
          while ( 1 )
          {
            if ( !v14 )
            {
LABEL_9:
              v7 = a1;
              goto LABEL_10;
            }
            v18 = *Buffer++;
            v19 = *(unsigned __int8 *)v15;
            v15 = (wchar_t *)((char *)v15 + 1);
            if ( v18 != (_WORD)v19 )
            {
              if ( v18 >= 0x61u )
              {
                if ( v18 > 0x7Au )
                  v18 = RtlUpcaseUnicodeChar(v18);
                else
                  v18 -= 32;
              }
              if ( v19 >= 0x61 )
              {
                if ( v19 > 0x7A )
                  LOWORD(v19) = RtlUpcaseUnicodeChar(v19);
                else
                  LOWORD(v19) = v19 - 32;
              }
              v21 = v18 - (unsigned __int16)v19;
              if ( v21 )
                break;
            }
            --v14;
            if ( !--v16 )
              goto LABEL_9;
          }
          v7 = a1;
          v9 = a3;
          v12 = v30;
        }
        else
        {
LABEL_10:
          v9 = a3;
          v20 = v16;
          v12 = v30;
          v21 = v20 - v14;
        }
      }
      else
      {
        if ( !v12 )
        {
          v23 = RtlCompareUnicodeString(v8, &String2, 1u);
LABEL_32:
          v21 = v23;
          goto LABEL_15;
        }
        v21 = -(int)((__int64 (__fastcall *)(UNICODE_STRING *, wchar_t *, _QWORD, _QWORD, __int64))CmpCompareCompressedName)(
                      &String2,
                      v8->Buffer,
                      v8->Length,
                      0LL,
                      v24);
      }
LABEL_15:
      (*(void (__fastcall **)(__int64, __int64 *))(v7 + 16))(v7, &v24);
      if ( !v21 )
      {
        result = 0LL;
        *a7 = a2[v10];
        if ( a6 )
          *a6 = v10;
        return result;
      }
      v8 = a4;
      v10 = (unsigned int)(v10 + 1);
      ++v11;
      if ( (unsigned int)v10 >= v9 )
      {
        *a7 = -1;
        if ( a6 )
          *a6 = v9;
        return 3221225524LL;
      }
    }
  }
  *a7 = -1;
  if ( a6 )
    *a6 = 0;
  return 3221225524LL;
}
