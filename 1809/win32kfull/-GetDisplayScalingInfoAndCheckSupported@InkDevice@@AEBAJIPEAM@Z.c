/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C023851C
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0238074 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0221ADC (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rcx
  int v11; // edx
  int v12; // eax
  unsigned int v14[2]; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  *(_QWORD *)v14 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v14, (const struct tagPOINTER_INFO **)a3);
  v7 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId < 0 )
  {
    if ( dword_1C030C390 > 2u )
    {
      v18 = 0;
      v14[0] = PointerInfoByPointerId;
      v16 = v14;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
    return v7;
  }
  LOBYTE(v6) = 19;
  v8 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v14 + 16LL), v6);
  if ( !v8 )
  {
    v7 = -1073741823;
    if ( dword_1C030C390 > 2u )
    {
      v18 = 0;
      v16 = v14;
      v14[0] = -1073741823;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
    return v7;
  }
  v9 = *(_QWORD *)(v8 + 480);
  v10 = *(_DWORD **)(v9 + 16);
  if ( v10[463] != 1 )
  {
    v7 = -1073741637;
    if ( dword_1C030C390 <= 2u )
      return v7;
LABEL_18:
    v18 = 0;
    v14[0] = -1073741637;
    v16 = v14;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    return v7;
  }
  if ( ((*(_DWORD *)(v9 + 224) - 1) & 0xFFFFFFFD) != 0 )
  {
    v11 = v10[468];
    v12 = v10[467];
  }
  else
  {
    v11 = v10[467];
    v12 = v10[468];
  }
  if ( *((_DWORD *)this + 31) != v11 )
  {
    v7 = -1073741637;
    if ( dword_1C030C390 <= 2u )
      return v7;
    goto LABEL_18;
  }
  if ( *((_DWORD *)this + 32) == v12 )
  {
    *a3 = (float)(v10[473] - v10[471]) / (float)v11;
    return v7;
  }
  v7 = -1073741637;
  if ( dword_1C030C390 > 2u )
    goto LABEL_18;
  return v7;
}
