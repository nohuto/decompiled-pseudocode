/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C004ECB0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C004EBF0 (xxxLW_LoadFonts.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C004EF98 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C004F0E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 */

__int64 __fastcall xxxLoadPermanentFonts(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r14d
  __int64 v4; // rax
  unsigned int *v5; // rsi
  ULONG i; // r15d
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // r9
  ULONG v11; // ebp
  void *v12; // rax
  void *v13; // rdi
  __int64 v14; // rax
  unsigned int *v15; // r12
  _WORD v16[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v17; // [rsp+38h] [rbp-80h]
  _BYTE v18[24]; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+8h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+10h] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v9, v10);
  v8 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v11 = 544;
  v12 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL, 0LL);
  v13 = v12;
  if ( !v12 )
    goto LABEL_10;
  v3 = xxxbEnumerateRegistryFontsInternal(v12, 1u);
  v4 = Win32AllocPool(544LL, 1919972181LL);
  v5 = (unsigned int *)v4;
  if ( !v4 )
    goto LABEL_9;
  PushW32ThreadLock(v4, v18, Win32FreePool);
  for ( i = 0; ; ++i )
  {
    v7 = ZwEnumerateKey(v13, i, KeyBasicInformation, v5, v11 - 2, &ResultLength);
    if ( v7 != -2147483643 && v7 != -1073741789 )
      break;
    ResultLength += 2;
    v14 = Win32AllocPool(ResultLength, 1919972181LL);
    v15 = (unsigned int *)v14;
    if ( v14 )
    {
      ThreadLockExchange(v14, v18);
      Win32FreePool(v5);
      v11 = ResultLength;
      v5 = v15;
      v7 = ZwEnumerateKey(v13, i, KeyBasicInformation, v15, ResultLength - 2, &ResultLength);
      if ( v7 != -2147483643 && v7 != -1073741789 )
        break;
    }
LABEL_21:
    ;
  }
  if ( v7 >= 0 )
  {
    *((_WORD *)v5 + ((unsigned __int64)v5[3] >> 1) + 8) = 0;
    v17 = v5 + 4;
    v16[0] = *((_WORD *)v5 + 6);
    v16[1] = v16[0];
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v16;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v13;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v3 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, 1u);
      ZwClose(KeyHandle);
    }
    goto LABEL_21;
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v18);
  ZwClose(v13);
LABEL_9:
  v8 = v3;
LABEL_10:
  result = v8;
  gbPermanentFontsLoaded = 1;
  return result;
}
