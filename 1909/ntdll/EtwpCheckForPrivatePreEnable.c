/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x18000AA3C
 * Callers:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpRegisterGuidsApiCallback @ 0x180007A48 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpFindGuidEntry @ 0x18000AB50 (EtwpFindGuidEntry.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     EtwpPopulatePrivateEnableInfoFromGuidEntry @ 0x1800825E0 (EtwpPopulatePrivateEnableInfoFromGuidEntry.c)
 *     EtwpPreEnableEventApiCallback @ 0x1800848E4 (EtwpPreEnableEventApiCallback.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     EtwpGetUmProcessImageInfo @ 0x18010D670 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // r14
  _RTL_SRWLOCK *GuidEntry; // rax
  _RTL_SRWLOCK *v4; // rsi
  _RTL_SRWLOCK *v5; // rdi
  unsigned __int8 *v6; // rbp
  __int64 v7; // r15
  __int128 v8; // xmm0
  _QWORD v9[15]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  GuidEntry = (_RTL_SRWLOCK *)EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = GuidEntry;
  if ( GuidEntry )
  {
    v5 = GuidEntry + 5;
    RtlAcquireSRWLockShared(GuidEntry + 5);
    *(_QWORD *)(a1 + 248) = v4;
    EtwpPopulatePrivateEnableInfoFromGuidEntry(a1);
    v6 = (unsigned __int8 *)(a1 + 150);
    v7 = 4LL;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          EtwpGetUmProcessImageInfo(*v6, a1);
        v2 = 1;
      }
      v6 += 24;
      --v7;
    }
    while ( v7 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      {
        memset(v9, 0, sizeof(v9));
        v8 = *(_OWORD *)&v4[3].0;
        v9[13] = v4[19].0;
        LODWORD(v9[14]) = v4[20].0;
        *(_OWORD *)&v9[5] = v8;
        RtlReleaseSRWLockShared(v5);
        EtwpRegisterGuidsApiCallback((__int64)v9, a1, 1);
      }
      else
      {
        RtlReleaseSRWLockShared(v5);
        EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v5);
    }
  }
}
