/*
 * XREFs of sub_18000AA3C @ 0x18000AA3C
 * Callers:
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 * Callees:
 *     sub_180007A48 @ 0x180007A48 (sub_180007A48.c)
 *     sub_18000AB50 @ 0x18000AB50 (sub_18000AB50.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_180081F40 @ 0x180081F40 (sub_180081F40.c)
 *     sub_180084244 @ 0x180084244 (sub_180084244.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010D540 @ 0x18010D540 (sub_18010D540.c)
 */

void __fastcall sub_18000AA3C(__int64 a1)
{
  char v2; // r14
  _RTL_SRWLOCK *v3; // rax
  _RTL_SRWLOCK *v4; // rsi
  _RTL_SRWLOCK *v5; // rdi
  unsigned __int8 *v6; // rbp
  __int64 v7; // r15
  __int128 v8; // xmm0
  _QWORD v9[15]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = 0;
  v3 = (_RTL_SRWLOCK *)sub_18000AB50((void *)(a1 + 32));
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 5;
    RtlAcquireSRWLockShared(v3 + 5);
    *(_QWORD *)(a1 + 248) = v4;
    sub_180081F40(a1);
    v6 = (unsigned __int8 *)(a1 + 150);
    v7 = 4LL;
    do
    {
      if ( *(v6 - 2) )
      {
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          sub_18010D540(*v6, a1);
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
        v8 = *(_OWORD *)&v4[3].Ptr;
        v9[13] = v4[19].Ptr;
        LODWORD(v9[14]) = v4[20].Ptr;
        *(_OWORD *)&v9[5] = v8;
        RtlReleaseSRWLockShared(v5);
        sub_180007A48((__int64)v9, a1, 1);
      }
      else
      {
        RtlReleaseSRWLockShared(v5);
        sub_180084244(a1);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v5);
    }
  }
}
