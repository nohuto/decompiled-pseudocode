/*
 * XREFs of SeAssignWorldSecurityDescriptor @ 0x14089D75C
 * Callers:
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall SeAssignWorldSecurityDescriptor(__int64 a1, unsigned int *a2, int *a3)
{
  PSID v6; // rbp
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  size_t v10; // r15
  char *v11; // rdi
  int v12; // ecx
  __int16 v13; // ax

  if ( !a3 )
    return 3221225506LL;
  v6 = SeWorldSid;
  v7 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
  v8 = *a2;
  v9 = 2 * v7 + 20;
  *a2 = v9;
  if ( v8 < v9 )
    return 3221225507LL;
  v10 = v7;
  *(_QWORD *)a1 = 0LL;
  v11 = (char *)(a1 + 20);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)a1 = 1;
  v12 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    memmove((void *)(a1 + 20), v6, v7);
    *(_DWORD *)(a1 + 4) = 20;
    v11 += v10;
    v12 = *a3;
  }
  if ( (v12 & 2) != 0 )
  {
    memmove(v11, v6, v10);
    *(_DWORD *)(a1 + 8) = (_DWORD)v11 - a1;
    v12 = *a3;
  }
  if ( (v12 & 4) != 0 )
  {
    *(_WORD *)(a1 + 2) |= 4u;
    v12 = *a3;
  }
  v13 = *(_WORD *)(a1 + 2);
  if ( (v12 & 8) != 0 )
  {
    v13 |= 0x10u;
    *(_WORD *)(a1 + 2) = v13;
  }
  *(_WORD *)(a1 + 2) = v13 | 0x8000;
  return 0LL;
}
