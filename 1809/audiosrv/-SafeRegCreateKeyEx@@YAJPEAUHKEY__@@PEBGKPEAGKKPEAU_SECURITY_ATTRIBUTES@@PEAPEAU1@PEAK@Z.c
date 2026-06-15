/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800095FC
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180007220 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800095FC (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800095FC (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x180009850 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _Init_thread_footer @ 0x180060EF0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180060F58 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x1800D2E98 (-Init@CNtDeleteKey@@QEAA_NXZ.c)
 */

LSTATUS __fastcall SafeRegCreateKeyEx(
        HKEY a1,
        const unsigned __int16 *a2,
        DWORD a3,
        unsigned __int16 *a4,
        DWORD dwOptions,
        REGSAM samDesired,
        struct _SECURITY_ATTRIBUTES *a7,
        HKEY *a8,
        unsigned int *a9)
{
  const unsigned __int16 *v9; // rdi
  wchar_t *v11; // rax
  wchar_t *v12; // rbx
  WCHAR *v13; // r15
  int v14; // ebx
  CNtDeleteKey *v15; // rcx
  int v16; // ebx
  HKEY v17; // rcx
  DWORD v18; // ebx
  DWORD v19; // eax
  int Key; // ebx
  LSTATUS result; // eax
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Reserved; // [rsp+60h] [rbp-A0h]
  LPSECURITY_ATTRIBUTES lpSecurityAttributes; // [rsp+68h] [rbp-98h]
  LPWSTR lpClass; // [rsp+70h] [rbp-90h]
  HKEY v28; // [rsp+78h] [rbp-88h]
  WCHAR SubKey[264]; // [rsp+80h] [rbp-80h] BYREF

  v9 = a2;
  lpClass = a4;
  Reserved = a3;
  v28 = a1;
  lpSecurityAttributes = a7;
  if ( a9 )
    *a9 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v11 = wcschr(a2, 0x5Cu);
  v12 = v11;
  if ( !v11 )
  {
    v13 = (WCHAR *)v9;
    goto LABEL_9;
  }
  if ( (unsigned __int64)(v11 - v9) >= 0x104 )
    return 87;
  _o_wcsncpy_s(SubKey, 260LL, v9);
  v13 = SubKey;
  v9 = v12 + 1;
LABEL_9:
  hKey = 0LL;
  v14 = DetectRegistryLink(a1, v13, samDesired, &hKey);
  v15 = (CNtDeleteKey *)*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1801B3890 > *((_DWORD *)v15 + 1) )
  {
    Init_thread_header(&dword_1801B3890);
    if ( dword_1801B3890 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_1801B3890);
    }
  }
  v16 = v14 - 1;
  if ( !v16 )
  {
    if ( CNtDeleteKey::Init(v15) && !(qword_1801B38A0 ? qword_1801B38A0(hKey) : 87) )
    {
      RegCloseKey(hKey);
      hKey = 0LL;
      dwDisposition = 0;
      goto LABEL_22;
    }
LABEL_38:
    if ( hKey )
      RegCloseKey(hKey);
    return 5;
  }
  if ( (unsigned int)(v16 - 1) > 1 )
    goto LABEL_38;
  dwDisposition = 0;
  v17 = hKey;
  if ( !hKey )
  {
LABEL_22:
    v18 = Reserved;
    result = RegCreateKeyExW(
               v28,
               v13,
               Reserved,
               lpClass,
               dwOptions,
               samDesired,
               lpSecurityAttributes,
               &hKey,
               &dwDisposition);
    if ( result )
      return result;
    v19 = dwDisposition;
    if ( dwDisposition != 1 )
    {
      Key = 5;
      goto LABEL_18;
    }
    v17 = hKey;
    goto LABEL_16;
  }
  v18 = Reserved;
  v19 = 2;
  dwDisposition = 2;
LABEL_16:
  if ( v13 != v9 )
  {
    Key = SafeRegCreateKeyEx(v17, v9, v18, lpClass, dwOptions, samDesired, lpSecurityAttributes, a8, a9);
LABEL_18:
    RegCloseKey(hKey);
    return Key;
  }
  if ( a8 )
    *a8 = v17;
  if ( a9 )
    *a9 = v19;
  return 0;
}
