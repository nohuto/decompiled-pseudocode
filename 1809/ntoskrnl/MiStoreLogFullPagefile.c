/*
 * XREFs of MiStoreLogFullPagefile @ 0x1402C4130
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void MiStoreLogFullPagefile()
{
  UINT32 cData; // edx
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  const GUID *v3; // [rsp+20h] [rbp-58h]
  const GUID *v4; // [rsp+28h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
      TlgWriteEx(v2, &unk_14036F78D, v1, (ULONG)v2, v3, v4, cData, &pData);
  }
}
