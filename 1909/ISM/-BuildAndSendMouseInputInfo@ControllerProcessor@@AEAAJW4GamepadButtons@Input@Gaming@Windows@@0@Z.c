/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x1800754B4
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076750 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@@Z @ 0x180076D94 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GamepadButtons@Input@Gaming@Windo.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x1800755E4 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180077418 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(ControllerProcessor *a1, int a2, int a3)
{
  _DWORD *v3; // r9
  unsigned __int16 v5; // cx
  unsigned int i; // r10d
  int v9; // r11d
  unsigned int v10; // r8d
  __int64 v11; // rdx
  _DWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  _BYTE v16[432]; // [rsp+20h] [rbp-1E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v3 = &unk_1801A5F64;
  v5 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v9 = a3 & *(v3 - 1);
    if ( (v9 != 0) != ((a2 & *(v3 - 1)) != 0) )
    {
      v10 = 0;
      v11 = 0LL;
      v12 = &unk_1801995B0;
      while ( *v3 != *v12 )
      {
        ++v10;
        ++v11;
        v12 += 3;
        if ( v10 >= 5 )
          goto LABEL_11;
      }
      *((_DWORD *)a1 + v11 + 2771) = v9 != 0;
      if ( v9 )
        v13 = *((_DWORD *)&unk_1801995B0 + 3 * v11 + 2);
      else
        v13 = *((_DWORD *)&unk_1801995B0 + 3 * v11 + 1);
      v5 |= v13;
    }
LABEL_11:
    v3 += 2;
  }
  if ( v5 )
  {
    ControllerProcessor::BuildMouseInputInfo(a1, v16, v5);
    v14 = ControllerProcessor::SendMouseInputInfo(a1, (struct RawMouseInputInfo *)v16);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1144LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  return 0LL;
}
