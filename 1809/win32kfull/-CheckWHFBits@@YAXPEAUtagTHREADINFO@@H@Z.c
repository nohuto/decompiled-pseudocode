/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00B586C
 * Callers:
 *     FreeHook @ 0x1C00B5770 (FreeHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     PhkFirstValid @ 0x1C00B5BC8 (PhkFirstValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, __int64 a2)
{
  int v2; // r14d
  BOOL v4; // esi
  __int64 Valid; // rax
  int v6; // r9d
  PRKPROCESS *v7; // r15
  int v8; // edx

  v2 = a2;
  v4 = 1;
  Valid = PhkFirstValid(a1, a2);
  if ( Valid )
    v4 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid((__int64)a1, v2) == 0;
  if ( v6 )
  {
    *((_DWORD *)a1 + 170) &= ~(1 << (v2 + 1));
    if ( *((_QWORD *)a1 + 60) )
    {
      v7 = (PRKPROCESS *)*((_QWORD *)a1 + 53);
      if ( v7 == (PRKPROCESS *)PsGetCurrentProcessWin32Process((unsigned int)(v2 + 1)) )
      {
        v8 = 0;
      }
      else
      {
        KeAttachProcess(*v7);
        v8 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 60) + 56LL) = *((_DWORD *)a1 + 170);
      if ( v8 )
        KeDetachProcess();
    }
  }
  if ( v4 )
    *(_DWORD *)(**((_QWORD **)a1 + 58) + 16LL) &= ~(1 << (v2 + 1));
}
