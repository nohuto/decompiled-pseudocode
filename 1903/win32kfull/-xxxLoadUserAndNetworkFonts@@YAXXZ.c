/*
 * XREFs of ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00E8C78
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
  __int64 v10; // r9
  unsigned int *v11; // rbx
  ULONG i; // esi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int *v18; // r14
  __int64 v19; // [rsp+30h] [rbp-39h] BYREF
  unsigned int *v20; // [rsp+38h] [rbp-31h]
  _QWORD v21[6]; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  xxxbEnumerateRegistryFonts(0x401u, 0x38u, a3, a4);
  xxxbEnumerateRegistryFonts(2u, 0x38u, v4, v5);
  memset(v21, 0, sizeof(v21));
  v19 = 0LL;
  v20 = 0LL;
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
    v11 = (unsigned int *)v9;
    if ( v9 )
    {
      PushW32ThreadLock(v9, v21, (__int64)Win32FreePool, v10);
      for ( i = 0; ; ++i )
      {
        v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v11, v6 - 2, &ResultLength);
        if ( v13 != -2147483643 && v13 != -1073741789 )
          goto LABEL_6;
        ResultLength += 2;
        v17 = Win32AllocPool(ResultLength, 1919972181LL);
        v18 = (unsigned int *)v17;
        if ( v17 )
        {
          ThreadLockExchange(v17, v21);
          Win32FreePool(v11);
          v6 = ResultLength;
          v11 = v18;
          v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v18, ResultLength - 2, &ResultLength);
          if ( v13 != -2147483643 && v13 != -1073741789 )
          {
LABEL_6:
            if ( v13 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)v21, v14, v15, v16);
              ZwClose(v8);
              return;
            }
            *((_WORD *)v11 + ((unsigned __int64)v11[3] >> 1) + 8) = 0;
            v20 = v11 + 4;
            LOWORD(v19) = *((_WORD *)v11 + 6);
            WORD1(v19) = v19;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
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
