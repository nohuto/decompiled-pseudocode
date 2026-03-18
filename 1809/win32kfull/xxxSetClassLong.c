/*
 * XREFs of xxxSetClassLong @ 0x1C01D53F0
 * Callers:
 *     NtUserSetClassLong @ 0x1C021C3D0 (NtUserSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C00FC374 (xxxSetClassData.c)
 */

unsigned __int64 __fastcall xxxSetClassLong(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v13; // rax
  unsigned int v14; // r9d
  _QWORD *i; // rdx

  v5 = a3;
  v6 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) != PsGetCurrentProcessWin32Process(a1) )
  {
    v11 = 5LL;
LABEL_14:
    UserSetLastError(v11, v8, v9, v10);
    return 0LL;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && (unsigned __int8)byte_1C02CF7AA[v6] <= 4u )
      return xxxSetClassData((struct tagWND *)a1, v6, v5, a4);
    goto LABEL_13;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  if ( (int)v6 + 4 < (unsigned int)v6 || (v13 = *(_QWORD *)(v8 + 8), (unsigned int)(v6 + 4) > *(_DWORD *)(v13 + 12)) )
  {
LABEL_13:
    v11 = 1413LL;
    goto LABEL_14;
  }
  v14 = *(_DWORD *)(v13 + v6 + 88);
  *(_DWORD *)(v13 + v6 + 88) = v5;
  for ( i = *(_QWORD **)(v8 + 64); i; i = (_QWORD *)*i )
    *(_DWORD *)(i[1] + v6 + 88) = v5;
  return v14;
}
