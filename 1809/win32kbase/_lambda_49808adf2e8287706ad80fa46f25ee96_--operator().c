/*
 * XREFs of _lambda_49808adf2e8287706ad80fa46f25ee96_::operator() @ 0x1C00A9E58
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C009B450 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _lambda_49808adf2e8287706ad80fa46f25ee96_::_lambda_invoker_cdecl_ @ 0x1C00A9E40 (_lambda_49808adf2e8287706ad80fa46f25ee96_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C002D330 (GreDeleteSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0060C7C (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C008DBA0 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C009137C (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_49808adf2e8287706ad80fa46f25ee96_::operator()(__int64 a1, struct PDEV **a2)
{
  struct PDEV *v2; // rcx
  __int64 v4; // r8
  struct PDEV *v5; // rcx

  v2 = *a2;
  if ( (*((_DWORD *)*a2 + 10) & 0x8000) != 0 )
  {
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    RemovePDEVFromList(&gppdevListUMPDInCreate, *a2);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v4);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 7) )
  {
    GreDeleteSemaphore(*((PERESOURCE *)v2 + 7));
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 6) )
  {
    GreDeleteSemaphore(*((PERESOURCE *)v2 + 6));
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 445) )
  {
    Win32FreePool(*((_QWORD *)v2 + 445));
    *((_QWORD *)*a2 + 445) = 0LL;
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 189) && (int)IsPDEVOBJ_bDisableHalftoneSupported(v2) >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(a2);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)a2);
  v5 = *a2;
  if ( *((_QWORD *)*a2 + 225) )
  {
    if ( !PsIsThreadTerminating(KeGetCurrentThread()) )
      (*((void (__fastcall **)(_QWORD))*a2 + 338))(*((_QWORD *)*a2 + 225));
    *((_QWORD *)*a2 + 225) = 0LL;
    v5 = *a2;
  }
  PDEV::Free(v5, *((_DWORD *)v5 + 10) & 0x8000);
  *a2 = 0LL;
}
