/*
 * XREFs of BgkpTryEnableConsole @ 0x14016F968
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAC0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1409FB8D0 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14043C710 )
  {
    if ( byte_14043C735 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140404088, 0LL);
  }
  return result;
}
