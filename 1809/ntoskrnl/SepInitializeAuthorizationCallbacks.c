/*
 * XREFs of SepInitializeAuthorizationCallbacks @ 0x1409AED7C
 * Callers:
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 * Callees:
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 */

__int64 __fastcall SepInitializeAuthorizationCallbacks(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-30h] BYREF
  __int16 v5; // [rsp+24h] [rbp-2Ch]
  int v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = 65538;
  v6 = 1;
  v5 = 6;
  if ( (int)ExRegisterHost(&SepAuthExtensionHost, a2, (unsigned __int16 *)&v4) < 0 )
    SepAuthExtensionHost = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = 36;
  v4 = 65539;
  v6 = 512;
  result = ExRegisterHost(&SepBCryptExtensionHost, v2, (unsigned __int16 *)&v4);
  if ( (int)result < 0 )
    SepBCryptExtensionHost = 0LL;
  return result;
}
