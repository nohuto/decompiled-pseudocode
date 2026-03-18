/*
 * XREFs of ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C011D5E8
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

void __fastcall xxxLoadUserAndNetworkFonts(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r9
  ULONG v6; // r15d
  void *v7; // rax
  void *v8; // rdi
  __int64 v9; // rax
  unsigned int *v10; // rbx
  ULONG i; // esi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned int *v16; // r14
  __int64 v17; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v18; // [rsp+38h] [rbp-31h]
  _QWORD v19[6]; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  xxxbEnumerateRegistryFonts(0x401u, 0x38u, a3, a4);
  xxxbEnumerateRegistryFonts(2u, 0x38u, v4, v5);
  memset(v19, 0, sizeof(v19));
  v17 = 0LL;
  v18 = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  v6 = 544;
  v7 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL);
  v8 = v7;
  if ( v7 )
  {
    xxxbEnumerateRegistryFontsInternal(v7, 2);
    v9 = Win32AllocPool(544LL, 1919972181LL);
    v10 = (unsigned int *)v9;
    if ( v9 )
    {
      PushW32ThreadLock(v9, v19, (__int64)Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v10, v6 - 2, &ResultLength);
        if ( v12 != -2147483643 && v12 != -1073741789 )
          goto LABEL_6;
        ResultLength += 2;
        v15 = Win32AllocPool(ResultLength, 1919972181LL);
        v16 = (unsigned int *)v15;
        if ( v15 )
        {
          ThreadLockExchange(v15, (__int64)v19);
          Win32FreePool(v10);
          v6 = ResultLength;
          v10 = v16;
          v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v16, ResultLength - 2, &ResultLength);
          if ( v12 != -2147483643 && v12 != -1073741789 )
          {
LABEL_6:
            if ( v12 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)v19, v13, v14);
              ZwClose(v8);
              return;
            }
            *((_WORD *)v10 + ((unsigned __int64)v10[3] >> 1) + 8) = 0;
            v18 = v10 + 4;
            LOWORD(v17) = *((_WORD *)v10 + 6);
            WORD1(v17) = v17;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v8;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              xxxbEnumerateRegistryFontsInternal(KeyHandle, 2);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
  }
}
