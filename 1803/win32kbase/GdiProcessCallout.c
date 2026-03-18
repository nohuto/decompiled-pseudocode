/*
 * XREFs of GdiProcessCallout @ 0x1C0060F90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00346E0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0062DA4 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  unsigned __int64 v4; // rdi
  int v5; // r15d
  HANDLE ProcessId; // rax
  COPM *v7; // rcx
  HANDLE v8; // rax
  BOOLEAN i; // dl
  PVOID v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 ProcessPeb; // rax
  __int64 v18; // r14
  __int64 v19; // r8
  NTSTATUS v20; // edi
  HANDLE v21; // rax
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 )
  {
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(a1 + 88),
      GDIEngUserMemAllocNodeCompare,
      GDIEngUserMemAllocNodeAlloc,
      (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    *(_DWORD *)(a1 + 292) |= 1u;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v18 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = 20,
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          ViewSize[1] = a1 + 248,
          LOBYTE(v19) = a2,
          (int)((__int64 (__fastcall *)(__int64, void *, __int64))qword_1C01A17D8)(
                 a1 + 248,
                 &gDxgkWin32kEngInterface,
                 v19) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      if ( ObOpenObjectByPointer(gpHmgrSharedHandleSection, 0x200u, 0LL, 0xF001Fu, 0LL, 0, &SectionHandle) < 0 )
      {
        v20 = -1073741502;
      }
      else
      {
        v20 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0LL,
                0LL,
                ViewSize,
                ViewUnmap,
                0,
                2u);
        if ( v20 >= 0 && (v21 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u), (*(_QWORD *)(a1 + 240) = v21) != 0LL) )
          *(_QWORD *)(v18 + 248) = BaseAddress;
        else
          v20 = -1073741502;
        ZwClose(SectionHandle);
      }
      if ( v20 < 0 )
        ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C01A17D8)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
      return (unsigned int)v20;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0
      && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock()
      && (int)IsUmfdUninitializeProcessSupported() >= 0 )
    {
      UmfdUninitializeProcess();
    }
    v5 = NtGdiCloseProcess((unsigned int)v4, 1LL);
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    COPM::DestroyProtectedOutputsOwnedByProcess(v7, ProcessId);
    if ( (int)IsMonitorAPIProcessTerminatingSupported() >= 0 )
    {
      v8 = PsGetProcessId(*(PEPROCESS *)a1);
      MonitorAPIProcessTerminating(v8);
    }
    ((void (__fastcall *)(__int64, void *, _QWORD))qword_1C01A17D8)(a1 + 248, &gDxgkWin32kEngInterface, 0LL);
    for ( i = 1; ; i = 0 )
    {
      v10 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v10 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v10);
    }
    v11 = *(_QWORD **)(a1 + 192);
    if ( v11 )
    {
      while ( v11 != (_QWORD *)(a1 + 192) )
      {
        v12 = (__int64)v11;
        v11 = (_QWORD *)*v11;
        Win32FreePool(v12);
      }
    }
    v13 = *(_QWORD **)(a1 + 208);
    if ( v13 )
    {
      while ( v13 != (_QWORD *)(a1 + 208) )
      {
        v14 = (__int64)v13;
        v13 = (_QWORD *)*v13;
        Win32FreePool(v14);
      }
    }
    v15 = *(void **)(a1 + 240);
    if ( v15 )
      MmUnsecureVirtualMemory(v15);
    return v5 == 0 ? 0xC0000121 : 0;
  }
}
