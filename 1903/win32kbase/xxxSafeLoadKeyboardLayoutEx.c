/*
 * XREFs of xxxSafeLoadKeyboardLayoutEx @ 0x1C006FAC0
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1C011B440 (NtUserLoadKeyboardLayoutEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C006FBA4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x1C007010C (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 */

HKL __fastcall xxxSafeLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        HANDLE Handle,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        struct tagKBDTABLE_MULT_INTERNAL *a6,
        unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  HKL KeyboardLayout; // rsi
  __int64 v13; // rdx
  void *v14; // rbp
  unsigned int i; // ebx
  void *v17; // rax
  void *v18; // rcx

  KeyboardLayout = 0LL;
  v14 = ConvertHandleAndVerifyLoc(Handle);
  if ( v14 )
  {
    if ( a6 )
    {
      if ( *(_DWORD *)a6 >= 8u )
      {
        UserSetLastError(87LL, v13);
        *(_DWORD *)a6 = 0;
LABEL_6:
        ZwClose(v14);
        for ( i = 0; i < *(_DWORD *)a6; ++i )
        {
          v18 = (void *)*((_QWORD *)a6 + 2 * i + 81);
          if ( v18 )
            ZwClose(v18);
        }
        return KeyboardLayout;
      }
      if ( *(_DWORD *)a6 )
      {
        do
        {
          v17 = ConvertHandleAndVerifyLoc(*((HANDLE *)a6 + 2 * (unsigned int)KeyboardLayout + 81));
          *((_QWORD *)a6 + 2 * (unsigned int)KeyboardLayout + 81) = v17;
          if ( !v17 )
            break;
          LODWORD(KeyboardLayout) = (_DWORD)KeyboardLayout + 1;
        }
        while ( (unsigned int)KeyboardLayout < *(_DWORD *)a6 );
        *(_DWORD *)a6 = (_DWORD)KeyboardLayout;
      }
    }
    KeyboardLayout = xxxLoadKeyboardLayoutEx(a1, v14, a3, a4, a5, a6, a7, a8, a9);
    goto LABEL_6;
  }
  if ( (a9 & 0x40000000) != 0 )
    PsGetThreadProcessId(*(PETHREAD *)gptiCurrent);
  if ( (a9 & 0x40000200) == 0 )
    UserSetLastError(0LL, v13);
  return KeyboardLayout;
}
