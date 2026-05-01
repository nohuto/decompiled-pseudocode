/*
 * XREFs of _dynamic_initializer_for__idle__ @ 0x180004AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x180086370 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 *     ??0?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAA@V?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@AEBV?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@1@@Z @ 0x1800863A4 (--0-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800880C8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__idle__()
{
  _BYTE *v1; // [rsp+20h] [rbp-19h] BYREF
  __int64 *v2; // [rsp+28h] [rbp-11h]
  _BYTE v3[24]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v4; // [rsp+48h] [rbp+Fh] BYREF
  _DWORD v5[12]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v6; // [rsp+80h] [rbp+47h] BYREF

  v4 = -2LL;
  v5[0] = 255;
  v5[1] = 255;
  v5[2] = 255;
  v5[3] = 255;
  v5[4] = 255;
  v5[5] = 255;
  v5[6] = 255;
  v5[7] = 255;
  v5[8] = 255;
  v5[9] = 255;
  v5[10] = 255;
  v5[11] = 255;
  v1 = v5;
  v2 = &v6;
  std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v3, &v1);
  v1 = v3;
  v2 = &v4;
  std::vector<std::vector<Windows::UI::Color>>::vector<std::vector<Windows::UI::Color>>(&idle, &v1);
  `eh vector destructor iterator'(v3, 0x18uLL, 1uLL, std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>);
  return atexit(dynamic_atexit_destructor_for__idle__);
}
