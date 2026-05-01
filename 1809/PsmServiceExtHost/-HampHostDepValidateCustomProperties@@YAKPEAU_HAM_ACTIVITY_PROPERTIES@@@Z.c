/*
 * XREFs of ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006D094
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000C07C (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009E1C (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800499F6 (memcmp_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

_BOOL8 __fastcall HampHostDepValidateCustomProperties(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  _BOOL8 result; // rax
  _BYTE Buf1[40]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v4[6]; // [rsp+48h] [rbp-60h] BYREF
  int v5; // [rsp+78h] [rbp-30h]

  result = 0;
  if ( (unsigned int)HampUtilCheckAndSanitizeActivityProperties((const wchar_t *)a1) )
  {
    if ( (*(_DWORD *)a1 & 0xFFFFD9BF) == 0
      && !*((_DWORD *)a1 + 1)
      && !*((_DWORD *)a1 + 2)
      && !*((_WORD *)a1 + 70)
      && *((_DWORD *)a1 + 67) == 5
      && !*((_DWORD *)a1 + 68) )
    {
      memset_0(Buf1, 0, 0x68uLL);
      memset_0(v4, 0, 0x38uLL);
      v4[0] |= 0x80uLL;
      v5 = 33;
      memset(&v4[1], 255, 32);
      if ( !memcmp_0(Buf1, (char *)a1 + 280, 0x68uLL) )
        return 1;
    }
  }
  return result;
}
