/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00E8AD0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00E8A00 (xxxLW_LoadFonts.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00B4984 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00E8DD8 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int *v21; // r12
  __int64 v22; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v23; // [rsp+38h] [rbp-31h]
  _QWORD v24[6]; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v5, v6);
  KeyHandle = 0LL;
  memset(v24, 0, sizeof(v24));
  v22 = 0LL;
  v23 = 0LL;
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
      PushW32ThreadLock(v11, v24, (__int64)Win32FreePool, (__int64)v13);
      for ( i = 0; ; ++i )
      {
        v16 = ZwEnumerateKey(v9, i, KeyBasicInformation, v14, v7 - 2, &ResultLength);
        if ( v16 != -2147483643 && v16 != -1073741789 )
          goto LABEL_10;
        ResultLength += 2;
        v20 = Win32AllocPool(ResultLength, 1919972181LL);
        v21 = (unsigned int *)v20;
        if ( v20 )
        {
          ThreadLockExchange(v20, v24);
          Win32FreePool(v14);
          v7 = ResultLength;
          v14 = v21;
          v16 = ZwEnumerateKey(v9, i, KeyBasicInformation, v21, ResultLength - 2, &ResultLength);
          if ( v16 != -2147483643 && v16 != -1073741789 )
          {
LABEL_10:
            if ( v16 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)v24, v17, v18, v19);
              ZwClose(v9);
              break;
            }
            *((_WORD *)v14 + ((unsigned __int64)v14[3] >> 1) + 8) = 0;
            v23 = v14 + 4;
            LOWORD(v22) = *((_WORD *)v14 + 6);
            WORD1(v22) = v22;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
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
