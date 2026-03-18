/*
 * XREFs of ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C007ECD0
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C007EA60 (GreGetOutlineTextMetricsInternalW.c)
 *     cjIFIMetricsToOTMW @ 0x1C00CFEA8 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjOTMAWSize(struct _IFIMETRICS *a1, unsigned int *a2)
{
  __int64 v3; // rdi
  const WCHAR *v4; // rdx
  int v6; // ebx
  __int64 v7; // rsi
  ULONG v8; // esi
  NTSTATUS v9; // eax
  ULONG v10; // r12d
  BOOL v11; // r13d
  ULONG v12; // r12d
  const WCHAR *v13; // rdx
  __int64 v14; // rsi
  ULONG v15; // esi
  BOOL v16; // r15d
  __int64 v17; // rsi
  ULONG v18; // r12d
  const WCHAR *v19; // rdx
  ULONG v20; // esi
  int v21; // r15d
  ULONG v22; // r12d
  const WCHAR *v23; // rdx
  ULONG v24; // edi
  NTSTATUS v25; // eax
  ULONG v26; // ecx
  ULONG BytesInMultiByteString; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 240;
  v3 = -1LL;
  v4 = (const WCHAR *)((char *)a1 + a1->dpwszFamilyName);
  v6 = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( v4[v7] );
  v8 = 2 * v7;
  v9 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v4, v8);
  v10 = BytesInMultiByteString;
  v11 = v9 >= 0;
  *a2 += v8;
  v12 = v10 + 236;
  v13 = (const WCHAR *)((char *)a1 + a1->dpwszFaceName);
  v14 = -1LL;
  do
    ++v14;
  while ( v13[v14] );
  v15 = 2 * v14;
  v16 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v13, v15) >= 0;
  *a2 += v15;
  v17 = -1LL;
  v18 = BytesInMultiByteString + v12;
  v19 = (const WCHAR *)((char *)a1 + a1->dpwszStyleName);
  do
    ++v17;
  while ( v19[v17] );
  v20 = 2 * v17;
  v21 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v19, v20) >= 0 && v11 && v16;
  *a2 += v20;
  v22 = BytesInMultiByteString + v18;
  v23 = (const WCHAR *)((char *)a1 + a1->dpwszUniqueName);
  do
    ++v3;
  while ( v23[v3] );
  v24 = 2 * v3;
  v25 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v23, v24);
  v26 = BytesInMultiByteString;
  LOBYTE(v6) = v25 >= 0;
  *a2 += v24;
  return (v21 & v6) != 0 ? v22 + v26 : 0;
}
