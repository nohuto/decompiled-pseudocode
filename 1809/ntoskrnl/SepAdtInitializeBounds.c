/*
 * XREFs of SepAdtInitializeBounds @ 0x140736AA4
 * Callers:
 *     SepAdtRegNotificationCallback @ 0x140736A40 (SepAdtRegNotificationCallback.c)
 *     SepAdtInitializeAuditingOptions @ 0x1409C6290 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     SepRegQueryValue @ 0x140736BE4 (SepRegQueryValue.c)
 */

void SepAdtInitializeBounds()
{
  unsigned __int64 v0; // kr00_8
  unsigned __int64 v1; // [rsp+30h] [rbp-18h] BYREF

  if ( SepAdtRegNotifyHandle
    && (int)SepRegQueryValue(SepAdtRegNotifyHandle, &v1) >= 0
    && HIDWORD(v1) < (unsigned int)v1
    && HIDWORD(v1) >= 0x10
    && (unsigned int)(v1 - HIDWORD(v1)) >= 0x10 )
  {
    v0 = v1;
    SepAdtMinListLength = HIDWORD(v0);
    SepAdtMaxListLength = v0;
  }
}
