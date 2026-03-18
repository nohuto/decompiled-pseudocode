/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C0250A6C
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C02505C4 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0239BF0 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // rcx
  int v12; // edx
  int v13; // eax
  unsigned int v15[2]; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+60h] [rbp-10h]
  int v19; // [rsp+64h] [rbp-Ch]

  *(_QWORD *)v15 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v15, (const struct tagPOINTER_INFO **)a3);
  v8 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId < 0 )
  {
    if ( dword_1C031F298 > 2u )
    {
      v19 = 0;
      v15[0] = PointerInfoByPointerId;
      v17 = v15;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
    }
    return v8;
  }
  LOBYTE(v6) = 19;
  v9 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v15 + 16LL), v6, v7);
  if ( !v9 )
  {
    v8 = -1073741823;
    if ( dword_1C031F298 > 2u )
    {
      v19 = 0;
      v17 = v15;
      v15[0] = -1073741823;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
    }
    return v8;
  }
  v10 = *(_QWORD *)(v9 + 480);
  v11 = *(_DWORD **)(v10 + 16);
  if ( v11[499] != 1 )
  {
    v8 = -1073741637;
    if ( dword_1C031F298 <= 2u )
      return v8;
LABEL_18:
    v19 = 0;
    v15[0] = -1073741637;
    v17 = v15;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E7931, 0LL, 0LL, 3u, &pData);
    return v8;
  }
  if ( ((*(_DWORD *)(v10 + 224) - 1) & 0xFFFFFFFD) != 0 )
  {
    v12 = v11[504];
    v13 = v11[503];
  }
  else
  {
    v12 = v11[503];
    v13 = v11[504];
  }
  if ( *((_DWORD *)this + 31) != v12 )
  {
    v8 = -1073741637;
    if ( dword_1C031F298 <= 2u )
      return v8;
    goto LABEL_18;
  }
  if ( *((_DWORD *)this + 32) == v13 )
  {
    *a3 = (float)(v11[509] - v11[507]) / (float)v12;
    return v8;
  }
  v8 = -1073741637;
  if ( dword_1C031F298 > 2u )
    goto LABEL_18;
  return v8;
}
