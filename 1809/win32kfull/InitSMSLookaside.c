/*
 * XREFs of InitSMSLookaside @ 0x1C036EE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitSMSLookaside()
{
  gsmsList[1] = gsmsList[0];
  SMSLookaside = (void *)Win32AllocPagedLookasideList(136LL, 1634497365LL, 1836282709LL, 8LL);
  return SMSLookaside == 0LL ? 0xC0000017 : 0;
}
