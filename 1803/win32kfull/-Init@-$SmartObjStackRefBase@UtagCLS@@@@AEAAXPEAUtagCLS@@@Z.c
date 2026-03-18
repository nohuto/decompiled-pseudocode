/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48
 * Callers:
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     DereferenceClass @ 0x1C0035F90 (DereferenceClass.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     _HasCaptionIcon @ 0x1C00C4988 (_HasCaptionIcon.c)
 *     xxxGetWindowSmIcon @ 0x1C00C4A6C (xxxGetWindowSmIcon.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00DBD94 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     GetClassIcoCur @ 0x1C00F1AB0 (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1C010B038 (xxxSetClassLongPtr.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C0138FB0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0138FD0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01B25B4 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1C01B2AB8 (_SetClassWord.c)
 *     _WOWModuleUnload @ 0x1C01D8320 (_WOWModuleUnload.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
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
  result = *(_QWORD *)(v5 + 1456);
  *v7 = result;
  *(_QWORD *)(v5 + 1456) = v7;
  return result;
}
