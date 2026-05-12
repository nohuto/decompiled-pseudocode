/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C00132FC
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0013850 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C0022F00 (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0047760 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidRemoveTrailingBlanks @ 0x1C0006658 (RaidRemoveTrailingBlanks.c)
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RaidIsUnitControlSupported @ 0x1C0006860 (RaidIsUnitControlSupported.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001374C (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0013BC8 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C00147A4 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C0015038 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0015214 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     WPP_SF_D @ 0x1C0037868 (WPP_SF_D.c)
 *     WPP_SF_ddd @ 0x1C00378FC (WPP_SF_ddd.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 a1, unsigned int a2)
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
  __int64 v20[12]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v21[112]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]

  memset(v20, 0, sizeof(v20));
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
      &WPP_09b64121c92431e1d769322adfcd0464_Traceguids,
      BYTE1(v20[0]),
      BYTE2(v20[0]),
      BYTE3(v20[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiryCallback, a1, a2, (unsigned int)v20, 36, v17);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_09b64121c92431e1d769322adfcd0464_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = 255;
    v7 = RaidBusEnumeratorGenericInquiry(
           (unsigned int)&RaidEnumSupportedPagesCallback,
           a1,
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
              a1,
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
      v15 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumSerialNumber, a1, a2, (unsigned int)v20, 255, v19);
      v5 = v15;
      if ( v15 == -1073741801 || v15 == -1073741670 )
        goto LABEL_25;
    }
    if ( (*(_BYTE *)v20[4] & 0x1F) == 0 || (*(_BYTE *)v20[4] & 0x1F) == 0x14 )
    {
      v8 = *(_BYTE *)(v20[4] + 4);
      if ( v8 >= 0x37u )
      {
        if ( (unsigned __int64)v8 + 5 <= 0xFF )
          v6 = v8 + 5;
        RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiry1667Callback, a1, a2, (unsigned int)v20, v6, v19);
      }
    }
    if ( (v20[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumAtaInformation, a1, a2, (unsigned int)v20, 572, v19);
    }
    else if ( v20[1] && RaidIsUnitControlSupported(v20[1], 11) )
    {
      memset(&v21[8], 0, 0x68uLL);
      v9 = *(_QWORD *)a1 + 296LL;
      v22 = v20[1] + 88;
      *(_QWORD *)v21 = 0x7800000002LL;
      v5 = RaCallMiniportUnitControl(v9, 11LL);
      if ( v5 < 0 )
      {
        v16 = *(_QWORD *)a1 + 296LL;
        *(_QWORD *)v21 = 0x6C00000001LL;
        v5 = RaCallMiniportUnitControl(v16, 11LL);
      }
      if ( v5 < 0 )
      {
        v5 = 0;
      }
      else
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x32316152u, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
        v20[10] = (__int64)Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_25;
        }
        *Pool = *(_OWORD *)v21;
        Pool[1] = *(_OWORD *)&v21[16];
        Pool[2] = *(_OWORD *)&v21[32];
        Pool[3] = *(_OWORD *)&v21[48];
        Pool[4] = *(_OWORD *)&v21[64];
        Pool[5] = *(_OWORD *)&v21[80];
        *((_QWORD *)Pool + 12) = *(_QWORD *)&v21[96];
        *((_DWORD *)Pool + 26) = *(_DWORD *)&v21[104];
        RaidRemoveTrailingBlanks(v20[10] + 8, 17);
        RaidRemoveTrailingBlanks(v20[10] + 25, v11 + 48);
        RaidRemoveTrailingBlanks(v20[10] + 90, v12);
      }
    }
    v13 = *(_BYTE *)v20[4] & 0x1F;
    if ( v13 == 20 )
    {
      BYTE1(v20[7]) = 1;
    }
    else if ( (v20[0] & 0x18) == 24 && v13 == 0 )
    {
      RaidBusEnumeratorGenericInquiry(
        (unsigned int)&RaidEnumBlockDeviceCharacteristics,
        a1,
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
