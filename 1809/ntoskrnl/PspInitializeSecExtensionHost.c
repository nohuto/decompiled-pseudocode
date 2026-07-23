/*
 * XREFs of PspInitializeSecExtensionHost @ 0x1409AEC78
 * Callers:
 *     PspInitPhase1 @ 0x1409AC320 (PspInitPhase1.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 */

__int64 PspInitializeSecExtensionHost()
{
  __int64 v0; // rdx
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, 0x28uLL);
  LODWORD(v2[0]) = 65550;
  v2[2] = &PspSecHostInterface;
  LODWORD(v2[1]) = 512;
  result = ExRegisterHost(&PspSecExtensionHost, v0, (unsigned __int16 *)v2);
  if ( (int)result < 0 )
    PspSecExtensionHost = 0LL;
  return result;
}
