/*
 * XREFs of xxxSafeLoadKeyboardLayoutEx @ 0x1C012AD00
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00B8650 (NtUserLoadKeyboardLayoutEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C0127ED0 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0129D60 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 */

HKL __fastcall xxxSafeLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        HANDLE Handle,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        HANDLE *a6,
        unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  HKL KeyboardLayout; // rsi
  void *v13; // rbp
  void *v14; // rax
  unsigned int i; // ebx
  HANDLE v16; // rcx

  KeyboardLayout = 0LL;
  v13 = ConvertHandleAndVerifyLoc(Handle);
  if ( !v13 )
  {
    if ( (a9 & 0x40000000) != 0 )
      PsGetThreadProcessId(*(PETHREAD *)gptiCurrent);
    if ( (a9 & 0x40000200) == 0 )
      UserSetLastError(0);
    return KeyboardLayout;
  }
  if ( a6 )
  {
    if ( *(_DWORD *)a6 >= 8u )
    {
      UserSetLastError(87);
      *(_DWORD *)a6 = 0;
      goto LABEL_14;
    }
    if ( *(_DWORD *)a6 )
    {
      do
      {
        v14 = ConvertHandleAndVerifyLoc(a6[2 * (unsigned int)KeyboardLayout + 81]);
        a6[2 * (unsigned int)KeyboardLayout + 81] = v14;
        if ( !v14 )
          break;
        LODWORD(KeyboardLayout) = (_DWORD)KeyboardLayout + 1;
      }
      while ( (unsigned int)KeyboardLayout < *(_DWORD *)a6 );
      *(_DWORD *)a6 = (_DWORD)KeyboardLayout;
    }
  }
  KeyboardLayout = xxxLoadKeyboardLayoutEx(a1, v13, a3, a4, a5, (wchar_t *)a6, a7, a8, a9);
LABEL_14:
  ZwClose(v13);
  for ( i = 0; i < *(_DWORD *)a6; ++i )
  {
    v16 = a6[2 * i + 81];
    if ( v16 )
      ZwClose(v16);
  }
  return KeyboardLayout;
}
