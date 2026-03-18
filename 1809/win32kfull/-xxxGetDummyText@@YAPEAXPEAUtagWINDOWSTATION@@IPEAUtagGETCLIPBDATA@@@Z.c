/*
 * XREFs of ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7C0C
 * Callers:
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 * Callees:
 *     FindClipFormat @ 0x1C00D9E78 (FindClipFormat.c)
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 */

__int64 __fastcall xxxGetDummyText(struct tagWINDOWSTATION *a1, int a2, struct tagGETCLIPBDATA *a3)
{
  int v5; // r15d
  int v6; // edx
  int v7; // edx
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int64 ClipFormat; // rax
  __int64 v11; // rbx
  struct tagWINDOWSTATION *v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax

  v5 = 1;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 6;
    if ( !v7 )
    {
      v8 = 13;
      v9 = 1;
      goto LABEL_8;
    }
    if ( v7 != 6 )
      return 0LL;
    v8 = 1;
  }
  else
  {
    v8 = 13;
  }
  v9 = 7;
LABEL_8:
  ClipFormat = FindClipFormat((__int64)a1, v8, 1);
  v11 = 0LL;
  if ( !ClipFormat )
    return 0LL;
  v12 = a1;
  if ( *(_QWORD *)(ClipFormat + 8) == 1LL )
  {
    v15 = FindClipFormat((__int64)a1, v9, 1);
    if ( v15 && *(_QWORD *)(v15 + 8) != 1LL )
    {
      v5 = 0;
      v13 = v9;
      v12 = a1;
      goto LABEL_11;
    }
    return 0LL;
  }
  v13 = v8;
LABEL_11:
  if ( !xxxGetClipboardData(v12, v13, (__int64)a3) )
    return 0LL;
  if ( !v5 )
    v8 = v9;
  v16 = FindClipFormat((__int64)a1, v8, 1);
  if ( !v16 )
    return 0LL;
  *(_DWORD *)a3 = *(_DWORD *)v16;
  v17 = *(_QWORD *)(v16 + 8);
  v18 = FindClipFormat((__int64)a1, 0x10u, 1);
  if ( v18 )
    v11 = *(_QWORD *)(v18 + 8);
  *((_QWORD *)a3 + 1) = v11;
  return v17;
}
