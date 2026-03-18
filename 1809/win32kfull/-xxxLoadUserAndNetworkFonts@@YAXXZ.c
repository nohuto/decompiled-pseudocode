/*
 * XREFs of ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00C2F90
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00C2CF0 (xxxLW_LoadFonts.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00C30E0 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00C324C (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 */

void __fastcall xxxLoadUserAndNetworkFonts(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r9
  ULONG v6; // esi
  void *v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  unsigned int *v10; // rdi
  ULONG i; // ebp
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int *v15; // r14
  _WORD v16[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int *v17; // [rsp+38h] [rbp-80h]
  _QWORD v18[3]; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+8h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+10h] BYREF

  xxxbEnumerateRegistryFonts(0x401u, 0x38u, a3, a4);
  xxxbEnumerateRegistryFonts(2u, 0x38u, v4, v5);
  KeyHandle = 0LL;
  ResultLength = 0;
  v6 = 544;
  v7 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL);
  v8 = v7;
  if ( v7 )
  {
    xxxbEnumerateRegistryFontsInternal(v7, 2u);
    v9 = Win32AllocPool(544LL, 1919972181LL);
    v10 = (unsigned int *)v9;
    if ( v9 )
    {
      PushW32ThreadLock(v9, v18, (__int64)Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v10, v6 - 2, &ResultLength);
        if ( v12 != -2147483643 && v12 != -1073741789 )
          goto LABEL_6;
        ResultLength += 2;
        v14 = Win32AllocPool(ResultLength, 1919972181LL);
        v15 = (unsigned int *)v14;
        if ( v14 )
        {
          ThreadLockExchange(v14, v18);
          Win32FreePool(v10);
          v6 = ResultLength;
          v10 = v15;
          v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v15, ResultLength - 2, &ResultLength);
          if ( v12 != -2147483643 && v12 != -1073741789 )
          {
LABEL_6:
            if ( v12 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)v18, v13);
              ZwClose(v8);
              return;
            }
            *((_WORD *)v10 + ((unsigned __int64)v10[3] >> 1) + 8) = 0;
            v17 = v10 + 4;
            v16[0] = *((_WORD *)v10 + 6);
            v16[1] = v16[0];
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v16;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v8;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              xxxbEnumerateRegistryFontsInternal(KeyHandle, 2u);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
  }
}
