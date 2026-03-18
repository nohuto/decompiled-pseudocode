/*
 * XREFs of ?vPatCpyRect1_8x8@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02BF0F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z @ 0x1C02C0754 (-vPatternCopyLoop@@YAXPEAU_RECTL@@PEAKPEAU_PATBLTFRAME@@HKKKKJJJPEBK3@Z.c)
 */

void __fastcall vPatCpyRect1_8x8(struct _PATBLTFRAME *a1, int a2)
{
  struct _PATBLTFRAME *v2; // rdi
  struct _RECTL *v3; // r12
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // r10d
  int v7; // r9d
  int v8; // r9d
  unsigned __int64 v9; // r11
  unsigned int *v10; // r14
  char v11; // si
  unsigned __int64 v12; // r15
  int v13; // r8d
  int v14; // r8d
  int v16; // [rsp+78h] [rbp-70h]
  int v18; // [rsp+88h] [rbp-60h]
  unsigned int *v19; // [rsp+90h] [rbp-58h]
  unsigned int v20[8]; // [rsp+98h] [rbp-50h] BYREF
  unsigned int v21[2]; // [rsp+B8h] [rbp-30h] BYREF

  v2 = a1;
  v3 = (struct _RECTL *)*((_QWORD *)a1 + 3);
  v16 = *((_DWORD *)a1 + 4);
  do
  {
    v4 = 0;
    v5 = aulMsk[v3->left & 0x1F];
    v6 = ~v5;
    if ( aulMsk[v3->right & 0x1F] != -1 )
      v4 = aulMsk[v3->right & 0x1F];
    v19 = (unsigned int *)(*(_QWORD *)v2 + *((_DWORD *)v2 + 4) * v3->top + 4 * ((__int64)v3->left >> 5));
    v7 = (v3->right >> 5) - ((v3->left + 31) >> 5);
    v18 = v7;
    if ( v7 == -1 )
      goto LABEL_17;
    if ( !v7 )
    {
      if ( aulMsk[v3->left & 0x1F] != -1 && v4 )
      {
        v8 = 8;
        goto LABEL_18;
      }
LABEL_17:
      v5 &= ~v4;
      v8 = 9;
      v6 = ~v5;
      goto LABEL_18;
    }
    if ( v7 + 1 <= 1 || v7 >= 10 )
    {
      if ( aulMsk[v3->left & 0x1F] == -1 )
        v8 = 3 - (v4 != 0);
      else
        v8 = v4 == 0;
    }
    else if ( aulMsk[v3->left & 0x1F] == -1 )
    {
      v8 = 7 - (v4 != 0);
    }
    else
    {
      v8 = 5 - (v4 != 0);
    }
LABEL_18:
    v9 = *((_QWORD *)v2 + 1);
    v10 = v20;
    v11 = *((_BYTE *)v2 + 32);
    v12 = v9 + 32;
    if ( v9 < v9 + 32 )
    {
      do
      {
        v13 = *(unsigned __int8 *)(v9 + 3);
        v9 += 4LL;
        v14 = (((v13 << 8) | v13) << 16) | (v13 << 8) | v13;
        if ( v11 )
          v14 = __ROR4__(v14, v11);
        *v10++ = v14;
      }
      while ( v9 < v12 );
      v2 = a1;
    }
    vPatternCopyLoop(v3++, v19, v2, v8, ~v4, v5, v4, v6, v18, v16, 8 * v16, v20, v21);
    --a2;
  }
  while ( a2 );
}
