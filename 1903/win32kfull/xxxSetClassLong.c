/*
 * XREFs of xxxSetClassLong @ 0x1C015D1E8
 * Callers:
 *     NtUserSetClassLong @ 0x1C015D100 (NtUserSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 */

unsigned __int64 __fastcall xxxSetClassLong(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // r9d
  _QWORD *i; // rdx
  __int64 v15; // rcx

  v5 = a3;
  v6 = (int)a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != PsGetCurrentProcessWin32Process(a1, a2) )
  {
    v15 = 5LL;
    goto LABEL_10;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && byte_1C02E18BA[v6] <= 4u )
      return xxxSetClassData((struct tagWND *)a1, v6, v5, a4);
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL);
  if ( (int)v6 + 4 < (unsigned int)v6 || (v11 = *(_QWORD *)(v8 + 8), (unsigned int)(v6 + 4) > *(_DWORD *)(v11 + 12)) )
  {
LABEL_8:
    v15 = 1413LL;
LABEL_10:
    UserSetLastError(v15, v8, v9, v10);
    return 0LL;
  }
  v12 = *(_DWORD *)(v11 + v6 + 88);
  *(_DWORD *)(v11 + v6 + 88) = v5;
  for ( i = *(_QWORD **)(v8 + 64); i; i = (_QWORD *)*i )
    *(_DWORD *)(i[1] + v6 + 88) = v5;
  return v12;
}
