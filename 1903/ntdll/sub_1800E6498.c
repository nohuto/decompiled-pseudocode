/*
 * XREFs of sub_1800E6498 @ 0x1800E6498
 * Callers:
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x18009CCC0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x18009CCE0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x18009CF20 (ZwDuplicateToken.c)
 */

__int64 __fastcall sub_1800E6498(__int64 a1, bool *a2)
{
  int InformationToken; // ebx
  int v5; // [rsp+44h] [rbp+3h]

  *a2 = 0;
  if ( !a1 )
  {
    InformationToken = ZwOpenThreadTokenEx();
    if ( InformationToken == -1073741700 )
    {
      InformationToken = ZwOpenProcessTokenEx();
      if ( InformationToken < 0 )
        return (unsigned int)InformationToken;
      InformationToken = ZwDuplicateToken();
      ZwClose();
    }
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
  }
  InformationToken = ZwQueryInformationToken();
  if ( InformationToken >= 0 )
    *a2 = v5 != 0;
  return (unsigned int)InformationToken;
}
