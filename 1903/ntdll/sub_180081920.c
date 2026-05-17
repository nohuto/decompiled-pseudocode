/*
 * XREFs of sub_180081920 @ 0x180081920
 * Callers:
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 * Callees:
 *     sub_180086C60 @ 0x180086C60 (sub_180086C60.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010D214 @ 0x18010D214 (sub_18010D214.c)
 */

void sub_180081920()
{
  __int64 v0; // r8
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v9[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( qword_180163518 )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[0]) = 176;
    v1 = 0;
    v2 = 0LL;
    HIDWORD(v9[5]) = 0x20000;
    while ( 1 )
    {
      v3 = v1 & 0xFFFF7FFF;
      LODWORD(v8) = v1 & 0xFFFF7FFF;
      if ( qword_180163518 )
      {
        if ( v3 < 0x40 )
          goto LABEL_5;
        if ( !(unsigned int)sub_18010D214(v1, &v8) )
          break;
      }
LABEL_7:
      ++v1;
      ++v2;
      if ( v1 >= 0x40 )
        return;
    }
    v3 = v8;
LABEL_5:
    _InterlockedIncrement((volatile signed __int32 *)(qword_180163518 + 16LL * v3 + 8));
    v4 = *(_QWORD *)(qword_180163518 + 16LL * v3);
    if ( (v4 & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * v3 + 8));
    }
    else
    {
      v5 = *(_QWORD *)(qword_180163518 + 16LL * v3);
      v6 = *(unsigned int *)(v4 + 324);
      v7 = 2LL * *(unsigned int *)(v5 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(qword_180163518 + 16LL * *(unsigned int *)(v5 + 20) + 8));
      if ( (v6 & 0x400) == 0 )
      {
        v9[1] = v2;
        sub_180086C60(v7, v6, v0, v9);
      }
    }
    goto LABEL_7;
  }
}
