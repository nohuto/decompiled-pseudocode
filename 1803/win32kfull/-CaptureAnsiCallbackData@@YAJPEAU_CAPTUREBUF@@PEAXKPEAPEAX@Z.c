/*
 * XREFs of ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0052A10
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C00201D0 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C0023830 (SfnINSTRINGNULL.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C005202C (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C00FC540 (SfnINSTRING.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C01DBCF0 (SfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x1C0053774 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureAnsiCallbackData(struct _CAPTUREBUF *a1, PCWCH UnicodeString, ULONG a3, void **a4)
{
  ULONG v5; // r10d
  CHAR *v7; // rsi
  ULONG v9; // ecx
  ULONG BytesInMultiByteString; // [rsp+58h] [rbp+10h] BYREF

  v5 = a3;
  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( 2 * (unsigned __int64)a3 <= *((unsigned int *)a1 + 1) )
  {
    v7 = (CHAR *)*((_QWORD *)a1 + 2);
    if ( (*gpsi & 2) != 0 )
      v5 = 2 * a3;
    if ( RtlUnicodeToMultiByteN(v7, v5, &BytesInMultiByteString, UnicodeString, 2 * a3) < 0 )
      return 3221225473LL;
    v9 = BytesInMultiByteString;
    *((_QWORD *)a1 + 2) = &v7[(BytesInMultiByteString + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v9;
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v7);
    return 0LL;
  }
  return 2147483653LL;
}
