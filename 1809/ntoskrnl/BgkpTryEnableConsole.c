/*
 * XREFs of BgkpTryEnableConsole @ 0x14016FA88
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1409FC8E0 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14043D7D0 )
  {
    if ( byte_14043D7F5 )
      return _InterlockedExchange64((volatile __int64 *)&stru_140405088, 0LL);
  }
  return result;
}
