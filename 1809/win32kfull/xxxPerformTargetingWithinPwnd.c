/*
 * XREFs of xxxPerformTargetingWithinPwnd @ 0x1C01F031C
 * Callers:
 *     PerformTargetingWithinPwnd @ 0x1C01EFC00 (PerformTargetingWithinPwnd.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     TouchTargetingCreateContact @ 0x1C0243080 (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPerformTargetingWithinPwnd(__int64 *BugCheckParameter2, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 *v7; // r14
  __int64 v8; // r8
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int128 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h] BYREF
  int v17; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+84h] [rbp-7Ch]
  __int128 v19; // [rsp+8Ch] [rbp-74h]
  __int128 v20; // [rsp+9Ch] [rbp-64h]
  int v21; // [rsp+ACh] [rbp-54h]
  __int128 v22; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v23[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h]
  int v25; // [rsp+E8h] [rbp-18h]
  int v26; // [rsp+170h] [rbp+70h]
  int v27; // [rsp+174h] [rbp+74h]
  int v28; // [rsp+178h] [rbp+78h]
  int v29; // [rsp+17Ch] [rbp+7Ch]

  *a3 = 0;
  a3[1] = 0;
  result = GetProp((__int64)BugCheckParameter2, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  if ( (result & 0xFFFD) != 0 )
  {
    result = TouchTargetingEnabledForInput(*(_QWORD *)(a2 + 40), a2 + 8);
    if ( (_DWORD)result )
    {
      v16 = 0LL;
      v7 = 0LL;
      v22 = 0LL;
      v29 = 0;
      v28 = 0;
      if ( (unsigned int)_GetDeviceRects(a2 + 8, &v16, &v22) )
      {
        v14 = v22;
        v15 = v16;
        _SetHimetricToPixelRatio(&v15, &v14, v23);
        v7 = &v16;
      }
      v9 = *(_OWORD *)(a2 + 112);
      v17 = *(_DWORD *)(a2 + 12);
      v18 = *(_QWORD *)(a2 + 40);
      v10 = *(_DWORD *)(a2 + 108);
      v19 = v9;
      v20 = v9;
      if ( (v10 & 2) != 0 )
        v21 = *(_DWORD *)(a2 + 144);
      else
        v21 = 0;
      result = TouchTargetingCreateContact(&v17, v7, v8, v23);
      if ( v26 )
      {
        if ( v27 )
        {
          v18 = v24;
          v21 = v25;
          v19 = v23[1];
          v20 = v23[0];
          _InterlockedIncrement(&glSendMessage);
          v11 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x24Du, 0LL, (__int64)&v17, 0, 0, 0LL, 1, 0);
          result = 4093LL;
          if ( ((unsigned __int16)(v11 >> 20) & 0xFFFu) <= 0xFFD )
          {
            v12 = (v11 >> 10) & 0x3FF;
            *a3 = v12;
            if ( (unsigned int)v12 > 0x1FF )
            {
              result = (unsigned int)(v12 - 1024);
              *a3 = result;
            }
            v13 = v11 & 0x3FF;
            a3[1] = v13;
            if ( v13 > 0x1FF )
            {
              result = v13 - 1024;
              a3[1] = result;
            }
          }
        }
      }
    }
  }
  return result;
}
