/*
 * XREFs of sub_18011937C @ 0x18011937C
 * Callers:
 *     sub_1801186AC @ 0x1801186AC (sub_1801186AC.c)
 * Callees:
 *     sub_18011830C @ 0x18011830C (sub_18011830C.c)
 *     sub_180118358 @ 0x180118358 (sub_180118358.c)
 *     sub_1801192AC @ 0x1801192AC (sub_1801192AC.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

_QWORD *__fastcall sub_18011937C(_QWORD *a1)
{
  GUID rguid; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-48h] BYREF
  GUID pguid; // [rsp+58h] [rbp-20h] BYREF

  *(_QWORD *)&pguid.Data1 = a1;
  if ( CoCreateGuid(&pguid) )
  {
    sub_18011DA98(&unk_18025EE40, 4LL, "Unable to generate a valid, globally unique, GUID");
    sub_18011830C(a1);
  }
  else
  {
    rguid = pguid;
    memset(v4, 0, sizeof(v4));
    sub_1801192AC(&rguid);
    sub_180118358(a1, (__int64)&rguid);
  }
  return a1;
}
