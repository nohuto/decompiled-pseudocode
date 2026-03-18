/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x14028E6F8
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14028A948 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x14028AAE4 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14028B62C (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x14028BDC8 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpSetupPageListIteration @ 0x14028E650 (HvlpSetupPageListIteration.c)
 */

NTSTATUS __fastcall HvlpStartSecurePageListIteration(int a1, unsigned int a2)
{
  __int64 v2; // rdi
  NTSTATUS result; // eax
  int *v5; // rcx
  _QWORD v6[14]; // [rsp+20h] [rbp-88h] BYREF

  v2 = a2;
  if ( !HvlpSetupPageListIteration(a1, 1) )
    return -1073741823;
  memset(v6, 0, 0x68uLL);
  v6[2] = v2;
  v6[1] = a1 == 0;
  result = VslpEnterIumSecureMode(2, 2048LL, 0LL, (__int64)v6);
  if ( result < 0 )
  {
    v5 = &HvlpIteratorCrashdump;
    if ( !a1 )
      v5 = &HvlpIteratorHibernate;
    *((_QWORD *)v5 + 1) = 0LL;
    *v5 = 0;
  }
  return result;
}
