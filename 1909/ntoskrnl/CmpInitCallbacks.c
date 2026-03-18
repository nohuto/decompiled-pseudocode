/*
 * XREFs of CmpInitCallbacks @ 0x140760980
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 */

__int64 CmpInitCallbacks()
{
  __int64 result; // rax

  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_140463948 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  CmpCallbackContextSList = 0uLL;
  return result;
}
