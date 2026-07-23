/*
 * XREFs of PspInitializeOctagonExtensionHost @ 0x1409AEC24
 * Callers:
 *     PspInitPhase1 @ 0x1409AC320 (PspInitPhase1.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 */

__int64 PspInitializeOctagonExtensionHost()
{
  __int64 v0; // rdx
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, 0x28uLL);
  LODWORD(v2[0]) = 131085;
  v2[2] = &PspOctHostInterface;
  LODWORD(v2[1]) = 512;
  result = ExRegisterHost(&PspOctExtensionHost, v0, (unsigned __int16 *)v2);
  if ( (int)result < 0 )
    PspOctExtensionHost = 0LL;
  return result;
}
