/*
 * XREFs of BiEnumerateSubKeys @ 0x14073EB60
 * Callers:
 *     BiDeleteKey @ 0x14072A888 (BiDeleteKey.c)
 *     BiCleanupLoadedStores @ 0x14073D6DC (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x14092DFE0 (BcdEnumerateObjects.c)
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013D3C0 (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x140178118 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x1401781C0 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  ULONG *v3; // r12
  _QWORD *v4; // r14
  unsigned int v6; // esi
  void *v7; // r12
  NTSTATUS v8; // ebx
  unsigned __int64 v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  char *PoolWithTag; // rax
  char *v15; // r13
  ULONG v16; // r12d
  unsigned int v17; // eax
  unsigned int *v18; // rbx
  __int64 v19; // r8
  ULONG j; // esi
  NTSTATUS v21; // eax
  char *v22; // r13
  unsigned int i; // [rsp+34h] [rbp-B4h]
  _QWORD *v25; // [rsp+38h] [rbp-B0h]
  void *v27; // [rsp+48h] [rbp-A0h]
  unsigned int v28; // [rsp+50h] [rbp-98h]
  ULONG v29; // [rsp+54h] [rbp-94h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
  ULONG *v31; // [rsp+60h] [rbp-88h]
  _QWORD *v32; // [rsp+68h] [rbp-80h]
  ULONG *v33; // [rsp+70h] [rbp-78h]
  int v34[12]; // [rsp+78h] [rbp-70h] BYREF

  v3 = a3;
  v31 = a3;
  v4 = a2;
  v32 = a2;
  v33 = a3;
  memset(v34, 0, sizeof(v34));
  v6 = 0;
  for ( i = 0; ; i = v6 )
  {
    *v4 = 0LL;
    *v3 = 0;
    P = 0LL;
    v7 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v27 = a1;
    v8 = BiZwQueryKey(a1, KeyFullInformation, v34, 0x30u, &v29);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      v28 = v34[5];
      if ( v34[5] )
      {
        LODWORD(v9) = v34[6] + 2;
        if ( (unsigned int)(v34[6] + 2) < v34[6] )
        {
          LODWORD(v9) = -1;
          v8 = -1073741675;
          v10 = -1;
        }
        else
        {
          v8 = 0;
          v10 = v34[6] + 2;
        }
        v11 = (unsigned int)v34[5];
        if ( v8 >= 0 )
        {
          v9 = (unsigned int)v34[5] * (unsigned __int64)v10;
          if ( v9 > 0xFFFFFFFF )
          {
            LODWORD(v9) = -1;
            v8 = -1073741675;
            v10 = -1;
          }
          else
          {
            v8 = 0;
            v10 *= v34[5];
          }
        }
        if ( v8 >= 0 )
        {
          v12 = 8 * v34[5];
          if ( 8 * (unsigned __int64)(unsigned int)v34[5] > 0xFFFFFFFF )
          {
            v8 = -1073741675;
            v12 = -1;
          }
          else
          {
            v8 = 0;
          }
          if ( v8 >= 0 )
          {
            v13 = v12 + v10;
            if ( v13 < v12 )
            {
              v8 = -1073741675;
              v13 = -1;
            }
            else
            {
              v8 = 0;
            }
            if ( v8 >= 0 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x4B444342u);
              v7 = PoolWithTag;
              v25 = PoolWithTag;
              if ( PoolWithTag )
              {
                v15 = &PoolWithTag[8 * v11];
                v16 = v34[6] + 26;
                if ( v34[6] >= 0xFFFFFFE6 )
                {
                  v16 = -1;
                  v8 = -1073741675;
                  v17 = -1;
                }
                else
                {
                  v8 = 0;
                  v17 = v34[6] + 26;
                }
                if ( v8 >= 0 )
                {
                  v18 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
                  P = v18;
                  if ( v18 )
                  {
                    for ( j = 0; ; ++j )
                    {
                      if ( j >= v28 )
                        goto LABEL_27;
                      v21 = BiZwEnumerateKey(v27, j, v19, v18, v16, &v29);
                      v8 = v21;
                      if ( v21 == -2147483622 )
                        break;
                      if ( v21 < 0 )
                        goto LABEL_46;
                      v18 = (unsigned int *)P;
                      if ( (unsigned __int64)*((unsigned int *)P + 3) + 2 > (unsigned int)v9 )
                      {
                        v8 = -1073741789;
                        goto LABEL_46;
                      }
                      v25[j] = v15;
                      memmove(v15, v18 + 4, v18[3]);
                      v22 = &v15[v18[3]];
                      *(_WORD *)v22 = 0;
                      v15 = v22 + 2;
                      LODWORD(v9) = -2 - v18[3] + v9;
                    }
                    if ( j )
                    {
LABEL_27:
                      v7 = v25;
                      v4 = a2;
                      *a2 = v25;
                      *v31 = j;
                      v8 = 0;
                      a1 = v27;
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    v8 = -1073741670;
                  }
                }
LABEL_46:
                a1 = v27;
                v7 = v25;
              }
              else
              {
                v8 = -1073741670;
              }
            }
          }
        }
        v4 = a2;
LABEL_28:
        v6 = i;
      }
      else
      {
        v8 = 0;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4B444342u);
    if ( v8 < 0 && v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    v3 = v31;
    if ( v6 >= 5 )
      break;
    ++v6;
  }
  return (unsigned int)v8;
}
