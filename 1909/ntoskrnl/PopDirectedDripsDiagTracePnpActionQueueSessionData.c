/*
 * XREFs of PopDirectedDripsDiagTracePnpActionQueueSessionData @ 0x1408B81B0
 * Callers:
 *     PopDirectedDripsPnpActionQueueAccountingSend @ 0x1402F1140 (PopDirectedDripsPnpActionQueueAccountingSend.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall PopDirectedDripsDiagTracePnpActionQueueSessionData(__int64 a1, __int64 a2, const __m128i *a3)
{
  __m128i v4; // xmm1
  __int64 v6; // r9
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  unsigned __int64 v9; // xmm1_8
  const GUID *v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v14; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v18; // [rsp+70h] [rbp-9h]
  __int64 v19; // [rsp+78h] [rbp-1h]
  unsigned __int64 *v20; // [rsp+80h] [rbp+7h]
  __int64 v21; // [rsp+88h] [rbp+Fh]
  __int64 v22; // [rsp+90h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+1Fh]
  __int64 v24; // [rsp+A0h] [rbp+27h]
  __int64 v25; // [rsp+A8h] [rbp+2Fh]
  __int64 *v26; // [rsp+B0h] [rbp+37h]
  __int64 v27; // [rsp+B8h] [rbp+3Fh]

  v4 = 0LL;
  v6 = 13LL;
  do
  {
    v7 = _mm_loadu_si128(a3++);
    v8 = _mm_add_epi64(v7, v4);
    v4 = v8;
    --v6;
  }
  while ( v6 );
  v9 = _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_u64[0];
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(a3) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)a3 )
    {
      v14 = a1;
      v18 = &v14;
      v20 = &v15;
      v26 = &v16;
      v15 = v9;
      v16 = 0x1000000LL;
      v19 = 8LL;
      v21 = 8LL;
      v22 = v12;
      v23 = 104LL;
      v24 = v11;
      v25 = 208LL;
      v27 = 8LL;
      LOBYTE(a3) = TlgWrite(&pCallbackContext, &unk_140391534, 0LL, v10, 7u, &pData);
    }
  }
  return (char)a3;
}
