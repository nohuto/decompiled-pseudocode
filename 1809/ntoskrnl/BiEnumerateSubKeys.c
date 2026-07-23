/*
 * XREFs of BiEnumerateSubKeys @ 0x140713BC4
 * Callers:
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     BiCleanupLoadedStores @ 0x140712950 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x1408F1B9C (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x1408F3728 (BiBuildIdentifierList.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013B4D0 (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x14016E650 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x14016E6F8 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // r15d
  unsigned int *v6; // r14
  void *v7; // rsi
  NTSTATUS v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  char *PoolWithTag; // rax
  char *v18; // r13
  ULONG v19; // r12d
  __int64 v20; // r8
  ULONG j; // esi
  NTSTATUS v22; // eax
  char *v23; // r13
  unsigned int i; // [rsp+34h] [rbp-B4h]
  void *v26; // [rsp+38h] [rbp-B0h]
  _QWORD *v27; // [rsp+48h] [rbp-A0h]
  ULONG v28; // [rsp+50h] [rbp-98h]
  ULONG v29; // [rsp+54h] [rbp-94h] BYREF
  _QWORD *v30; // [rsp+58h] [rbp-90h]
  ULONG *v31; // [rsp+60h] [rbp-88h]
  _QWORD *v32; // [rsp+68h] [rbp-80h]
  ULONG *v33; // [rsp+70h] [rbp-78h]
  int v34[5]; // [rsp+78h] [rbp-70h] BYREF
  ULONG v35; // [rsp+8Ch] [rbp-5Ch]
  unsigned int v36; // [rsp+90h] [rbp-58h]

  v31 = a3;
  v3 = a2;
  v30 = a2;
  v32 = a2;
  v33 = a3;
  v5 = 0;
  for ( i = 0; ; i = v5 )
  {
    *v3 = 0LL;
    *a3 = 0;
    v6 = 0LL;
    v7 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v26 = a1;
    v8 = BiZwQueryKey(a1, KeyFullInformation, v34, 0x30u, &v29);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      v28 = v35;
      if ( v35 )
      {
        v9 = v36 + 2;
        v10 = -1;
        if ( v36 + 2 >= v36 )
          v10 = v36 + 2;
        v8 = v9 < v36 ? 0xC0000095 : 0;
        v11 = v35;
        if ( v9 >= v36 )
        {
          v12 = v35 * (unsigned __int64)v10;
          v10 = -1;
          if ( v12 <= 0xFFFFFFFF )
            v10 = v12;
          v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
        }
        if ( v8 >= 0 )
        {
          v13 = 8LL * v35;
          v14 = -1;
          if ( v13 <= 0xFFFFFFFF )
            v14 = v13;
          v8 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v13 <= 0xFFFFFFFF )
          {
            v15 = v14 + v10;
            v16 = -1;
            if ( v14 + v10 >= v14 )
              v16 = v14 + v10;
            v8 = v15 < v14 ? 0xC0000095 : 0;
            if ( v15 >= v14 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x4B444342u);
              v7 = PoolWithTag;
              v27 = PoolWithTag;
              if ( PoolWithTag )
              {
                v18 = &PoolWithTag[8 * v11];
                v19 = -1;
                if ( v36 < 0xFFFFFFE6 )
                  v19 = v36 + 26;
                v8 = v36 >= 0xFFFFFFE6 ? 0xC0000095 : 0;
                if ( v36 + 26 >= 0x1A )
                {
                  v6 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B444342u);
                  if ( v6 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v28 )
                        goto LABEL_28;
                      v22 = BiZwEnumerateKey(v26, j, v20, v6, v19, &v29);
                      v8 = v22;
                      if ( v22 == -2147483622 )
                        break;
                      if ( v22 < 0 )
                        goto LABEL_29;
                      if ( (unsigned __int64)v6[3] + 2 > v10 )
                      {
                        v8 = -1073741789;
                        goto LABEL_29;
                      }
                      v27[j] = v18;
                      memmove(v18, v6 + 4, v6[3]);
                      v23 = &v18[v6[3]];
                      *(_WORD *)v23 = 0;
                      v18 = v23 + 2;
                      v10 += -2 - v6[3];
                    }
                    if ( j )
                    {
LABEL_28:
                      *v30 = v27;
                      *v31 = j;
                      v8 = 0;
                    }
LABEL_29:
                    v7 = v27;
                  }
                  else
                  {
                    v8 = -1073741670;
                  }
                }
              }
              else
              {
                v8 = -1073741670;
              }
            }
          }
        }
        a1 = v26;
        v5 = i;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x4B444342u);
    if ( v8 < 0 && v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    v3 = v30;
    a3 = v31;
    if ( v5 >= 5 )
      break;
    ++v5;
  }
  return (unsigned int)v8;
}
