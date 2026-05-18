/*
 * XREFs of sub_180065920 @ 0x180065920
 * Callers:
 *     sub_18000EA20 @ 0x18000EA20 (sub_18000EA20.c)
 *     sub_180021ACC @ 0x180021ACC (sub_180021ACC.c)
 *     sub_180021C80 @ 0x180021C80 (sub_180021C80.c)
 *     sub_180022370 @ 0x180022370 (sub_180022370.c)
 *     sub_180023080 @ 0x180023080 (sub_180023080.c)
 *     sub_180023300 @ 0x180023300 (sub_180023300.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_180028B80 @ 0x180028B80 (sub_180028B80.c)
 *     sub_180028F80 @ 0x180028F80 (sub_180028F80.c)
 *     sub_1800294D0 @ 0x1800294D0 (sub_1800294D0.c)
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_18002AB70 @ 0x18002AB70 (sub_18002AB70.c)
 *     sub_18002B1D0 @ 0x18002B1D0 (sub_18002B1D0.c)
 *     sub_18002CB20 @ 0x18002CB20 (sub_18002CB20.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_1800304F0 @ 0x1800304F0 (sub_1800304F0.c)
 *     sub_1800312D4 @ 0x1800312D4 (sub_1800312D4.c)
 *     sub_180038AB0 @ 0x180038AB0 (sub_180038AB0.c)
 *     sub_18003AA50 @ 0x18003AA50 (sub_18003AA50.c)
 *     sub_18003F6B0 @ 0x18003F6B0 (sub_18003F6B0.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 *     sub_18004057C @ 0x18004057C (sub_18004057C.c)
 *     sub_180042724 @ 0x180042724 (sub_180042724.c)
 *     sub_180044F98 @ 0x180044F98 (sub_180044F98.c)
 *     sub_180045114 @ 0x180045114 (sub_180045114.c)
 *     sub_180063064 @ 0x180063064 (sub_180063064.c)
 *     sub_180095130 @ 0x180095130 (sub_180095130.c)
 *     sub_180098268 @ 0x180098268 (sub_180098268.c)
 *     sub_1800CDAA0 @ 0x1800CDAA0 (sub_1800CDAA0.c)
 * Callees:
 *     sub_18011DB98 @ 0x18011DB98 (sub_18011DB98.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *sub_180065920(_QWORD *a1, __int64 *a2, _DWORD a3, __int64 a4, __int64 a5, char a6, ...)
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
  sub_18011DB98(a1, v6, a5, a4, -2LL, a2);
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
        JUMPOUT(0x1800659D8LL);
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
