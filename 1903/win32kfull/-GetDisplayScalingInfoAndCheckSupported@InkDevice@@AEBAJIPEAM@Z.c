/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C02511AC
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0250D04 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C023A210 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(
        InkDevice *this,
        unsigned int a2,
        float *a3,
        __int64 a4)
{
  int PointerInfoByPointerId; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rcx
  int v14; // edx
  int v15; // eax
  unsigned int v17[2]; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+64h] [rbp-Ch]

  *(_QWORD *)v17 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId(
                             (Pointer *)a2,
                             v17,
                             (const struct tagPOINTER_INFO **)a3,
                             a4);
  v10 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId < 0 )
  {
    if ( dword_1C0321298 > 2u )
    {
      v21 = 0;
      v17[0] = PointerInfoByPointerId;
      v19 = v17;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
    }
    return v10;
  }
  LOBYTE(v7) = 19;
  v11 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v17 + 16LL), v7, v8, v9);
  if ( !v11 )
  {
    v10 = -1073741823;
    if ( dword_1C0321298 > 2u )
    {
      v21 = 0;
      v19 = v17;
      v17[0] = -1073741823;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
    }
    return v10;
  }
  v12 = *(_QWORD *)(v11 + 480);
  v13 = *(_DWORD **)(v12 + 16);
  if ( v13[495] != 1 )
  {
    v10 = -1073741637;
    if ( dword_1C0321298 <= 2u )
      return v10;
LABEL_18:
    v21 = 0;
    v17[0] = -1073741637;
    v19 = v17;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
    return v10;
  }
  if ( ((*(_DWORD *)(v12 + 224) - 1) & 0xFFFFFFFD) != 0 )
  {
    v14 = v13[500];
    v15 = v13[499];
  }
  else
  {
    v14 = v13[499];
    v15 = v13[500];
  }
  if ( *((_DWORD *)this + 31) != v14 )
  {
    v10 = -1073741637;
    if ( dword_1C0321298 <= 2u )
      return v10;
    goto LABEL_18;
  }
  if ( *((_DWORD *)this + 32) == v15 )
  {
    *a3 = (float)(v13[505] - v13[503]) / (float)v14;
    return v10;
  }
  v10 = -1073741637;
  if ( dword_1C0321298 > 2u )
    goto LABEL_18;
  return v10;
}
