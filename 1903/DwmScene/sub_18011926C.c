/*
 * XREFs of sub_18011926C @ 0x18011926C
 * Callers:
 *     sub_18011859C @ 0x18011859C (sub_18011859C.c)
 * Callees:
 *     sub_1801181FC @ 0x1801181FC (sub_1801181FC.c)
 *     sub_180118248 @ 0x180118248 (sub_180118248.c)
 *     sub_18011919C @ 0x18011919C (sub_18011919C.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall sub_18011926C(_QWORD *a1)
{
  GUID rguid; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-48h] BYREF
  GUID pguid; // [rsp+58h] [rbp-20h] BYREF

  *(_QWORD *)&pguid.Data1 = a1;
  if ( CoCreateGuid(&pguid) )
  {
    sub_18011D988(&unk_18025DE40, 4LL, "Unable to generate a valid, globally unique, GUID");
    sub_1801181FC(a1);
  }
  else
  {
    rguid = pguid;
    memset(v4, 0, sizeof(v4));
    sub_18011919C(&rguid);
    sub_180118248(a1, (__int64)&rguid);
  }
  return a1;
}
