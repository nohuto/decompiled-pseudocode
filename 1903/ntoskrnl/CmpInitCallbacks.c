/*
 * XREFs of CmpInitCallbacks @ 0x14075C200
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 */

__int64 CmpInitCallbacks()
{
  __int64 result; // rax

  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_140463C68 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  CmpCallbackContextSList = 0uLL;
  return result;
}
