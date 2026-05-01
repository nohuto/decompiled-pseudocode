/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJUSize@Foundation@Windows@@URect@45@EEPEAU645@PEAE@Z @ 0x1802CC7DC
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x1802C41E0 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1802CD380 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        char a4,
        char a5,
        _OWORD *a6,
        _BYTE *a7)
{
  float v8; // xmm6_4
  float v9; // xmm7_4
  __m128 v10; // xmm2
  float v11; // xmm1_4
  HMONITOR v12; // rbx
  int v14; // r9d
  int v15; // r8d
  signed int v16; // ecx
  signed int v17; // eax
  int v18; // r12d
  int v19; // edx
  LONG top; // ecx
  LONG v21; // eax
  LONG left; // edx
  int v23; // r8d
  __m128i v24; // xmm1
  KeyboardHosting::MonitorInformation *v25; // rcx
  __int128 v27; // [rsp+38h] [rbp-61h]
  RECT rc; // [rsp+48h] [rbp-51h] BYREF
  HMONITOR v29; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-39h] BYREF
  LONG v31; // [rsp+70h] [rbp-29h]
  LONG v32; // [rsp+74h] [rbp-25h]
  int v33; // [rsp+78h] [rbp-21h]
  int v34; // [rsp+7Ch] [rbp-1Dh]
  int v35; // [rsp+80h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+47h]

  *(_QWORD *)&rc.left = a2;
  v8 = *(float *)&a2;
  v9 = *((float *)&a2 + 1);
  *a7 = 0;
  *a6 = 0uLL;
  v10 = (__m128)_mm_loadu_si128(a3);
  rc.left = (int)v10.m128_f32[0];
  v11 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  rc.top = (int)v11;
  rc.right = (int)(float)(_mm_shuffle_ps(v10, v10, 170).m128_f32[0] + v10.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v10, v10, 255).m128_f32[0] + v11);
  v12 = MonitorFromRect(&rc, 0);
  if ( v12 )
  {
    memset_0(v30, 0, 0x20uLL);
    v35 = 100;
    v29 = v12;
    KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v29);
    v14 = v33;
    v15 = v34;
    v16 = abs32(v33 - v31);
    v17 = abs32(v34 - v32);
    v18 = (int)(float)((float)((float)v35 * v9) / 100.0);
    v19 = (int)(float)((float)((float)v35 * v8) / 100.0);
    if ( v19 >= v16 )
      v19 = v16;
    if ( v18 >= v17 )
      v18 = v17;
    if ( rc.left + v19 < v33 )
      v14 = rc.left + v19;
    if ( v18 + rc.top < v34 )
      v15 = v18 + rc.top;
    top = rc.top;
    if ( a4 )
    {
      left = rc.left;
    }
    else
    {
      v21 = v14 - v19;
      left = rc.left;
      if ( rc.left >= v21 )
        left = v21;
      if ( rc.top >= v15 - v18 )
        top = v15 - v18;
    }
    if ( a5 )
      v15 = v34;
    if ( left <= v31 )
      left = v31;
    if ( top <= v32 )
      top = v32;
    if ( left != rc.left || v14 != rc.right || top != rc.top || v15 != rc.bottom )
    {
      v23 = v15 - top;
      v24 = _mm_cvtsi32_si128(top);
      *a7 = 1;
      v25 = (KeyboardHosting::MonitorInformation *)(a1 + 216);
      *(float *)&v27 = (float)left;
      DWORD1(v27) = _mm_cvtepi32_ps(v24).m128_u32[0];
      *((float *)&v27 + 2) = (float)(v14 - left);
      *((float *)&v27 + 3) = (float)v23;
      *a6 = v27;
      if ( *(HMONITOR *)(a1 + 216) != v12 )
      {
        *(_QWORD *)v25 = v12;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v25);
        *(_BYTE *)(a1 + 432) = 1;
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
