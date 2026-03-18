/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C020EFBC
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C020EB2C (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C01F996C (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v6; // rdx
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rax
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rax
  _DWORD *v14; // rcx
  int v15; // edx
  int v16; // eax
  unsigned int v18[2]; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]

  *(_QWORD *)v18 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v18, (const struct tagPOINTER_INFO **)a3);
  v9 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId < 0 )
  {
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v22 = 0;
      v18[0] = PointerInfoByPointerId;
      v20 = v18;
      v21 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v7, v8, 3u, &pData);
    }
    return v9;
  }
  LOBYTE(v6) = 19;
  v10 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v18 + 16LL), v6);
  if ( !v10 )
  {
    v9 = -1073741823;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v22 = 0;
      v20 = v18;
      v18[0] = -1073741823;
      v21 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v11, v12, 3u, &pData);
    }
    return v9;
  }
  v13 = *(_QWORD *)(v10 + 480);
  v14 = *(_DWORD **)(v13 + 16);
  if ( v14[375] != 1 )
  {
    v9 = -1073741637;
    if ( (unsigned int)pRelatedActivityId <= 2 )
      return v9;
LABEL_18:
    v22 = 0;
    v18[0] = -1073741637;
    v20 = v18;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v11, v12, 3u, &pData);
    return v9;
  }
  if ( ((*(_DWORD *)(v13 + 224) - 1) & 0xFFFFFFFD) != 0 )
  {
    v15 = v14[380];
    v16 = v14[379];
  }
  else
  {
    v15 = v14[379];
    v16 = v14[380];
  }
  if ( *((_DWORD *)this + 31) != v15 )
  {
    v9 = -1073741637;
    if ( (unsigned int)pRelatedActivityId <= 2 )
      return v9;
    goto LABEL_18;
  }
  if ( *((_DWORD *)this + 32) == v16 )
  {
    *a3 = (float)(v14[385] - v14[383]) / (float)v15;
    return v9;
  }
  v9 = -1073741637;
  if ( (unsigned int)pRelatedActivityId > 2 )
    goto LABEL_18;
  return v9;
}
