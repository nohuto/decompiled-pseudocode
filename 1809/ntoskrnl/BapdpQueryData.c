/*
 * XREFs of BapdpQueryData @ 0x1409D260C
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1401862E0 (BapdpProcessEtwEvents.c)
 *     BapdpProcessEDrvHintInfo @ 0x1409D1D68 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1409D1DF8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x1409D1E88 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x1409D1F74 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1409D20F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1409D21C4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x1409D24E8 (BapdpRegisterWbclData.c)
 *     BapdpProcessBootMetadata @ 0x1409D2DB0 (BapdpProcessBootMetadata.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5)
{
  __int64 *v8; // rdx
  int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_1404DC578;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_1404DC578 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      if ( (unsigned int)(*(_DWORD *)(v10 + 32) - 1) <= 1 )
      {
        v11 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v11 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v12 = *(_DWORD *)(v10 + 36);
  if ( *a5 >= v12 )
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), *(unsigned int *)(v10 + 36));
    return 0LL;
  }
  else
  {
    *a5 = v12;
    return 3221225507LL;
  }
}
