/*
 * XREFs of IopLoadBootHotPatches @ 0x1409E0290
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B2F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcstoul @ 0x140197E00 (wcstoul.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmRegisterHotPatch @ 0x1409F81D0 (MmRegisterHotPatch.c)
 */

__int64 IopLoadBootHotPatches()
{
  unsigned int *PoolWithTag; // rsi
  ULONG Length; // r15d
  ULONG v3; // ebx
  NTSTATUS v4; // eax
  unsigned int v5; // r14d
  unsigned int v6; // ecx
  __int64 v7; // r14
  unsigned __int16 v8; // ax
  unsigned int v9; // r12d
  __int64 v10; // r8
  int v11; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  wchar_t *EndPtr; // [rsp+40h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-29h] BYREF
  _WORD v15[4]; // [rsp+50h] [rbp-21h] BYREF
  char *v16; // [rsp+58h] [rbp-19h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  wchar_t Str[8]; // [rsp+90h] [rbp+1Fh] BYREF
  __int16 v19; // [rsp+A0h] [rbp+2Fh] BYREF

  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"vx";
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes) < 0 )
    return 1LL;
  PoolWithTag = 0LL;
  v19 = 0;
  Length = 0;
  v3 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, PoolWithTag, Length, &ResultLength);
      v5 = v4;
      if ( v4 < 0 )
        break;
      if ( PoolWithTag[1] == 3 )
      {
        v6 = PoolWithTag[3];
        if ( v6 >= 4 )
        {
          v7 = PoolWithTag[2];
          v8 = *(_WORD *)((char *)PoolWithTag + v7);
          if ( (v8 & 1) == 0 && v8 + 2 == v6 && PoolWithTag[4] == 32 )
          {
            *(_OWORD *)Str = *(_OWORD *)(PoolWithTag + 5);
            v9 = wcstoul(Str, &EndPtr, 16);
            if ( EndPtr == (wchar_t *)&v19 )
            {
              *(_OWORD *)Str = *(_OWORD *)(PoolWithTag + 9);
              v10 = wcstoul(Str, &EndPtr, 16);
              if ( EndPtr == (wchar_t *)&v19 )
              {
                v16 = (char *)PoolWithTag + v7 + 2;
                v15[0] = *(_WORD *)((char *)PoolWithTag + v7);
                v15[1] = v15[0];
                v11 = MmRegisterHotPatch(v15, v9, v10);
                v5 = v11;
                if ( v11 < 0 && v11 != -1073741515 && v11 != -1073741735 )
                  goto LABEL_25;
              }
            }
          }
        }
      }
      ++v3;
    }
    if ( v4 != -1073741789 && v4 != -2147483643 )
      break;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x70486F49u);
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
      goto LABEL_25;
    }
    Length = ResultLength;
  }
  if ( v4 == -2147483622 )
    v5 = 0;
LABEL_25:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ZwClose(KeyHandle);
  return v5;
}
