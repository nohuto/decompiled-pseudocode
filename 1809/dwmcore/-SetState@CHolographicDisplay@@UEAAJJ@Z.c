/*
 * XREFs of ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x18020C490
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800518CC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicDisplay::SetState(CHolographicDisplay *this)
{
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r10
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CNotificationResource::ShouldNotify((CHolographicDisplay *)((char *)this - 64)) )
  {
    v2 = *(_QWORD *)(v1 - 16);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 - 48) + 1208LL) + 56LL);
    if ( v2 )
      v4 = *(_DWORD *)(v2 + 68);
    else
      v4 = 0;
    v7[0] = v4;
    v7[1] = *(unsigned int *)(v1 - 8);
    v5 = CoreUICallSend(v3, v7, 2LL, 7LL, 0, &unk_1802763E1);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicdisplay.cpp",
        (const char *)v5);
      __debugbreak();
    }
  }
  return 0LL;
}
