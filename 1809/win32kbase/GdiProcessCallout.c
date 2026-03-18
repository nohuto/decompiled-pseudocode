/*
 * XREFs of GdiProcessCallout @ 0x1C0108800
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C002D3F0 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C00727CC (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?DxDdProcessCallout@@YAJPEAPEAXE@Z @ 0x1C007EEF0 (-DxDdProcessCallout@@YAJPEAPEAXE@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00AA88C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     GrepSecureVirtualMemory @ 0x1C00ABE90 (GrepSecureVirtualMemory.c)
 *     GrepUnsecureVirtualMemory @ 0x1C00ABEC0 (GrepUnsecureVirtualMemory.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall GdiProcessCallout(__int64 a1, char a2)
{
  __int64 ProcessPeb; // rax
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r8
  const struct reg_FeatureDescriptor *v8; // rcx
  NTSTATUS v9; // edi
  HANDLE v10; // rax
  unsigned __int64 v12; // rdi
  int v13; // r15d
  HANDLE ProcessId; // rax
  COPM *v15; // rcx
  __int64 v16; // r8
  HANDLE v17; // rax
  BOOLEAN i; // dl
  PVOID v19; // rax
  const struct reg_FeatureDescriptor *v20; // rcx
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  BOOL v25; // eax
  void *v26; // rcx
  ULONG_PTR ViewSize[5]; // [rsp+50h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+18h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 )
  {
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(a1 + 88),
      (PRTL_AVL_COMPARE_ROUTINE)GDIEngUserMemAllocNodeCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)GDIEngUserMemAllocNodeAlloc,
      (PRTL_AVL_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
      0LL);
    *(_QWORD *)(a1 + 200) = a1 + 192;
    *(_QWORD *)(a1 + 192) = a1 + 192;
    *(_QWORD *)(a1 + 216) = a1 + 208;
    *(_QWORD *)(a1 + 208) = a1 + 208;
    *(_DWORD *)(a1 + 296) |= 1u;
    ProcessPeb = PsGetProcessPeb(*(_QWORD *)a1);
    v5 = ProcessPeb;
    if ( ProcessPeb
      && (*(_DWORD *)(ProcessPeb + 264) = 20,
          memset((void *)(ProcessPeb + 320), 0, 0xF0uLL),
          ViewSize[1] = a1 + 248,
          (int)DxDdProcessCallout((void **)(a1 + 248), a2, v6) >= 0) )
    {
      BaseAddress = 0LL;
      ViewSize[0] = 0LL;
      SectionHandle = 0LL;
      if ( ObOpenObjectByPointer(gpHmgrSharedHandleSection, 0x200u, 0LL, 0xF001Fu, 0LL, 0, &SectionHandle) < 0 )
      {
        v9 = -1073741502;
      }
      else
      {
        v9 = ZwMapViewOfSection(
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
        if ( v9 >= 0
          && (!EvaluateCurrentState(v8)
            ? (v10 = MmSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u))
            : (v10 = GrepSecureVirtualMemory(BaseAddress, 0x1000uLL, 2u)),
              (*(_QWORD *)(a1 + 240) = v10) != 0LL) )
        {
          *(_QWORD *)(v5 + 248) = BaseAddress;
        }
        else
        {
          v9 = -1073741502;
        }
        ZwClose(SectionHandle);
      }
      if ( v9 < 0 )
        DxDdProcessCallout((void **)(a1 + 248), 0, v7);
      return (unsigned int)v9;
    }
    else
    {
      return 3221225794LL;
    }
  }
  else
  {
    v12 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    GdiUnmapGDIW32PIDLockedBitmaps(a1);
    if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0
      && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock()
      && (int)IsUmfdUninitializeProcessSupported() >= 0 )
    {
      UmfdUninitializeProcess();
    }
    v13 = NtGdiCloseProcess((unsigned int)v12, 1u);
    ProcessId = PsGetProcessId(*(PEPROCESS *)a1);
    COPM::DestroyProtectedOutputsOwnedByProcess(v15, ProcessId);
    if ( (int)IsMonitorAPIProcessTerminatingSupported() >= 0 )
    {
      v17 = PsGetProcessId(*(PEPROCESS *)a1);
      MonitorAPIProcessTerminating(v17);
    }
    DxDdProcessCallout((void **)(a1 + 248), 0, v16);
    for ( i = 1; ; i = 0 )
    {
      v19 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), i);
      if ( !v19 )
        break;
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 88), v19);
    }
    v21 = *(_QWORD **)(a1 + 192);
    if ( v21 )
    {
      while ( v21 != (_QWORD *)(a1 + 192) )
      {
        v22 = (__int64)v21;
        v21 = (_QWORD *)*v21;
        Win32FreePool(v22);
      }
    }
    v23 = *(_QWORD **)(a1 + 208);
    if ( v23 )
    {
      while ( v23 != (_QWORD *)(a1 + 208) )
      {
        v24 = (__int64)v23;
        v23 = (_QWORD *)*v23;
        Win32FreePool(v24);
      }
    }
    if ( *(_QWORD *)(a1 + 240) )
    {
      v25 = EvaluateCurrentState(v20);
      v26 = *(void **)(a1 + 240);
      if ( v25 )
        GrepUnsecureVirtualMemory(v26);
      else
        MmUnsecureVirtualMemory(v26);
    }
    return v13 == 0 ? 0xC0000121 : 0;
  }
}
