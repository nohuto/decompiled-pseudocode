/*
 * XREFs of ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00C2DC0
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00C2CF0 (xxxLW_LoadFonts.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00C30E0 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00C324C (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 */

__int64 __fastcall xxxLoadPermanentFonts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // r9
  unsigned int v7; // ebx
  ULONG v8; // r14d
  void *v9; // rax
  void *v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rax
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // r9
  unsigned int *v15; // rbp
  ULONG i; // r15d
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int *v20; // r12
  _WORD v21[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v22; // [rsp+38h] [rbp-80h]
  _QWORD v23[3]; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+8h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+10h] BYREF

  if ( gbPermanentFontsLoaded )
    return 1LL;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
    xxxbEnumerateRegistryFonts(0x80000000, 0x36u, v5, v6);
  v7 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v8 = 544;
  v9 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = xxxbEnumerateRegistryFontsInternal(v9, 1u);
    v12 = Win32AllocPool(544LL, 1919972181LL);
    v15 = (unsigned int *)v12;
    if ( v12 )
    {
      PushW32ThreadLock(v12, v23, (__int64)Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v17 = ZwEnumerateKey(v10, i, KeyBasicInformation, v15, v8 - 2, &ResultLength);
        if ( v17 != -2147483643 && v17 != -1073741789 )
          goto LABEL_10;
        ResultLength += 2;
        v19 = Win32AllocPool(ResultLength, 1919972181LL);
        v20 = (unsigned int *)v19;
        if ( v19 )
        {
          ThreadLockExchange(v19, v23);
          Win32FreePool(v15);
          v8 = ResultLength;
          v15 = v20;
          v17 = ZwEnumerateKey(v10, i, KeyBasicInformation, v20, ResultLength - 2, &ResultLength);
          if ( v17 != -2147483643 && v17 != -1073741789 )
          {
LABEL_10:
            if ( v17 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)v23, v18);
              ZwClose(v10);
              break;
            }
            *((_WORD *)v15 + ((unsigned __int64)v15[3] >> 1) + 8) = 0;
            v22 = v15 + 4;
            v21[0] = *((_WORD *)v15 + 6);
            v21[1] = v21[0];
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v21;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v10;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              v11 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, 1u);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
    v7 = v11;
    if ( v11 )
      v7 = xxxbEnumerateRegistryFonts(1u, 0x39u, v13, v14);
  }
  result = v7;
  gbPermanentFontsLoaded = 1;
  return result;
}
