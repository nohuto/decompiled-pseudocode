/*
 * XREFs of sub_1800555A8 @ 0x1800555A8
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x1800187C0 (LdrResolveDelayLoadedAPI.c)
 *     sub_18005547C @ 0x18005547C (sub_18005547C.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     sub_18005521C @ 0x18005521C (sub_18005521C.c)
 *     sub_18005575C @ 0x18005575C (sub_18005575C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008F320 (bsearch_s.c)
 */

__int64 __fastcall sub_1800555A8(char *a1, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // esi
  _DWORD *v7; // rax
  unsigned int v8; // r14d
  unsigned int *v9; // rdi
  rsize_t v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r12
  char v17[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-30h] BYREF
  char *v20; // [rsp+48h] [rbp-28h]
  _QWORD Key[2]; // [rsp+50h] [rbp-20h] BYREF

  v20 = a1;
  Context = 0LL;
  Key[0] = 0LL;
  Key[1] = 0LL;
  v5 = a1;
  v6 = 0;
  RtlImageNtHeaderEx(3u, a1, 0LL, &OutHeaders);
  v7 = sub_18001F450(v5);
  if ( v7 )
  {
    if ( *v7 >= 0xB0u )
    {
      if ( *((_QWORD *)v7 + 21) )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v8 = v7[36];
          if ( (v8 & 0x4000) != 0 )
          {
            v9 = (unsigned int *)*((_QWORD *)v7 + 20);
            v10 = (unsigned int)v7[42];
            v11 = (v8 >> 28) + 4;
            if ( !a2 )
              a2 = *v9;
            v12 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( !a3 )
              a3 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( a2 <= v12 && *v9 <= a3 && a3 >= a2 )
            {
              if ( *v9 >= a2 )
                goto LABEL_15;
              LODWORD(Key[0]) = a2;
              Context = v9;
              if ( bsearch_s(Key, v9, v10, v11, sub_18007ED30, &Context) || a2 != a3 )
              {
                v9 = Context;
LABEL_15:
                LODWORD(v14) = 0;
                while ( (unsigned int)v14 < a3 && (unsigned int)v14 < v12 )
                {
                  v15 = v14;
                  v14 = *v9;
                  if ( v15 >= (unsigned int)v14 )
                    return (unsigned int)-1073741701;
                  v16 = *(_QWORD *)&v5[v14];
                  if ( (unsigned int)sub_18005575C(v16, v17) != 1 && (v17[0] & 0x10) != 0 )
                  {
                    v6 = sub_18005521C(v16, 4u, &OutHeaders);
                    if ( (v6 & 0x80000000) != 0 )
                      return v6;
                  }
                  v5 = v20;
                  v9 = (unsigned int *)((char *)v9 + v11);
                }
                return v6;
              }
            }
            return 0LL;
          }
        }
      }
    }
  }
  return v6;
}
