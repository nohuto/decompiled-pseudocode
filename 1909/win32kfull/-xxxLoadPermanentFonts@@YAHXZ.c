/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C011D440
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C011D370 (xxxLW_LoadFonts.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00556F4 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C011D748 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxLoadPermanentFonts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // r9
  ULONG v7; // r13d
  void *v8; // rax
  void *v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // r9
  unsigned int *v14; // r14
  ULONG i; // r15d
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int *v20; // r12
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v22; // [rsp+38h] [rbp-31h]
  _QWORD v23[6]; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v5, v6);
  KeyHandle = 0LL;
  memset(v23, 0, sizeof(v23));
  v21 = 0LL;
  v22 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  v7 = 544;
  v8 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL);
  v9 = v8;
  if ( v8 )
  {
    v10 = xxxbEnumerateRegistryFontsInternal(v8, 1);
    v11 = Win32AllocPool(544LL, 1919972181LL);
    v14 = (unsigned int *)v11;
    if ( v11 )
    {
      PushW32ThreadLock(v11, v23, (__int64)Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v16 = ZwEnumerateKey(v9, i, KeyBasicInformation, v14, v7 - 2, &ResultLength);
        if ( v16 != -2147483643 && v16 != -1073741789 )
          goto LABEL_10;
        ResultLength += 2;
        v19 = Win32AllocPool(ResultLength, 1919972181LL);
        v20 = (unsigned int *)v19;
        if ( v19 )
        {
          ThreadLockExchange(v19, (__int64)v23);
          Win32FreePool(v14);
          v7 = ResultLength;
          v14 = v20;
          v16 = ZwEnumerateKey(v9, i, KeyBasicInformation, v20, ResultLength - 2, &ResultLength);
          if ( v16 != -2147483643 && v16 != -1073741789 )
          {
LABEL_10:
            if ( v16 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)v23, v17, v18);
              ZwClose(v9);
              break;
            }
            *((_WORD *)v14 + ((unsigned __int64)v14[3] >> 1) + 8) = 0;
            v22 = v14 + 4;
            LOWORD(v21) = *((_WORD *)v14 + 6);
            WORD1(v21) = v21;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v9;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v10 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, 1);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
    result = v10;
    if ( v10 )
      result = xxxbEnumerateRegistryFonts(1u, 0x39u, v12, v13);
  }
  else
  {
    result = 0LL;
  }
  gbPermanentFontsLoaded = 1;
  return result;
}
