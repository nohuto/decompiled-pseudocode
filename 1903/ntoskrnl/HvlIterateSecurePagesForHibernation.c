/*
 * XREFs of HvlIterateSecurePagesForHibernation @ 0x14028AD84
 * Callers:
 *     PopWriteSecurePages @ 0x1402F7BA8 (PopWriteSecurePages.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x14028E614 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x14028E780 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14028E998 (HvlpStartSecurePageListIteration.c)
 *     PopWriteSecurePagesCallback @ 0x1402F7C50 (PopWriteSecurePagesCallback.c)
 */

__int64 __fastcall HvlIterateSecurePagesForHibernation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int SecurePageList; // ebx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  result = HvlpStartSecurePageListIteration(0LL, 3LL);
  if ( (int)result >= 0 )
  {
    do
    {
      SecurePageList = HvlpGetSecurePageList(0LL, 0LL, 0LL, v9, 0LL, &v10);
      if ( SecurePageList >= 0 )
        PopWriteSecurePagesCallback(a2, v9[0]);
    }
    while ( !SecurePageList );
    HvlpEndSecurePageListIteration(0LL, a3, a4);
    if ( SecurePageList == -2147483622 )
      return 0;
    return (unsigned int)SecurePageList;
  }
  return result;
}
