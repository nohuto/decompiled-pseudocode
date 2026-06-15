/*
 * XREFs of WPP_SF_qSSq @ 0x1800E3960
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18003E024 (-OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_qSSq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a5 + 2 * v5) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, 36LL, &v7);
}
