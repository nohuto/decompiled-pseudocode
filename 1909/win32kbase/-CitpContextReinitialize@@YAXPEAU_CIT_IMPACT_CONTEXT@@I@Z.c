/*
 * XREFs of ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C01C672C
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01C65A4 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0080EA8 (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C01C7B64 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextReinitialize(union _LARGE_INTEGER *a1, DWORD a2)
{
  char *v2; // rsi
  unsigned __int64 v5; // rax
  char *QuadPart; // rdi
  __int64 v7; // rdx
  char i; // cl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  DWORD j; // ebp
  __int64 v12; // rcx
  char *v13; // rdi
  char **v14; // rax

  v2 = (char *)&a1[1];
  a1[2].QuadPart = (LONGLONG)&a1[1];
  a1[1].QuadPart = (LONGLONG)&a1[1];
  a1[4].QuadPart = (LONGLONG)&a1[3];
  a1[3].QuadPart = (LONGLONG)&a1[3];
  a1[7].HighPart = 0;
  a1[6].QuadPart = (LONGLONG)&a1[5];
  a1[5].QuadPart = (LONGLONG)&a1[5];
  v5 = (unsigned __int64)&a1[9];
  QuadPart = (char *)a1[11].QuadPart;
  v7 = (unsigned int)a1[9].HighPart >> 5;
  a1[8].LowPart = 0;
  if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
  {
    for ( i = -1; (_DWORD)v7; LODWORD(v7) = (unsigned int)v7 >> 1 )
      ++i;
    v7 = (unsigned int)(1 << i);
  }
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = QuadPart;
  if ( (unsigned int)v7 > 0x4000000 )
    v7 = 0x4000000LL;
  *(_DWORD *)(v5 + 4) = 32 * v7;
  v9 = v5 | 1;
  v10 = (unsigned int)v7;
  if ( QuadPart > &QuadPart[8 * v7] )
    v10 = 0LL;
  if ( v10 )
    memset64(QuadPart, v9, v10);
  for ( j = 0; j < a1[7].LowPart; *((_QWORD *)v2 + 1) = v13 )
  {
    v12 = a1->QuadPart + 96LL * j;
    v13 = (char *)(v12 + 16);
    *(_QWORD *)(v12 + 24) = v12 + 16;
    *(_QWORD *)(v12 + 16) = v12 + 16;
    *(_QWORD *)v12 = 0LL;
    CitpProgDataReinitialize((struct _CIT_PROG_DATA *)v12);
    v14 = (char **)*((_QWORD *)v2 + 1);
    if ( *v14 != v2 )
      __fastfail(3u);
    *(_QWORD *)v13 = v2;
    ++j;
    *((_QWORD *)v13 + 1) = v14;
    *v14 = v13;
  }
  CitpContextResetTrackingValues(a1, a2);
}
