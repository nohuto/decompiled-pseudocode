/*
 * XREFs of HMIsHandleEntrySecureWorker @ 0x1C01058B0
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0023ED0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     ?IsHandleEntrySecureWorker@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C010557C (-IsHandleEntrySecureWorker@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall HMIsHandleEntrySecureWorker(void *a1)
{
  unsigned int v2; // ebx
  struct _HANDLEENTRY *v3; // rdi

  v2 = 0;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = (struct _HANDLEENTRY *)((char *)qword_1C0213758 + (unsigned int)(unsigned __int16)a1 * dword_1C0213760);
    if ( WORD1(a1) == *((_WORD *)v3 + 13)
      || WORD1(a1) == 0xFFFF
      || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL) )
    {
      return (unsigned int)IsHandleEntrySecureWorker(a1, v3);
    }
  }
  return v2;
}
