/*
 * XREFs of ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C002D6B8
 * Callers:
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C002D9C0 (ValidateHandleSecure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHandleEntrySecure(void *a1, struct _HANDLEENTRY *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v7; // r8d
  __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  void **v13; // rax
  unsigned int v14; // ecx

  v2 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a2 - (struct _HANDLEENTRY *)qword_1C01CBA58) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = 0;
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v8 = *((_WORD *)&unk_1C018DB4C + 12 * *((unsigned __int8 *)a2 + 24));
  if ( (v8 & 2) != 0 )
  {
    v10 = v2[v5 + 1];
  }
  else
  {
    if ( (v8 & 1) == 0 )
      return 0LL;
    v9 = v2[v5 + 1];
    if ( !v9 )
      return 0LL;
    v10 = *(_QWORD *)(v9 + 424);
  }
  if ( v10 )
  {
    if ( *(PVOID *)v10 == gpepCSRSS )
      return 1LL;
    v11 = *(_QWORD *)(CurrentProcessWin32Process + 768);
    if ( *(_QWORD *)(v10 + 768) == v11 )
      return 1LL;
    v13 = *(void ***)(v11 + 56);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v11 + 48);
      if ( v14 )
      {
        while ( *v13 != a1 )
        {
          ++v7;
          ++v13;
          if ( v7 >= v14 )
            return 0LL;
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
