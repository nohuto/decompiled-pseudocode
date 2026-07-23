/*
 * XREFs of sub_1800CDD84 @ 0x1800CDD84
 * Callers:
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_18006F140 @ 0x18006F140 (sub_18006F140.c)
 *     sub_1800CDC50 @ 0x1800CDC50 (sub_1800CDC50.c)
 */

__int64 __fastcall sub_1800CDD84(_QWORD *a1)
{
  int v2; // edi
  unsigned __int64 v3; // r14
  NTSTATUS v4; // eax
  char *v5; // rsi
  unsigned int *v6; // rbx
  unsigned int *v7; // rbp
  unsigned __int64 v8; // r15
  PCSTR v10[9]; // [rsp+30h] [rbp-48h] BYREF
  DWORD v11; // [rsp+80h] [rbp+8h] BYREF
  char *v12; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1[7] + 48LL);
  v4 = sub_18001C4DC(v3, 1, 0, &v11, &v12);
  v5 = v12;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (unsigned int *)(v3 + *((unsigned int *)v5 + 7));
    v7 = &v6[*((unsigned int *)v5 + 5)];
    if ( v6 < v7 )
    {
      v8 = v11;
      do
      {
        if ( v3 + *v6 - (unsigned __int64)v5 < v8 )
        {
          v2 = sub_18006F140((const char *)(v3 + *v6), (__int64)v10, &v12, &v11);
          if ( v2 < 0 )
            break;
          v2 = sub_1800CDC50(a1, v10);
          if ( v2 < 0 )
            break;
        }
        ++v6;
      }
      while ( v6 < v7 );
    }
  }
  return (unsigned int)v2;
}
