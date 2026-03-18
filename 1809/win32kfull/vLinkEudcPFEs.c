/*
 * XREFs of vLinkEudcPFEs @ 0x1C00CA124
 * Callers:
 *     bAddAllFlEntry @ 0x1C00C6838 (bAddAllFlEntry.c)
 *     bDeleteAllFlEntry @ 0x1C00CAE88 (bDeleteAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vLinkEudcPFEsWorker @ 0x1C00CAC14 (vLinkEudcPFEsWorker.c)
 */

void __fastcall vLinkEudcPFEs(__int64 a1)
{
  struct _FONTHASH **v2; // rbx
  __int64 i; // rdi
  struct PFT *v4; // rbx
  __int64 j; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v2 = gpPFTPublic;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v2 + 6); i = (unsigned int)(i + 1) )
  {
    if ( v2[i + 5] )
      vLinkEudcPFEsWorker(a1);
  }
  v4 = gpPFTDevice;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)v4 + 6); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)v4 + j + 5) )
      vLinkEudcPFEsWorker(a1);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
