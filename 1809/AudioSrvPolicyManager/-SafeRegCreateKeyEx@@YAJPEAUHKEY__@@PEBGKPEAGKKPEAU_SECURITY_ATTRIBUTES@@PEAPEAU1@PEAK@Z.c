/*
 * XREFs of ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034F18
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003194C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034F18 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x180034DE0 (-DetectRegistryLink@@YA-AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180034F18 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     atexit @ 0x1800370B4 (atexit.c)
 *     _Init_thread_footer @ 0x180037D20 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180037D88 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
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
  const WCHAR *v13; // r15
  int v14; // ebx
  int v15; // ebx
  HKEY v16; // rcx
  DWORD v17; // ebx
  DWORD v18; // eax
  FARPROC ProcAddress; // rax
  HMODULE Library; // rax
  LSTATUS result; // eax
  int Key; // ebx
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  DWORD Reserved; // [rsp+60h] [rbp-A0h]
  LPSECURITY_ATTRIBUTES lpSecurityAttributes; // [rsp+68h] [rbp-98h]
  LPWSTR lpClass; // [rsp+70h] [rbp-90h]
  HKEY v28; // [rsp+78h] [rbp-88h]
  _BYTE v29[528]; // [rsp+80h] [rbp-80h] BYREF

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
  if ( v11 )
  {
    if ( (unsigned __int64)(v11 - v9) < 0x104 )
    {
      _o_wcsncpy_s(v29, 260LL, v9);
      v13 = (const WCHAR *)v29;
      v9 = v12 + 1;
      goto LABEL_10;
    }
    return 87;
  }
  v13 = v9;
LABEL_10:
  hKey = 0LL;
  v14 = DetectRegistryLink(a1, v13, samDesired, &hKey);
  if ( dword_18004FF30 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18004FF30);
    if ( dword_18004FF30 == -1 )
    {
      atexit(SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__);
      Init_thread_footer(&dword_18004FF30);
    }
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( (unsigned int)(v15 - 1) <= 1 )
    {
      dwDisposition = 0;
      v16 = hKey;
      if ( hKey )
      {
        v17 = Reserved;
        v18 = 2;
        dwDisposition = 2;
        goto LABEL_25;
      }
LABEL_21:
      v17 = Reserved;
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
      v18 = dwDisposition;
      if ( dwDisposition != 1 )
      {
        Key = 5;
        goto LABEL_32;
      }
      v16 = hKey;
LABEL_25:
      if ( v13 == v9 )
      {
        if ( a8 )
          *a8 = v16;
        if ( a9 )
          *a9 = v18;
        return 0;
      }
      Key = SafeRegCreateKeyEx(v16, v9, v17, lpClass, dwOptions, samDesired, lpSecurityAttributes, a8, a9);
LABEL_32:
      RegCloseKey(hKey);
      return Key;
    }
  }
  else if ( hLibModule && (ProcAddress = (FARPROC)qword_18004FF40) != 0LL
         || (Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u), (hLibModule = Library) != 0LL)
         && (ProcAddress = GetProcAddress(Library, "NtDeleteKey"), (qword_18004FF40 = (__int64)ProcAddress) != 0) )
  {
    if ( !((unsigned int (__fastcall *)(HKEY))ProcAddress)(hKey) )
    {
      RegCloseKey(hKey);
      hKey = 0LL;
      dwDisposition = 0;
      goto LABEL_21;
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 5;
}
