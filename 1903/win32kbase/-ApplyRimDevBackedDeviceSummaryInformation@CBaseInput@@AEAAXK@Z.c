/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C006D2D0
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00697AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x1C006D3E4 (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 *     ApiSetGatherDeviceInfoSummaryInformation @ 0x1C006D4C0 (ApiSetGatherDeviceInfoSummaryInformation.c)
 */

void __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(CBaseInput *this, int a2)
{
  struct RIMDEV *v3; // rbx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rax
  int v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+44h] [rbp-Ch] BYREF
  int v9; // [rsp+48h] [rbp-8h] BYREF
  int v10; // [rsp+70h] [rbp+20h] BYREF
  int v11; // [rsp+74h] [rbp+24h]
  int v12; // [rsp+80h] [rbp+30h] BYREF
  int v13; // [rsp+88h] [rbp+38h] BYREF

  v11 = HIDWORD(this);
  v10 = 0;
  v8 = 0;
  v7 = 0;
  v9 = 0;
  v13 = 0;
  v12 = 0;
  RIMLockExclusive((__int64)&CBaseInput::_sLock);
  v3 = CBaseInput::_spDevList;
  if ( CBaseInput::_spDevList )
  {
    v4 = v10;
    while ( 1 )
    {
      v5 = *((unsigned __int8 *)v3 + 48);
      if ( v5 == a2 )
      {
        ApiSetGatherDeviceInfoSummaryInformation(
          (_DWORD)v3,
          (unsigned int)&v10,
          (unsigned int)&v8,
          (unsigned int)&v7,
          (__int64)&v9,
          (__int64)&v13,
          (__int64)&v12);
        v4 = v10;
        goto LABEL_7;
      }
      if ( a2 != 2 )
        break;
      if ( !(_BYTE)v5 )
        goto LABEL_6;
LABEL_7:
      v3 = (struct RIMDEV *)*((_QWORD *)v3 + 7);
      if ( !v3 )
        goto LABEL_8;
    }
    if ( a2 )
      goto LABEL_7;
    if ( (_BYTE)v5 != 2 )
      goto LABEL_7;
    v6 = *((_QWORD *)v3 + 60);
    if ( !v6 || (unsigned int)(*(_DWORD *)(v6 + 24) - 1) > 6 )
      goto LABEL_7;
LABEL_6:
    v10 = ++v4;
    goto LABEL_7;
  }
LABEL_8:
  qword_1C02182E8 = 0LL;
  ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  ApiSetApplyGatheredDeviceInfoSummaryInformation(a2, v10, v9, v8, v7, v13, v12);
}
