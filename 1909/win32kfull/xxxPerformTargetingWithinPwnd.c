/*
 * XREFs of xxxPerformTargetingWithinPwnd @ 0x1C02063EC
 * Callers:
 *     PerformTargetingWithinPwnd @ 0x1C0205D70 (PerformTargetingWithinPwnd.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     TouchTargetingCreateContact @ 0x1C025B738 (TouchTargetingCreateContact.c)
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
  _BYTE v23[184]; // [rsp+C0h] [rbp-40h] BYREF
  int v24; // [rsp+178h] [rbp+78h]
  int v25; // [rsp+17Ch] [rbp+7Ch]

  *a3 = 0;
  a3[1] = 0;
  result = GetProp((__int64)BugCheckParameter2, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  if ( (result & 0xFFFD) != 0 )
  {
    result = TouchTargetingEnabledForInput(*(_QWORD *)(a2 + 40), a2 + 8);
    if ( (_DWORD)result )
    {
      v16 = 0LL;
      v22 = 0LL;
      v7 = 0LL;
      memset(v23, 0, sizeof(v23));
      v25 = 0;
      v24 = 0;
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
      if ( *(_DWORD *)&v23[176] )
      {
        if ( *(_DWORD *)&v23[180] )
        {
          v18 = *(_QWORD *)&v23[32];
          v21 = *(_DWORD *)&v23[40];
          v19 = *(_OWORD *)&v23[16];
          v20 = *(_OWORD *)v23;
          _InterlockedIncrement(&glSendMessage);
          v11 = xxxSendTransformableMessageTimeout(
                  BugCheckParameter2,
                  0x24Du,
                  0LL,
                  (struct _LARGE_STRING *)&v17,
                  0,
                  0,
                  0LL,
                  1u,
                  0);
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
