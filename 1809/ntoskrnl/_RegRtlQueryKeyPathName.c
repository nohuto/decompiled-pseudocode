/*
 * XREFs of _RegRtlQueryKeyPathName @ 0x140762A2C
 * Callers:
 *     _PnpCtxRegQueryKeyPathName @ 0x14073AE58 (_PnpCtxRegQueryKeyPathName.c)
 * Callees:
 *     RtlULongSub @ 0x140101D94 (RtlULongSub.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryObject @ 0x1401B84F0 (ZwQueryObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlOpenPredefinedKey @ 0x14075E3EC (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlQueryKeyPathName(__int64 a1, const void **a2, unsigned int *a3)
{
  HANDLE v5; // r14
  unsigned __int64 v6; // rax
  ULONG v7; // esi
  signed int v8; // ebx
  const void **v9; // r13
  ULONG v10; // r9d
  HANDLE v11; // rcx
  NTSTATUS v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v16; // ecx
  const void **PoolWithTag; // rdi
  NTSTATUS v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // r14d
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+38h] [rbp-18h] BYREF
  ULONG ulMinuend; // [rsp+90h] [rbp+40h] BYREF
  ULONG pulResult; // [rsp+A8h] [rbp+58h] BYREF

  Handle = 0LL;
  v5 = (HANDLE)a1;
  if ( (unsigned __int64)(a1 - 0x80000000LL) > 7 || (v8 = RegRtlOpenPredefinedKey(a1, &Handle), v8 >= 0) )
  {
    v6 = 2LL * *a3;
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = 2 * *a3;
    v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v6 <= 0xFFFFFFFF )
    {
      v9 = (const void **)&v22;
      v10 = 16;
      v11 = v5;
      if ( v7 >= 0x10 )
      {
        v9 = a2;
        v10 = v7;
      }
      if ( Handle )
        v11 = Handle;
      v12 = ZwQueryObject(v11, ObjectNameInformation, v9, v10, &ulMinuend);
      v8 = v12;
      if ( !v12 )
      {
        v13 = *(unsigned __int16 *)v9;
        v14 = v13 + 2;
        *a3 = (v13 + 2) >> 1;
        if ( v7 >= v13 + 2 )
        {
          memmove(a2, v9[1], v13);
          *((_WORD *)a2 + ((unsigned __int64)v14 >> 1) - 1) = 0;
          goto LABEL_12;
        }
        goto LABEL_18;
      }
      if ( v12 == -1073741820 )
      {
        v8 = RtlULongSub(ulMinuend, 0x10u, &pulResult);
        if ( v8 >= 0 )
        {
          if ( v7 < pulResult )
          {
            *a3 = pulResult >> 1;
LABEL_18:
            v8 = -1073741789;
            goto LABEL_12;
          }
          PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v16, 0x4C474552u);
          if ( PoolWithTag )
          {
            if ( Handle )
              v5 = Handle;
            v18 = ZwQueryObject(v5, ObjectNameInformation, PoolWithTag, ulMinuend, &ulMinuend);
            v8 = v18;
            if ( v18 >= 0 )
            {
              if ( v18 )
              {
                v8 = -1073741595;
              }
              else
              {
                v19 = *(unsigned __int16 *)PoolWithTag;
                v20 = v19 + 2;
                *a3 = (v19 + 2) >> 1;
                if ( v7 < v19 + 2 )
                {
                  v8 = -1073741789;
                }
                else
                {
                  memmove(a2, PoolWithTag[1], v19);
                  *((_WORD *)a2 + ((unsigned __int64)v20 >> 1) - 1) = 0;
                }
              }
            }
            ExFreePoolWithTag(PoolWithTag, 0);
          }
          else
          {
            v8 = -1073741801;
          }
        }
      }
      else if ( v12 >= 0 )
      {
        v8 = -1073741595;
      }
    }
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
