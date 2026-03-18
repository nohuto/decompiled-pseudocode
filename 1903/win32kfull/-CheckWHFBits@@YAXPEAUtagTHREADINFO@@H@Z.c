/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00B434C
 * Callers:
 *     FreeHook @ 0x1C00B4250 (FreeHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0023A2C (PhkFirstGlobalValid.c)
 *     PhkFirstValid @ 0x1C00B4500 (PhkFirstValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, __int64 a2)
{
  int v2; // r14d
  BOOL v4; // esi
  __int64 Valid; // rax
  __int64 v6; // rdx
  int v7; // r9d
  PRKPROCESS *v8; // r15
  int v9; // edx

  v2 = a2;
  v4 = 1;
  Valid = PhkFirstValid(a1, a2);
  if ( Valid )
    v4 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid((__int64)a1, v2) == 0;
  if ( v7 )
  {
    *((_DWORD *)a1 + 168) &= ~(1 << (v2 + 1));
    if ( *((_QWORD *)a1 + 59) )
    {
      v8 = (PRKPROCESS *)*((_QWORD *)a1 + 52);
      if ( v8 == (PRKPROCESS *)PsGetCurrentProcessWin32Process((unsigned int)(v2 + 1), v6) )
      {
        v9 = 0;
      }
      else
      {
        KeAttachProcess(*v8);
        v9 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 59) + 56LL) = *((_DWORD *)a1 + 168);
      if ( v9 )
        KeDetachProcess();
    }
  }
  if ( v4 )
    *(_DWORD *)(**((_QWORD **)a1 + 57) + 16LL) &= ~(1 << (v2 + 1));
}
