/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C011D748
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C011D440 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C011D5E8 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00556F4 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  unsigned int *v11; // rsi
  ULONG i; // r14d
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  unsigned int *v18; // r15
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v20; // [rsp+38h] [rbp-41h]
  _QWORD v21[3]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  ProfileUserName = 0LL;
  KeyHandle = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ResultLength = 0;
  v7 = 544;
  if ( a2 == 56 )
  {
    ProfileUserName = CreateProfileUserName(v22);
    if ( !ProfileUserName )
      return 0LL;
  }
  v8 = (void *)OpenCacheKeyEx(ProfileUserName, a2, 131097LL);
  if ( ProfileUserName )
    FreeProfileUserName(ProfileUserName, v22);
  if ( !v8 )
    return 0LL;
  v9 = xxxbEnumerateRegistryFontsInternal(v8, a1);
  v10 = Win32AllocPool(544LL, 1919972181LL);
  v11 = (unsigned int *)v10;
  if ( !v10 )
    return v9;
  PushW32ThreadLock(v10, v21, (__int64)Win32FreePool);
  for ( i = 0; ; ++i )
  {
    v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v11, v7 - 2, &ResultLength);
    if ( v13 != -2147483643 && v13 != -1073741789 )
      break;
    ResultLength += 2;
    v17 = Win32AllocPool(ResultLength, 1919972181LL);
    v18 = (unsigned int *)v17;
    if ( v17 )
    {
      ThreadLockExchange(v17, (__int64)v21);
      Win32FreePool(v11);
      v7 = ResultLength;
      v11 = v18;
      v13 = ZwEnumerateKey(v8, i, KeyBasicInformation, v18, ResultLength - 2, &ResultLength);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v13 >= 0 )
  {
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
      v9 |= xxxbEnumerateRegistryFontsInternal(KeyHandle, a1);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v21, v14, v15);
  ZwClose(v8);
  return v9;
}
