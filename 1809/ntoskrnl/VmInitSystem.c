/*
 * XREFs of VmInitSystem @ 0x1409AED1C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 */

__int64 VmInitSystem()
{
  __int64 v0; // rdx
  int v1; // eax
  unsigned int v2; // ecx
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, 0x28uLL);
  LODWORD(v4[0]) = 983048;
  WORD2(v4[0]) = 1;
  LODWORD(v4[1]) = 512;
  v4[2] = &VmpHostInterface;
  v1 = ExRegisterHost(&VmpExtensionHost, v0, (unsigned __int16 *)v4);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
