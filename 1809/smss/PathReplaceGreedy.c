/*
 * XREFs of PathReplaceGreedy @ 0x140016B90
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x140007090 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 */

__int64 __fastcall PathReplaceGreedy(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int v4; // edi
  unsigned __int16 v7; // r9
  unsigned __int16 *v8; // r15
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r14
  __int64 v11; // rcx
  WCHAR v12; // bx
  __int64 v13; // rdx
  unsigned __int16 *v14; // r11
  unsigned int v15; // r8d
  unsigned __int16 v17; // ax
  int v18; // r9d
  int v19; // r8d
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int16 v29; // ax
  _WORD v30[4]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 *v31; // [rsp+18h] [rbp-8h]
  unsigned __int16 v32; // [rsp+20h] [rbp+0h]
  unsigned __int16 *v33; // [rsp+28h] [rbp+8h]

  v3 = *a3;
  v4 = 0;
  v33 = a2;
  v7 = 0;
  v8 = 0LL;
  v32 = 0;
  if ( v3 >= *a1 )
  {
    v9 = 0;
    if ( (v3 & 0xFFFE) != 0 )
    {
      do
      {
        v10 = 0;
        if ( (*a1 & 0xFFFE) != 0 )
        {
          do
          {
            v11 = v9 + (unsigned int)v10;
            if ( (unsigned int)v11 >= *a3 >> 1 )
              break;
            v12 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v11));
            if ( v12 != RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v10)) )
              break;
            ++v10;
          }
          while ( v10 < (unsigned __int16)(*a1 >> 1) );
          v7 = v32;
          v4 = 0;
        }
        if ( v10 == *a1 >> 1 )
        {
          v13 = v9 + (unsigned int)v10;
          if ( (_DWORD)v13 == *a3 >> 1 || *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v13) == 92 )
          {
            v31 = v8;
            ++v7;
            v30[0] = v9;
            v32 = v7;
            v8 = v30;
            v30[1] = v9 + v10;
          }
        }
        ++v9;
      }
      while ( v9 < (unsigned __int16)(*a3 >> 1) );
      if ( v8 )
      {
        v14 = v33;
        v15 = *a3;
        if ( *v33 > *a1 && v15 + v7 * (*v33 - *a1) > a3[1] )
          return 2147483653LL;
        v17 = a3[1];
        v18 = (v17 >> 1) - 1;
        v19 = (v15 >> 1) - 1;
        if ( v19 >= 0 )
        {
          do
          {
            if ( v8 && v19 < v8[1] )
            {
              v20 = *v14;
              v21 = 0;
              if ( (*v14 & 0xFFFE) != 0 )
              {
                do
                {
                  v22 = v21++;
                  v23 = v18--;
                  *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v23) = *(_WORD *)(*((_QWORD *)v14 + 1)
                                                                       + 2 * (((unsigned __int64)v20 >> 1) - v22)
                                                                       - 2);
                  v20 = *v14;
                }
                while ( v21 < (unsigned __int16)(*v14 >> 1) );
              }
              v19 = *v8;
              v8 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
            }
            else
            {
              v24 = v18--;
              *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v24) = *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v19);
            }
            --v19;
          }
          while ( v19 >= 0 );
          v17 = a3[1];
        }
        v25 = v18 + 1;
        if ( v25 < v17 >> 1 )
        {
          v26 = 2LL * v25;
          do
          {
            v27 = *((_QWORD *)a3 + 1);
            ++v25;
            v28 = v4++;
            v29 = *(_WORD *)(v26 + v27);
            v26 += 2LL;
            *(_WORD *)(v27 + 2 * v28) = v29;
          }
          while ( v25 < a3[1] >> 1 );
        }
        *a3 = 2 * v4;
      }
    }
  }
  return 0LL;
}
