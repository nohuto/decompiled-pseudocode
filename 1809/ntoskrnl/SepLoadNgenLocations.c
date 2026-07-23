/*
 * XREFs of SepLoadNgenLocations @ 0x14075B1F8
 * Callers:
 *     SepSetSystemPaths @ 0x14075B100 (SepSetSystemPaths.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepLoadNgenLocations(__int64 a1)
{
  unsigned int v1; // r13d
  NTSTATUS v2; // eax
  NTSTATUS v3; // ebx
  unsigned int v4; // r14d
  ULONG v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // r15d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  _DWORD *PoolWithTag; // rsi
  _DWORD *v12; // rax
  signed __int64 v13; // rdi
  __int16 v14; // cx
  ULONG v15; // r12d
  unsigned int v16; // r14d
  __int16 v17; // ax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void *v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  ULONG Length; // [rsp+48h] [rbp-59h]
  void *v30; // [rsp+50h] [rbp-51h]
  __int64 v31; // [rsp+58h] [rbp-49h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-41h] BYREF
  char KeyValueInformation[4]; // [rsp+90h] [rbp-11h] BYREF
  int v34; // [rsp+94h] [rbp-Dh]
  unsigned int v35; // [rsp+98h] [rbp-9h]
  char KeyInformation[32]; // [rsp+A0h] [rbp-1h] BYREF
  ULONG v37; // [rsp+C0h] [rbp+1Fh]
  int v38; // [rsp+C4h] [rbp+23h]

  v1 = 0;
  v31 = a1;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
LABEL_43:
      v3 = 0;
  }
  else
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v3 >= 0 && v37 && (unsigned int)(v38 - 1) <= 0xFFFE )
    {
      v4 = -1;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v3 = ZwEnumerateValueKey(KeyHandle, v5, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
        if ( (int)(v3 + 0x80000000) >= 0 && v3 != -2147483643 )
          break;
        if ( v34 == 4 && v35 >= 2 )
        {
          v8 = v35 + 16;
          v9 = v35 + 16 + v6;
          v6 = -1;
          if ( v9 >= v35 + 16 )
            v6 = v9;
          v3 = v9 < v8 ? 0xC0000095 : 0;
          if ( v9 < v8 )
            break;
          ++v7;
        }
        if ( ++v5 >= v37 )
        {
          if ( !v7 )
            goto LABEL_43;
          v10 = v6 + 8;
          if ( v6 + 8 >= v6 )
            v4 = v6 + 8;
          v3 = v10 < v6 ? 0xC0000095 : 0;
          if ( v10 >= v6 )
          {
            Length = v38 + 16;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v38 + 16), 0x63734943u);
            if ( PoolWithTag )
            {
              v12 = ExAllocatePoolWithTag(PagedPool, v4, 0x63734943u);
              v13 = (signed __int64)v12;
              if ( v12 )
              {
                v14 = -1;
                v12[1] = 0xFFFF;
                v15 = 0;
                v30 = &v12[4 * v7 + 2];
                v16 = v4 - (16 * v7 + 8);
                v17 = 0;
                if ( v37 )
                {
                  while ( 1 )
                  {
                    v3 = ZwEnumerateValueKey(
                           KeyHandle,
                           v15,
                           KeyValueBasicInformation,
                           PoolWithTag,
                           Length,
                           &ResultLength);
                    if ( v3 < 0 )
                      break;
                    if ( PoolWithTag[1] == 4 )
                    {
                      v18 = PoolWithTag[2];
                      if ( v18 >= 2 )
                      {
                        v19 = PoolWithTag[2];
                        do
                        {
                          if ( *((_WORD *)PoolWithTag + ((unsigned __int64)v18 >> 1) + 5) )
                            break;
                          PoolWithTag[2] = v18 - 2;
                          v18 -= 2;
                          v19 = v18;
                        }
                        while ( v18 >= 2 );
                        if ( v19 )
                        {
                          if ( v19 > v16 || v1 >= v7 )
                          {
                            v3 = -2147483643;
                            break;
                          }
                          v20 = *(unsigned __int16 *)(v13 + 4);
                          v21 = v30;
                          if ( v20 >= v19 )
                            LOWORD(v20) = v19;
                          v22 = *(unsigned __int16 *)(v13 + 6);
                          *(_WORD *)(v13 + 4) = v20;
                          if ( v22 <= PoolWithTag[2] )
                            LOWORD(v22) = PoolWithTag[2];
                          *(_WORD *)(v13 + 6) = v22;
                          v23 = 2LL * v1;
                          *(_QWORD *)(v13 + 8 * v23 + 16) = v21;
                          *(_WORD *)(v13 + 8 * v23 + 8) = *((_WORD *)PoolWithTag + 4);
                          *(_WORD *)(v13 + 8 * v23 + 10) = *((_WORD *)PoolWithTag + 4);
                          memmove(v21, PoolWithTag + 3, (unsigned int)PoolWithTag[2]);
                          v24 = (unsigned int)PoolWithTag[2];
                          v30 = (char *)v30 + v24;
                          v16 -= v24;
                          ++v1;
                        }
                      }
                    }
                    if ( ++v15 >= v37 )
                    {
                      v14 = *(_WORD *)(v13 + 4);
                      v17 = *(_WORD *)(v13 + 6);
                      goto LABEL_36;
                    }
                  }
                }
                else
                {
LABEL_36:
                  *(_DWORD *)v13 = v1;
                  *(_WORD *)(v13 + 4) = v14 + 8;
                  v25 = v31;
                  *(_WORD *)(v13 + 6) = v17 + 8;
                  v13 &= -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 40), v13, 0LL) != 0);
                }
                if ( v13 )
                  ExFreePoolWithTag((PVOID)v13, 0x63734943u);
              }
              else
              {
                v3 = -1073741801;
              }
              ExFreePoolWithTag(PoolWithTag, 0x63734943u);
            }
            else
            {
              v3 = -1073741801;
            }
          }
          break;
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
