/*
 * XREFs of WPP_SF_qsDDs @ 0x1C0061AA0
 * Callers:
 *     ndisRssPmObjectHeaderFixup @ 0x1C001E2CC (ndisRssPmObjectHeaderFixup.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qsDDs(
        unsigned __int16 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        char a5,
        char a6,
        const char *a7)
{
  const char *v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v12 = a3;
  v7 = a7;
  v8 = -1LL;
  if ( a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a7[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5LL;
  }
  if ( !a7 )
    v7 = "NULL";
  if ( a4 )
  {
    do
      ++v8;
    while ( a4[v8] );
    v11 = v8 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  if ( !a4 )
    a4 = "NULL";
  ndisWppFastTraceMessage(
    &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
    a1,
    &v12,
    8LL,
    a4,
    v11,
    &a5,
    4LL,
    &a6,
    4LL,
    v7,
    v10,
    0LL);
}
