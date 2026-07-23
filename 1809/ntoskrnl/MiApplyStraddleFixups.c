/*
 * XREFs of MiApplyStraddleFixups @ 0x140127EEC
 * Callers:
 *     MiPerformFixups @ 0x1405E0B58 (MiPerformFixups.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __fastcall MiApplyStraddleFixups(__int64 a1, char *a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v6; // rbx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rcx
  char *v14; // r9
  size_t v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF

  v6 = *(__int64 **)(a1 + 16);
  if ( v6 )
  {
    while ( 1 )
    {
      v11 = *((_DWORD *)v6 + 2);
      if ( (v11 & 0xFFFFF000) == a3 )
        break;
      v12 = *((_DWORD *)v6 + 3);
      if ( (v12 & 0xFFFFF000) == a3 )
      {
        v15 = v12 & 0xFFF;
        v14 = a2;
        v16 = 4096 - (v11 & 0xFFFu);
LABEL_10:
        if ( v14 )
        {
          v17 = v6[3];
          if ( (a6 & 1) != 0 )
          {
            v19 = v17 + *(_QWORD *)(a1 + 48);
          }
          else
          {
            v18 = v17 + a5;
            if ( !a5 )
              v18 = v6[3];
            v19 = a4 + v18;
          }
          v20 = v19;
          if ( (_DWORD)v15 )
            memmove(v14, (char *)&v20 + v16, v15);
        }
      }
LABEL_4:
      v6 = (__int64 *)*v6;
      if ( !v6 )
        return;
    }
    if ( (v11 & 0xFFF) == 0 )
    {
      if ( *((_WORD *)v6 + 8) == 3 )
        *(_WORD *)&a2[(*((_DWORD *)v6 + 3) & 0xFFFLL) - 2] += WORD1(a4);
      goto LABEL_4;
    }
    v13 = v11 & 0xFFF;
    v14 = &a2[v13];
    v15 = 4096 - (((_DWORD)v13 + (_DWORD)a2) & 0xFFFu);
    v16 = 0LL;
    goto LABEL_10;
  }
}
