/*
 * XREFs of ?seed@?$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@std@@QEAAXII@Z @ 0x1801C80E8
 * Callers:
 *     ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x1801C4964 (--0CParticleEmitter@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::seed(
        _DWORD *a1,
        unsigned int a2)
{
  unsigned int *v2; // r9
  int v3; // r8d
  __int64 v4; // r10
  __int64 result; // rax

  a1[1] = a2;
  v2 = a1 + 2;
  v3 = 1;
  v4 = 623LL;
  do
  {
    result = a2 ^ (a2 >> 30);
    a2 = v3 + 1812433253 * result;
    ++v3;
    *v2++ = a2;
    --v4;
  }
  while ( v4 );
  *a1 = 624;
  return result;
}
