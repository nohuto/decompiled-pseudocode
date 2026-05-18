/*
 * XREFs of sub_180065810 @ 0x180065810
 * Callers:
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_1800219BC @ 0x1800219BC (sub_1800219BC.c)
 *     sub_180021B70 @ 0x180021B70 (sub_180021B70.c)
 *     sub_180022260 @ 0x180022260 (sub_180022260.c)
 *     sub_180022F70 @ 0x180022F70 (sub_180022F70.c)
 *     sub_1800231F0 @ 0x1800231F0 (sub_1800231F0.c)
 *     sub_180023720 @ 0x180023720 (sub_180023720.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_180028A70 @ 0x180028A70 (sub_180028A70.c)
 *     sub_180028E70 @ 0x180028E70 (sub_180028E70.c)
 *     sub_1800293C0 @ 0x1800293C0 (sub_1800293C0.c)
 *     sub_1800295B0 @ 0x1800295B0 (sub_1800295B0.c)
 *     sub_18002AA60 @ 0x18002AA60 (sub_18002AA60.c)
 *     sub_18002B0C0 @ 0x18002B0C0 (sub_18002B0C0.c)
 *     sub_18002CA10 @ 0x18002CA10 (sub_18002CA10.c)
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 *     sub_18002F4AC @ 0x18002F4AC (sub_18002F4AC.c)
 *     sub_18002FB6C @ 0x18002FB6C (sub_18002FB6C.c)
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 *     sub_1800311C4 @ 0x1800311C4 (sub_1800311C4.c)
 *     sub_1800389A0 @ 0x1800389A0 (sub_1800389A0.c)
 *     sub_18003A940 @ 0x18003A940 (sub_18003A940.c)
 *     sub_18003F5A0 @ 0x18003F5A0 (sub_18003F5A0.c)
 *     sub_18003F720 @ 0x18003F720 (sub_18003F720.c)
 *     sub_18004046C @ 0x18004046C (sub_18004046C.c)
 *     sub_180042614 @ 0x180042614 (sub_180042614.c)
 *     sub_180044E88 @ 0x180044E88 (sub_180044E88.c)
 *     sub_180045004 @ 0x180045004 (sub_180045004.c)
 *     sub_180062F54 @ 0x180062F54 (sub_180062F54.c)
 *     sub_180095020 @ 0x180095020 (sub_180095020.c)
 *     sub_180098158 @ 0x180098158 (sub_180098158.c)
 *     sub_1800CD990 @ 0x1800CD990 (sub_1800CD990.c)
 * Callees:
 *     sub_18011DA88 @ 0x18011DA88 (sub_18011DA88.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_180065810(_QWORD *a1, __int64 *a2, _DWORD a3, __int64 a4, __int64 a5, char a6, ...)
{
  unsigned int v6; // eax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx

  v6 = a4;
  LOBYTE(a4) = a6;
  sub_18011DA88(a1, v6, a5, a4, -2LL, a2);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  v9 = a2[3];
  if ( v9 >= 0x10 )
  {
    v10 = v9 + 1;
    v11 = *a2;
    if ( v10 >= 0x1000 )
    {
      v12 = v10 + 39;
      v13 = *(_QWORD *)(v11 - 8);
      v14 = v11 - v13;
      if ( (unsigned __int64)(v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v12);
        JUMPOUT(0x1800658C8LL);
      }
      v11 = v13;
    }
    j_j__o_free(v11);
  }
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
