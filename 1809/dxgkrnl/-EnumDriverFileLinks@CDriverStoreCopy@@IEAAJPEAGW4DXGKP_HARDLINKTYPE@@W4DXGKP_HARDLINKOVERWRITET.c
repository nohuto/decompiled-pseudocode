/*
 * XREFs of ?EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0208D10
 * Callers:
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C02090E8 (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall CDriverStoreCopy::EnumDriverFileLinks(__int64 a1, const WCHAR *a2, int a3, int a4)
{
  NTSTATUS v5; // ebx
  ULONG v6; // r13d
  _DWORD *v7; // rsi
  ULONG v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  _WORD *v13; // r14
  __int64 v14; // rax
  char *v15; // rax
  _QWORD *v16; // rdi
  _WORD *v17; // r15
  unsigned int v18; // ecx
  _WORD *v19; // r8
  _WORD *v20; // rdx
  _WORD *v21; // rcx
  __int16 v22; // ax
  _WORD *v23; // r9
  __int16 v24; // ax
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void *KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-71h] BYREF
  int v30; // [rsp+3Ch] [rbp-6Dh]
  int v31; // [rsp+40h] [rbp-69h]
  __int64 v32; // [rsp+48h] [rbp-61h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-29h] BYREF
  _DWORD KeyInformation[12]; // [rsp+90h] [rbp-19h] BYREF

  v32 = a1;
  v31 = a4;
  v30 = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v5 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v5 < 0 || !KeyInformation[8] )
    goto LABEL_38;
  v6 = KeyInformation[10] + 26 + KeyInformation[9];
  v7 = operator new[](v6, 0x4B677844u, PagedPool);
  if ( !v7 )
  {
    v5 = -1073741801;
    goto LABEL_38;
  }
  v8 = 0;
  if ( !KeyInformation[8] )
    goto LABEL_36;
  while ( 1 )
  {
    v5 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v7, v6, &ResultLength);
    if ( v5 < 0 )
      goto LABEL_31;
    v12 = v7[1];
    if ( v12 != 7 && v12 != 1 )
      goto LABEL_31;
    v13 = (_WORD *)((char *)v7 + (unsigned int)v7[2]);
    if ( *v13 == 46 || *v13 == 92 )
    {
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v14 + 24) = 869LL;
      WdLogEvent5_WdWarning(v14);
      v5 = -1073741811;
    }
    v15 = (char *)operator new[]((unsigned int)v7[3] + 42LL, 0x4B677844u, PagedPool);
    v16 = v15;
    if ( !v15 )
      break;
    v17 = v15 + 36;
    v18 = v7[3] + 2;
    *((_DWORD *)v15 + 8) = v18;
    memmove(v15 + 36, v13, v18);
    v20 = (_WORD *)v16 + ((unsigned __int64)(unsigned int)v7[3] >> 1) + 18;
    v21 = v17;
    *v20 = 0;
    while ( v21 != v20 )
    {
      v22 = *v21;
      v23 = v17;
      ++v21;
      if ( v22 == 92 )
      {
        v17 = v21;
      }
      else if ( !v22 )
      {
        if ( v21 == v20 )
          break;
        do
        {
          if ( *v21 != 32 )
            break;
          ++v21;
        }
        while ( v21 != v20 );
        v19 = v21;
        if ( v21 == v20 )
          break;
        v24 = *v21;
        v17 = v21;
        if ( !*v21 )
          v17 = v23;
        ++v21;
        if ( !v24 )
          v21 = v19;
      }
    }
    if ( !*v17 || *v17 == 46 )
    {
      v27 = WdLogNewEntry5_WdWarning(v21, v20, v19);
      *(_QWORD *)(v27 + 24) = 923LL;
      WdLogEvent5_WdWarning(v27);
      v5 = -1073741811;
      operator delete[](v16);
      goto LABEL_36;
    }
    *((_DWORD *)v16 + 4) = v30;
    *((_DWORD *)v16 + 5) = v31;
    v25 = (__int64 *)(v32 + 1608);
    v16[3] = v17;
    v26 = *v25;
    if ( *(__int64 **)(*v25 + 8) != v25 )
      __fastfail(3u);
    *v16 = v26;
    v16[1] = v25;
    *(_QWORD *)(v26 + 8) = v16;
    *v25 = (__int64)v16;
LABEL_31:
    if ( ++v8 >= KeyInformation[8] )
      goto LABEL_36;
  }
  v5 = -1073741801;
LABEL_36:
  operator delete[](v7);
LABEL_38:
  ZwClose(KeyHandle);
  return (unsigned int)v5;
}
