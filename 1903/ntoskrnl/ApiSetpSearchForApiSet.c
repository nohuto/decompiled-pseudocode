/*
 * XREFs of ApiSetpSearchForApiSet @ 0x14017D27C
 * Callers:
 *     ApiSetResolveToHost @ 0x14015441C (ApiSetResolveToHost.c)
 *     ApiSetValidateSchemaFormat @ 0x1403431A4 (ApiSetValidateSchemaFormat.c)
 *     ApiSetComposeSchema @ 0x140343458 (ApiSetComposeSchema.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1406B9CB0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  unsigned int v6; // edi
  const WCHAR *v7; // r8
  int v8; // ebx
  __int64 v9; // r9
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // cx
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r9

  v6 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a1[6];
    v9 = a3;
    do
    {
      v10 = *v7++;
      v11 = v10 + 32;
      if ( (unsigned __int16)(v10 - 65) > 0x19u )
        v11 = v10;
      v6 = v11 + v8 * v6;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0LL;
  v13 = a1[3] - 1;
  v14 = 0;
  if ( v13 < 0 )
    return v12;
  while ( 1 )
  {
    v15 = (v13 + v14) >> 1;
    v16 = (unsigned int)a1[5] + 8LL * v15;
    if ( v6 >= *(_DWORD *)((char *)a1 + v16) )
      break;
    v13 = v15 - 1;
LABEL_9:
    if ( v14 > v13 )
      return v12;
  }
  if ( v6 > *(_DWORD *)((char *)a1 + v16) )
  {
    v14 = v15 + 1;
    goto LABEL_9;
  }
  v12 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v16 + 4)] + (unsigned int)a1[4];
  if ( !v12
    || !RtlCompareUnicodeStrings(
          a2,
          a3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v12 + 4)),
          (unsigned __int64)*(unsigned int *)(v12 + 12) >> 1,
          1u) )
  {
    return v12;
  }
  return 0LL;
}
