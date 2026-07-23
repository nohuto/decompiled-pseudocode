/*
 * XREFs of MiStoreLogWriteCompleteFailure @ 0x1402C419C
 * Callers:
 *     SmIoRequestComplete @ 0x14014CA9C (SmIoRequestComplete.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void MiStoreLogWriteCompleteFailure()
{
  ULONG64 v0; // r8
  const struct _TlgProvider_t *v1; // r9
  int v2; // r10d
  const GUID *v3; // [rsp+20h] [rbp-68h]
  const GUID *v4; // [rsp+28h] [rbp-60h]
  int v5; // [rsp+40h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  int *v7; // [rsp+68h] [rbp-20h]
  int v8; // [rsp+70h] [rbp-18h]
  int v9; // [rsp+74h] [rbp-14h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = v2;
      v8 = 4;
      TlgWriteEx(v1, &unk_14036F697, v0, (ULONG)v1, v3, v4, 3u, &pData);
    }
  }
}
