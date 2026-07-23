/*
 * XREFs of SepReadSingleCap @ 0x1408A5E00
 * Callers:
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 */

__int64 __fastcall SepReadSingleCap(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  ULONG Length; // ebp
  unsigned int *PoolWithTag; // rdi
  NTSTATUS v8; // ebx
  __int64 v9; // r14
  int v10; // esi
  SIZE_T v11; // rbx
  char *v12; // rax
  char *v13; // rsi
  unsigned int *v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  char *v17; // r15
  unsigned int v18; // edx
  unsigned int v19; // r9d
  _QWORD *v20; // r8
  __int64 v21; // r10
  __int64 v22; // rax
  char *v24; // [rsp+30h] [rbp-48h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h]
  __int64 v27; // [rsp+98h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  ResultLength = 0;
  Length = a2 + 18;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(a2 + 18), 0x70536553u);
  if ( PoolWithTag )
  {
    v8 = ZwQueryValueKey(KeyHandle, &ContainedCapes, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v9 = PoolWithTag[2] != 0 ? PoolWithTag[2] >> 2 : 0;
    v8 = ZwQueryValueKey(KeyHandle, &CapeName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v10 = PoolWithTag[2] + ((8 * v9 + 73) & 0xFFFFFFFE);
    v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v11 = PoolWithTag[2] + v10;
    v12 = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x70536553u);
    v13 = v12;
    if ( v12 )
    {
      v24 = &v12[v11];
      v8 = ZwQueryValueKey(KeyHandle, &CapeFlags, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
      if ( v8 >= 0 )
      {
        if ( PoolWithTag[2] == 4 )
        {
          v14 = PoolWithTag + 3;
          *((_DWORD *)v13 + 14) = PoolWithTag[3];
          v8 = ZwQueryValueKey(KeyHandle, &CapeName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
          if ( v8 >= 0 )
          {
            v15 = PoolWithTag[2];
            v16 = (unsigned __int64)&v13[8 * (unsigned int)v9 + 73] & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v16 + v15 <= (unsigned __int64)v24 )
            {
              *((_WORD *)v13 + 21) = v15;
              *((_WORD *)v13 + 20) = v15;
              *((_QWORD *)v13 + 6) = v16;
              memmove(
                (void *)((unsigned __int64)&v13[8 * v9 + 73] & 0xFFFFFFFFFFFFFFFEuLL),
                PoolWithTag + 3,
                PoolWithTag[2]);
              v17 = (char *)(PoolWithTag[2] + v16);
              v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
              if ( v8 < 0 )
                goto LABEL_24;
              if ( &v17[PoolWithTag[2]] <= v24 )
              {
                *((_QWORD *)v13 + 3) = v17;
                memmove(v17, PoolWithTag + 3, PoolWithTag[2]);
                v8 = ZwQueryValueKey(
                       KeyHandle,
                       &ContainedCapes,
                       KeyValuePartialInformation,
                       PoolWithTag,
                       Length,
                       &ResultLength);
                if ( v8 < 0 )
                  goto LABEL_24;
                v18 = 0;
                *((_DWORD *)v13 + 15) = v9;
                if ( !(_DWORD)v9 )
                {
LABEL_21:
                  if ( RtlValidSid(*((PSID *)v13 + 3)) )
                    *a5 = v13;
                  else
                    v8 = -1073741704;
                  goto LABEL_24;
                }
                v19 = v26;
                v20 = v13 + 64;
                v21 = v27;
                while ( 1 )
                {
                  v22 = *v14;
                  if ( (unsigned int)v22 >= v19 )
                    break;
                  ++v18;
                  ++v14;
                  *v20++ = v21 + 56 * v22;
                  if ( v18 >= (unsigned int)v9 )
                    goto LABEL_21;
                }
              }
            }
            v8 = -1073741789;
          }
        }
        else
        {
          v8 = -1073741811;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
LABEL_24:
    ExFreePoolWithTag(PoolWithTag, 0x70536553u);
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741670;
}
