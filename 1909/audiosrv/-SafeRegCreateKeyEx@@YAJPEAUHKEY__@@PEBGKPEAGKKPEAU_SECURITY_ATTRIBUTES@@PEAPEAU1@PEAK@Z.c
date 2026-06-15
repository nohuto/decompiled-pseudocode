/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18002BBB8
 * Callers:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18002BBB8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18002F1E0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x18002BBB8 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x18002BD50 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _Init_thread_footer @ 0x180065550 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800655B8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x1800DF5B8 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
 */

LSTATUS __fastcall SafeRegCreateKeyEx(
        HKEY a1,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int a5,
        REGSAM samDesired,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        HKEY *a8)
{
  const unsigned __int16 *v8; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  const WCHAR *v12; // r14
  int v13; // ebx
  CNtDeleteKey *v14; // rcx
  int v15; // ebx
  HKEY v16; // rcx
  LSTATUS result; // eax
  int Key; // ebx
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[528]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = a2;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned __int64)(v10 - v8) < 0x104 )
    {
      _o_wcsncpy_s(v22, 260LL, v8);
      v12 = (const WCHAR *)v22;
      v8 = v11 + 1;
      goto LABEL_6;
    }
    return 87;
  }
  v12 = v8;
LABEL_6:
  hKey = 0LL;
  v13 = DetectRegistryLink(a1, v12, samDesired, &hKey);
  v14 = (CNtDeleteKey *)*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1801B7900 > *((_DWORD *)v14 + 1) )
  {
    Init_thread_header(&dword_1801B7900);
    if ( dword_1801B7900 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_1801B7900);
    }
  }
  v15 = v13 - 1;
  if ( v15 )
  {
    if ( (unsigned int)(v15 - 1) <= 1 )
    {
      dwDisposition = 0;
      v16 = hKey;
      if ( hKey )
      {
        dwDisposition = 2;
        goto LABEL_11;
      }
LABEL_31:
      result = RegCreateKeyExW(a1, v12, 0, 0LL, 0, samDesired, lpSecurityAttributes, &hKey, &dwDisposition);
      if ( result )
        return result;
      if ( dwDisposition != 1 )
      {
        Key = 5;
        goto LABEL_19;
      }
      v16 = hKey;
LABEL_11:
      if ( v12 == v8 )
      {
        if ( a8 )
          *a8 = v16;
        return 0;
      }
      Key = SafeRegCreateKeyEx(v16, v8, 0, 0LL, 0, samDesired, lpSecurityAttributes, a8, 0LL);
LABEL_19:
      RegCloseKey(hKey);
      return Key;
    }
  }
  else if ( CNtDeleteKey::Init(v14) && !(qword_1801B7910 ? qword_1801B7910(hKey) : 87) )
  {
    RegCloseKey(hKey);
    hKey = 0LL;
    dwDisposition = 0;
    goto LABEL_31;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 5;
}
