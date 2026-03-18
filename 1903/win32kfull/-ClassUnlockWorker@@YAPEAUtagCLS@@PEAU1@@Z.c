/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C01119A0
 * Callers:
 *     ClassUnlock @ 0x1C0111958 (ClassUnlock.c)
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA49C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C02403E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlockWorker(struct _CALLPROCDATA **a1)
{
  struct _CALLPROCDATA *v1; // rax
  struct _CALLPROCDATA ***v3; // rbx
  struct _CALLPROCDATA **i; // rdx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 18);
  v1 = a1[7];
  if ( a1 == (struct _CALLPROCDATA **)v1 )
    return a1;
  --*((_DWORD *)v1 + 18);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  v3 = (struct _CALLPROCDATA ***)((char *)a1[7] + 64);
  for ( i = *v3; i != a1; i = (struct _CALLPROCDATA **)*i )
    v3 = (struct _CALLPROCDATA ***)i;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, i);
  DestroyClass(CurrentProcessWin32Process, v3);
  return 0LL;
}
