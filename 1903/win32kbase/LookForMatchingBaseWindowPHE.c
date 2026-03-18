/*
 * XREFs of LookForMatchingBaseWindowPHE @ 0x1C011F984
 * Callers:
 *     UserAddBaseWindowHandle @ 0x1C011FA60 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C011FE34 (UserFindBaseWindowHandle.c)
 *     UserFindBaseWindowHandleLocked @ 0x1C01203F0 (UserFindBaseWindowHandleLocked.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMFindEntry @ 0x1C0105840 (HMFindEntry.c)
 */

char *__fastcall LookForMatchingBaseWindowPHE(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)&v4,
    a2,
    a3);
  return HMFindEntry((__int64)v5, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
}
