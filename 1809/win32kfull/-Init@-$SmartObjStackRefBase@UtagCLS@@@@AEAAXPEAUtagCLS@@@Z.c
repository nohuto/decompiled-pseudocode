/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14
 * Callers:
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     DereferenceClass @ 0x1C0021A20 (DereferenceClass.c)
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00232D4 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     xxxGetWindowSmIcon @ 0x1C00B72A4 (xxxGetWindowSmIcon.c)
 *     xxxSetClassLongPtr @ 0x1C00FC2D8 (xxxSetClassLongPtr.c)
 *     GetClassIcoCur @ 0x1C0120CD0 (GetClassIcoCur.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C015D904 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01D4CB8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1C01D51EC (_SetClassWord.c)
 *     _WOWModuleUnload @ 0x1C01FD140 (_WOWModuleUnload.c)
 *     xxxRecreateSmallIcons @ 0x1C0227F50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::Init(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v7; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v7 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 128) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1448);
  *v7 = result;
  *(_QWORD *)(v5 + 1448) = v7;
  return result;
}
