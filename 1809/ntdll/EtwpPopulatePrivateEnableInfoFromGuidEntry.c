/*
 * XREFs of EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x180085200
 * Callers:
 *     EtwpCheckForPrivatePreEnable @ 0x180020EE0 (EtwpCheckForPrivatePreEnable.c)
 * Callees:
 *     EtwpUpdatePrivateEnableInfo @ 0x18008524C (EtwpUpdatePrivateEnableInfo.c)
 */

__int64 __fastcall EtwpPopulatePrivateEnableInfoFromGuidEntry(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 248) )
  {
    v2 = 4LL;
    do
    {
      v3 = *(_QWORD *)(a1 + 248);
      v1 += 24LL;
      *(_OWORD *)(a1 + v1 + 104) = *(_OWORD *)(v1 + v3 + 32);
      *(_QWORD *)(a1 + v1 + 120) = *(_QWORD *)(v1 + v3 + 48);
      --v2;
    }
    while ( v2 );
    return EtwpUpdatePrivateEnableInfo(a1, v1);
  }
  return result;
}
