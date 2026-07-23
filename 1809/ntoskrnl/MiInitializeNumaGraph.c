/*
 * XREFs of MiInitializeNumaGraph @ 0x1409BB764
 * Callers:
 *     MiCreatePfnDatabase @ 0x1409BB550 (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 */

void __fastcall MiInitializeNumaGraph(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int *v2; // rdx
  unsigned int v3; // r8d
  unsigned int j; // r9d
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // r8d
  unsigned int v9; // ebp
  unsigned int *v10; // r14
  _QWORD *v11; // rdi
  unsigned int i; // edx
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  size_t v16; // rdx
  unsigned int v17; // r10d
  __int16 *p_Base; // r11
  __int16 v19; // cx
  __int64 v20; // rdx
  int Base; // [rsp+20h] [rbp-428h] BYREF
  _QWORD v22[127]; // [rsp+28h] [rbp-420h] BYREF

  v1 = 0;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 240) + 256LL);
  if ( v2 )
  {
    v7 = *v2;
    v8 = (unsigned __int16)KeNumberNodes;
    v9 = (unsigned __int16)KeNumberNodes;
    if ( *v2 <= (unsigned __int16)KeNumberNodes )
      v9 = *v2;
    v10 = &v2[v7 + 1];
    if ( v9 > 0x40 )
      v9 = 64;
    if ( v9 )
    {
      v11 = v22;
      do
      {
        for ( i = 0; i < v7; v22[v14] = v13 )
        {
          if ( i >= 0x40 )
            break;
          v13 = *((_WORD *)v10 + v1 * v7 + i);
          if ( !v13 )
            v13 = 1;
          v14 = 2LL * i;
          LODWORD(v22[v14]) = i++;
        }
        if ( i < v8 )
        {
          v15 = &v22[2 * i];
          do
          {
            if ( i >= 0x40 )
              break;
            *v15 = -1LL;
            *((_DWORD *)v15 - 2) = i++;
            v15 += 2;
          }
          while ( i < v8 );
        }
        v16 = (unsigned __int16)KeNumberNodes;
        *v11 = 0LL;
        qsort(&Base, v16, 0x10uLL, MiNodeCostSort);
        v8 = (unsigned __int16)KeNumberNodes;
        v17 = 0;
        if ( KeNumberNodes )
        {
          p_Base = (__int16 *)&Base;
          do
          {
            v19 = *p_Base;
            v20 = v1 * v8 + v17;
            p_Base += 8;
            ++v17;
            *((_WORD *)qword_14043B110 + v20) = v19;
          }
          while ( v17 < v8 );
        }
        ++v1;
        v11 += 2;
      }
      while ( v1 < v9 );
    }
  }
  v3 = (unsigned __int16)KeNumberNodes;
  while ( v1 < v3 )
  {
    for ( j = v1; j < v3 + v1; *((_WORD *)qword_14043B110 + v5) = (v6 % v3) & 0x3F )
    {
      v5 = v1 * (v3 - 1) + j;
      v6 = j++;
    }
    ++v1;
  }
}
