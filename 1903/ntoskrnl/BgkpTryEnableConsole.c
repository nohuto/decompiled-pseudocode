/*
 * XREFs of BgkpTryEnableConsole @ 0x140179174
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A4158C (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140468240 )
  {
    if ( byte_140468265 )
      return _InterlockedExchange64((volatile __int64 *)&stru_14042A678, 0LL);
  }
  return result;
}
