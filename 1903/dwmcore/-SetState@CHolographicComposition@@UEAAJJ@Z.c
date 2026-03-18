/*
 * XREFs of ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x180244290
 * Callers:
 *     ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z @ 0x1802441C8 (-ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOS.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007DF14 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180189490 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicComposition::SetState(CHolographicComposition *this)
{
  __int64 v1; // r9
  int v2; // r11d
  __int64 v3; // rax
  __int64 v4; // r10
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( CNotificationResource::ShouldNotify((CHolographicComposition *)((char *)this - 64)) )
  {
    v3 = *(_QWORD *)(v1 - 16);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 1224LL) + 48LL);
    if ( v3 )
      v5 = *(_DWORD *)(v3 + 68);
    else
      v5 = 0;
    v10[0] = v5;
    v10[1] = *(unsigned int *)(v1 - 8);
    LOWORD(v8) = 0;
    v6 = CoreUICallSend(v4, v10, 2LL, 6LL, v8, &unk_1802B2E41, v2, v9);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographiccomposition.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
  }
  return 0LL;
}
