/*
 * XREFs of ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C008FE5C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C003BDCC (RIMUpdatePointerDeviceScalingInfo.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CInputSpaceRegion::MapToDisplayPath(
        CInputSpaceRegion *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2)
{
  _OWORD *v3; // rdi
  _OWORD *v4; // rsi
  int v5; // eax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 376) = 1;
  *((_OWORD *)this + 24) = *(_OWORD *)a2;
  v3 = (_OWORD *)((char *)this + 52);
  *((_OWORD *)this + 25) = *((_OWORD *)a2 + 1);
  v4 = (_OWORD *)((char *)this + 68);
  *((_OWORD *)this + 26) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 27) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 28) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 29) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 30) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 31) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 32) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 33) = *((_OWORD *)a2 + 9);
  *((_OWORD *)this + 34) = *((_OWORD *)a2 + 10);
  *((_OWORD *)this + 35) = *((_OWORD *)a2 + 11);
  *((_QWORD *)this + 72) = *((_QWORD *)a2 + 24);
  *((_DWORD *)this + 4) |= 2u;
  *(_QWORD *)((char *)this + 36) = *((_QWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 11) = v5;
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 26);
  RIMUpdatePointerDeviceScalingInfo((_DWORD *)this + 13, a2, v6, (__int64)this + 68);
  if ( *((_DWORD *)this + 19) == *(_DWORD *)v4 || *((_DWORD *)this + 20) == *((_DWORD *)this + 18) )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("Display clip should always have non-zero width/height!");
    *v4 = *v3;
  }
}
