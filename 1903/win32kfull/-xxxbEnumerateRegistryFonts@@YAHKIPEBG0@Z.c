/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00E8DD8
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00E8AD0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00E8C78 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00B4984 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        int a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 ProfileUserName; // rbx
  ULONG v7; // r12d
  void *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int *v12; // rsi
  ULONG i; // r14d
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  unsigned int *v20; // r15
  __int64 v21; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v22; // [rsp+38h] [rbp-41h]
  _QWORD v23[3]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v24[3]; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  ProfileUserName = 0LL;
  KeyHandle = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  v7 = 544;
  if ( a2 == 56 )
  {
    ProfileUserName = CreateProfileUserName(v24);
    if ( !ProfileUserName )
      return 0LL;
  }
  v8 = (void *)OpenCacheKeyEx(ProfileUserName, a2, 131097LL);
  if ( ProfileUserName )
    FreeProfileUserName(ProfileUserName, v24);
  if ( !v8 )
    return 0LL;
  v9 = xxxbEnumerateRegistryFontsInternal(v8, a1);
  v10 = Win32AllocPool(544LL, 1919972181LL);
  v12 = (unsigned int *)v10;
  if ( !v10 )
    return v9;
  PushW32ThreadLock(v10, v23, (__int64)Win32FreePool, v11);
  for ( i = 0; ; ++i )
  {
    v14 = ZwEnumerateKey(v8, i, KeyBasicInformation, v12, v7 - 2, &ResultLength);
    if ( v14 != -2147483643 && v14 != -1073741789 )
      break;
    ResultLength += 2;
    v19 = Win32AllocPool(ResultLength, 1919972181LL);
    v20 = (unsigned int *)v19;
    if ( v19 )
    {
      ThreadLockExchange(v19, v23);
      Win32FreePool(v12);
      v7 = ResultLength;
      v12 = v20;
      v14 = ZwEnumerateKey(v8, i, KeyBasicInformation, v20, ResultLength - 2, &ResultLength);
      if ( v14 != -2147483643 && v14 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v14 >= 0 )
  {
    *((_WORD *)v12 + ((unsigned __int64)v12[3] >> 1) + 8) = 0;
    v22 = v12 + 4;
    LOWORD(v21) = *((_WORD *)v12 + 6);
    WORD1(v21) = v21;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, a1);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v23, v15, v16, v17);
  ZwClose(v8);
  return v9;
}
