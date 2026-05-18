/*
 * XREFs of sub_1800736A0 @ 0x1800736A0
 * Callers:
 *     sub_18006E7DC @ 0x18006E7DC (sub_18006E7DC.c)
 * Callees:
 *     sub_18000A4B0 @ 0x18000A4B0 (sub_18000A4B0.c)
 *     sub_180074444 @ 0x180074444 (sub_180074444.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x180127606 (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800736A0(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  struct std::locale::_Locimp *v5; // rax
  __int64 v6; // rbx
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  _BYTE v10[8]; // [rsp+50h] [rbp-18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v10, 0);
  v9 = qword_18026B060;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<wchar_t>::id);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v2 >= *(_QWORD *)(v3 + 24) )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8 * v2);
  if ( !v4 )
  {
    if ( *(_BYTE *)(v3 + 36) )
    {
      v5 = std::locale::_Getgloballocale();
      if ( v2 >= *((_QWORD *)v5 + 3) )
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 8 * v2);
    }
    if ( !v4 )
    {
      v4 = v9;
      if ( !v9 )
      {
        if ( std::ctype<wchar_t>::_Getcat(&v9, a1) == -1 )
        {
          sub_180074444(pExceptionObject);
          throw (std::bad_cast *)pExceptionObject;
        }
        v6 = v9;
        sub_18000A4B0(v9);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v4 = v9;
        qword_18026B060 = v9;
      }
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)v10);
  return v4;
}
