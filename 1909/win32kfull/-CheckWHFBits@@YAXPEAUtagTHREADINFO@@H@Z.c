/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00550BC
 * Callers:
 *     FreeHook @ 0x1C0054FC0 (FreeHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0029E9C (PhkFirstGlobalValid.c)
 *     PhkFirstValid @ 0x1C0055270 (PhkFirstValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  BOOL v5; // esi
  __int64 Valid; // rax
  __int64 v7; // rdx
  int v8; // r9d
  PRKPROCESS *v9; // r15
  int v10; // edx

  v3 = a2;
  v5 = 1;
  Valid = PhkFirstValid(a1, a2, a3, 1LL);
  if ( Valid )
    v5 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid((__int64)a1, v3) == 0;
  if ( v8 )
  {
    *((_DWORD *)a1 + 168) &= ~(1 << (v3 + 1));
    if ( *((_QWORD *)a1 + 59) )
    {
      v9 = (PRKPROCESS *)*((_QWORD *)a1 + 52);
      if ( v9 == (PRKPROCESS *)PsGetCurrentProcessWin32Process((unsigned int)(v3 + 1), v7) )
      {
        v10 = 0;
      }
      else
      {
        KeAttachProcess(*v9);
        v10 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 59) + 56LL) = *((_DWORD *)a1 + 168);
      if ( v10 )
        KeDetachProcess();
    }
  }
  if ( v5 )
    *(_DWORD *)(**((_QWORD **)a1 + 57) + 16LL) &= ~(1 << (v3 + 1));
}
