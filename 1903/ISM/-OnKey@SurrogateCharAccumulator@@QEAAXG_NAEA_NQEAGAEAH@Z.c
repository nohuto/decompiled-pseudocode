/*
 * XREFs of ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800C0AA4
 * Callers:
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800C0D28 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@I@Z @ 0x180109690 (-SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@I@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SurrogateCharAccumulator::OnKey(
        SurrogateCharAccumulator *this,
        unsigned __int16 a2,
        unsigned __int8 a3,
        bool *a4,
        unsigned __int16 *const a5,
        int *a6)
{
  __int16 v6; // ax
  unsigned __int16 v7; // ax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  a5[2] = 0;
  *a4 = 0;
  if ( (unsigned __int16)(a2 + 10240) > 0x3FFu )
  {
    if ( (unsigned __int16)(a2 + 9216) <= 0x3FFu && (v6 = *((_WORD *)this + a3)) != 0 )
    {
      if ( (unsigned __int16)(v6 + 10240) > 0x3FFu )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          47LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.h",
          (const char *)0x2400);
        __debugbreak();
      }
      *a6 = 2;
      v7 = a2;
      a2 = *((_WORD *)this + a3);
    }
    else
    {
      if ( (unsigned __int16)(a2 + 9216) <= 0x3FFu && !*((_WORD *)this + a3) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          56LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.h",
          (const char *)0x80070057LL);
        __debugbreak();
      }
      *a6 = 1;
      v7 = 0;
    }
    *a5 = a2;
    a5[1] = v7;
    *((_WORD *)this + a3) = 0;
  }
  else
  {
    *((_WORD *)this + a3) = a2;
    *a4 = 1;
  }
}
