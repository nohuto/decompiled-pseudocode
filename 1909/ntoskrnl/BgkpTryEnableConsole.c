/*
 * XREFs of BgkpTryEnableConsole @ 0x140179864
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A4135C (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140467F80 )
  {
    if ( byte_140467FA5 )
      return _InterlockedExchange64((volatile __int64 *)&stru_14042A688, 0LL);
  }
  return result;
}
