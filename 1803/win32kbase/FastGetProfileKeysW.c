/*
 * XREFs of FastGetProfileKeysW @ 0x1C00A8220
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     UserReAllocPoolWithQuota @ 0x1C006AC80 (UserReAllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

unsigned __int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, unsigned int a2, void *a3, _QWORD *a4)
{
  _WORD *v5; // rsi
  __int64 v6; // rdi
  _WORD *v7; // rbx
  unsigned int v8; // r14d
  ULONG v9; // r15d
  ULONG Length; // r12d
  void *v11; // r13
  _DWORD *v12; // rsi
  NTSTATUS v13; // eax
  ULONG v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ebp
  _WORD *v17; // rax
  size_t v18; // r8
  __int64 v19; // rax
  __int64 v20; // rsi
  _WORD *v21; // rax
  unsigned __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-274h]
  void *Src; // [rsp+38h] [rbp-270h]
  _QWORD *v26; // [rsp+40h] [rbp-268h]
  _BYTE KeyValueInformation[512]; // [rsp+50h] [rbp-258h] BYREF

  v26 = a4;
  Src = a3;
  v5 = a3;
  v24 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = 512;
  v11 = OpenCacheKeyEx(a1, a2, 0x20019u, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *a4 = 0LL;
  v12 = KeyValueInformation;
  while ( 1 )
  {
    ResultLength = 0;
    v13 = ZwEnumerateValueKey(v11, v9, KeyValueBasicInformation, v12, Length, &ResultLength);
    if ( v13 != -2147483643 )
      break;
    v14 = ResultLength;
    if ( ResultLength <= Length )
      goto LABEL_13;
    if ( v6 )
    {
      Win32FreePool(v6);
      v14 = ResultLength;
      v12 = KeyValueInformation;
      Length = 512;
    }
    v15 = Win32AllocPoolWithQuota(v14, 0x72707355u);
    v6 = v15;
    if ( v15 )
    {
      Length = ResultLength;
      v12 = (_DWORD *)v15;
    }
    else
    {
LABEL_18:
      ++v9;
    }
  }
  if ( v13 < 0 )
    goto LABEL_13;
  v16 = (v12[2] + v8 + 4099) & 0xFFFFF000;
  if ( v24 >= v16 )
  {
LABEL_17:
    v18 = (unsigned int)v12[2];
    v24 = v16;
    memmove(&v7[(unsigned __int64)v8 >> 1], v12 + 3, v18);
    v7[(unsigned __int64)(v8 + v12[2]) >> 1] = 0;
    v8 += v12[2] + 2;
    goto LABEL_18;
  }
  if ( !v7 )
  {
    v7 = (_WORD *)Win32AllocPoolWithQuota(v16, 0x72707355u);
    if ( !v7 )
      goto LABEL_13;
    goto LABEL_17;
  }
  v17 = UserReAllocPoolWithQuota(v7, v8, v16, 0x72707355u);
  if ( v17 )
  {
    v7 = v17;
    goto LABEL_17;
  }
LABEL_13:
  if ( !v9 )
  {
    v5 = Src;
LABEL_19:
    v19 = -1LL;
    do
      ++v19;
    while ( v5[v19] );
    v20 = (unsigned int)(2 * v19 + 4);
    v21 = (_WORD *)Win32AllocPoolWithQuota(v20, 0x72707355u);
    v7 = v21;
    if ( v21 )
    {
      memmove(v21, Src, v20 - 2);
      v8 = v20 - 2;
    }
  }
  if ( v11 )
    ZwClose(v11);
  if ( v6 )
    Win32FreePool(v6);
  result = (unsigned __int64)v8 >> 1;
  if ( v7 )
    v7[result] = 0;
  *v26 = v7;
  return result;
}
