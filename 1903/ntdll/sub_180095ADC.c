/*
 * XREFs of sub_180095ADC @ 0x180095ADC
 * Callers:
 *     sub_180095CA0 @ 0x180095CA0 (sub_180095CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_180095914 @ 0x180095914 (sub_180095914.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180095ADC(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *a5,
        int a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int8 v12; // di
  unsigned __int8 *v13; // rdx
  char v14; // r11
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // r8
  unsigned __int8 i; // al
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // r10
  unsigned __int8 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  _BYTE v25[32]; // [rsp+40h] [rbp-58h] BYREF

  v12 = 0;
  memset(v25, 0, sizeof(v25));
  v13 = *a2;
  v14 = a1 | 8;
  v15 = *a2 + 1;
  *a2 = v15;
  if ( *v15 != 94 )
  {
    v15 = v13;
    v14 = a1;
  }
  v16 = v15 + 1;
  i = v15[1];
  if ( i != 93 )
    goto LABEL_5;
  v25[11] = 32;
  ++v16;
  v12 = 93;
  for ( i = *v16; i != 93; i = *v16 )
  {
LABEL_5:
    if ( i == 45 && v12 && (v18 = v16[1], v18 != 93) )
    {
      v19 = v16[1];
      if ( v12 >= v18 )
        v19 = v12;
      v20 = v12;
      if ( v12 >= v18 )
        v20 = v16[1];
      while ( v20 <= v19 )
      {
        v25[(unsigned __int64)v20 >> 3] |= 1 << (v20 & 7);
        ++v20;
      }
      v12 = 0;
      v21 = 2LL;
    }
    else
    {
      v12 = i;
      v22 = (unsigned __int64)i >> 3;
      v23 = (char)v25[v22] | (1 << (i & 7));
      v21 = 1LL;
      v25[v22] = v23;
    }
    v16 += v21;
  }
  *a2 = v16;
  return sub_180095914(v14, (__int64)v25, a3, a4, a5, a6, a7, a8);
}
