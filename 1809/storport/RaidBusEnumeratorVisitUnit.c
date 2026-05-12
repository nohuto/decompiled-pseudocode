/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C0017D34
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0018288 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0025C50 (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004A230 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     RaidRemoveTrailingBlanks @ 0x1C000800C (RaidRemoveTrailingBlanks.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0018184 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C00185DC (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00191AC (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C0019A00 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_D @ 0x1C003B9A0 (WPP_SF_D.c)
 *     WPP_SF_ddd @ 0x1C003BA34 (WPP_SF_ddd.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // r14d
  int v7; // eax
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  _OWORD *Pool; // rax
  int v11; // r8d
  int v12; // r8d
  char v13; // dl
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  char v17; // [rsp+28h] [rbp-D8h]
  char v18; // [rsp+28h] [rbp-D8h]
  char v19; // [rsp+28h] [rbp-D8h]
  _OWORD v20[14]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v20, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v20);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &stru_1C0055A88.EnableBitMask,
      BYTE1(v20[0]),
      BYTE2(v20[0]),
      BYTE3(v20[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumInquiryCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v20,
         36,
         v17);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 11LL, &stru_1C0055A88.EnableBitMask, (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = 255;
    v7 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           (_DWORD)a1,
           a2,
           (unsigned int)v20,
           255,
           v18);
    v5 = v7;
    if ( v7 == -1073741801 )
      goto LABEL_25;
    if ( v7 == -1073741670 )
      goto LABEL_25;
    if ( (v20[0] & 1) != 0 )
    {
      v14 = RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumDeviceIdCallback,
              (_DWORD)a1,
              a2,
              (unsigned int)v20,
              255,
              v19);
      v5 = v14;
      if ( v14 == -1073741801 || v14 == -1073741670 )
        goto LABEL_25;
    }
    if ( (v20[0] & 2) != 0 )
    {
      v15 = RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumSerialNumber,
              (_DWORD)a1,
              a2,
              (unsigned int)v20,
              255,
              v19);
      v5 = v15;
      if ( v15 == -1073741801 || v15 == -1073741670 )
        goto LABEL_25;
    }
    if ( (**(_BYTE **)&v20[2] & 0x1F) == 0 || (**(_BYTE **)&v20[2] & 0x1F) == 0x14 )
    {
      v8 = *(_BYTE *)(*(_QWORD *)&v20[2] + 4LL);
      if ( v8 >= 0x37u )
      {
        if ( (unsigned __int64)v8 + 5 <= 0xFF )
          v6 = v8 + 5;
        RaidBusEnumeratorGenericInquiry(
          (unsigned int)&RaidEnumInquiry1667Callback,
          (_DWORD)a1,
          a2,
          (unsigned int)v20,
          v6,
          v19);
      }
    }
    if ( (v20[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumAtaInformation,
        (_DWORD)a1,
        a2,
        (unsigned int)v20,
        572,
        v19);
    }
    else if ( *((_QWORD *)&v20[0] + 1) && RaidIsUnitControlSupported(*((__int64 *)&v20[0] + 1), 11) )
    {
      memset(&v20[6], 0, 0x78uLL);
      v9 = *a1;
      *(_QWORD *)&v20[6] = 0x7800000002LL;
      *(_QWORD *)&v20[13] = *((_QWORD *)&v20[0] + 1) + 88LL;
      v5 = RaCallMiniportUnitControl(v9 + 312, 11LL);
      if ( v5 < 0 )
      {
        v16 = *a1 + 312;
        *(_QWORD *)&v20[6] = 0x6C00000001LL;
        v5 = RaCallMiniportUnitControl(v16, 11LL);
      }
      if ( v5 < 0 )
      {
        v5 = 0;
      }
      else
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x32316152u, *(_QWORD *)(*a1 + 8));
        *(_QWORD *)&v20[5] = Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_25;
        }
        *Pool = v20[6];
        Pool[1] = v20[7];
        Pool[2] = v20[8];
        Pool[3] = v20[9];
        Pool[4] = v20[10];
        Pool[5] = v20[11];
        *((_QWORD *)Pool + 12) = *(_QWORD *)&v20[12];
        *((_DWORD *)Pool + 26) = DWORD2(v20[12]);
        RaidRemoveTrailingBlanks(*(_QWORD *)&v20[5] + 8LL, 17);
        RaidRemoveTrailingBlanks(*(_QWORD *)&v20[5] + 25LL, v11 + 48);
        RaidRemoveTrailingBlanks(*(_QWORD *)&v20[5] + 90LL, v12);
      }
    }
    v13 = **(_BYTE **)&v20[2] & 0x1F;
    if ( v13 == 20 )
    {
      BYTE9(v20[3]) = 1;
    }
    else if ( (v20[0] & 0x18) == 24 && v13 == 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumBlockDeviceCharacteristics,
        (_DWORD)a1,
        a2,
        (unsigned int)v20,
        64,
        v19);
    }
  }
  RaidBusEnumeratorProcessBusUnit(a1, v20);
LABEL_25:
  RaidBusEnumeratorReleaseUnit(a1, v20);
  if ( v5 == -1073741801 || v5 == -1073741670 )
    return (unsigned int)v5;
  else
    return 0LL;
}
