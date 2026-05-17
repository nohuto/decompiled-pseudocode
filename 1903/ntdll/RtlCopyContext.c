/*
 * XREFs of RtlCopyContext @ 0x1800662E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001ED88 @ 0x18001ED88 (sub_18001ED88.c)
 *     sub_18006656C @ 0x18006656C (sub_18006656C.c)
 *     sub_1800665B4 @ 0x1800665B4 (sub_1800665B4.c)
 *     sub_1800667F8 @ 0x1800667F8 (sub_1800667F8.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // esi
  unsigned int v14; // esi
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  result = sub_18001ED88(a2, 0LL);
  if ( (int)result >= 0 )
  {
    v19 = (_DWORD *)sub_18006656C(a1, a2);
    v10 = (int *)sub_18006656C(a3, v9);
    v12 = *v11;
    v13 = *v10;
    result = sub_18001ED88(a2 | *v10 | *v11, 0LL);
    if ( (int)result >= 0 )
    {
      v14 = a2 & v13;
      result = sub_18001ED88(v14, &v18);
      if ( (int)result >= 0 )
      {
        result = sub_18001ED88(v12, &v20);
        v16 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v20 & v18) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            sub_1800665B4(v15, a1, v14, a3);
            *v19 |= v12;
            if ( (v20 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                LOBYTE(v17) = (v12 & 0x10020) != 65568;
                if ( ((unsigned __int8)v17 & ((v14 & 0x10020) == 65568)) != 0 )
                  *(_DWORD *)(a1 + 728) = 716;
              }
              else if ( (a2 & 0x100000) != 0 )
              {
                v7 = a3 + 1232;
                v6 = a1 + 1232;
              }
              else if ( (a2 & 0x200000) != 0 )
              {
                v7 = a3 + 416;
                v6 = a1 + 416;
              }
              else if ( (a2 & 0x400000) != 0 )
              {
                v7 = a3 + 912;
                v6 = a1 + 912;
              }
            }
            if ( (v18 & 2) == 0 )
              return v16;
            result = sub_1800667F8(v17, v6, v6, v7, v7);
            v16 = result;
            if ( (int)result >= 0 )
              return v16;
          }
        }
      }
    }
  }
  return result;
}
