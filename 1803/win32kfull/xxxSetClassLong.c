/*
 * XREFs of xxxSetClassLong @ 0x1C01B2CAC
 * Callers:
 *     NtUserSetClassLong @ 0x1C01F4C20 (NtUserSetClassLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetClassData @ 0x1C010B0CC (xxxSetClassData.c)
 */

unsigned __int64 __fastcall xxxSetClassLong(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  unsigned int v12; // r9d
  _QWORD *i; // rdx

  v5 = a3;
  v6 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) != PsGetCurrentProcessWin32Process(a1) )
  {
    v9 = 5LL;
LABEL_14:
    UserSetLastError(v9, v8);
    return 0LL;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && byte_1C02DE588[(int)v6 + 34] <= 4u )
      return xxxSetClassData((struct tagWND *)a1, v6, v5, a4);
    goto LABEL_13;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
  if ( (int)v6 + 4 < (unsigned int)v6 || (v11 = *(_QWORD *)(v8 + 8), (unsigned int)(v6 + 4) > *(_DWORD *)(v11 + 12)) )
  {
LABEL_13:
    v9 = 1413LL;
    goto LABEL_14;
  }
  v12 = *(_DWORD *)(v6 + v11 + 88);
  *(_DWORD *)(v6 + v11 + 88) = v5;
  for ( i = *(_QWORD **)(v8 + 64); i; i = (_QWORD *)*i )
    *(_DWORD *)(i[1] + v6 + 88) = v5;
  return v12;
}
