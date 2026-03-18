/*
 * XREFs of ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C010F2F0
 * Callers:
 *     ?RemoveHeap@UMPDOBJ@@QEAAXXZ @ 0x1C0101ED8 (-RemoveHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C010F234 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall DestroyUMPDHeap(struct _UMPDHEAP *a1)
{
  int v2; // eax
  void *v3; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 1) )
    {
      v2 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails);
      v3 = (void *)*((_QWORD *)a1 + 1);
      if ( v2 )
        GrepUnsecureVirtualMemory(v3);
      else
        MmUnsecureVirtualMemory(v3);
    }
    if ( *(_QWORD *)a1 )
    {
      BaseAddress = *(PVOID *)a1;
      RegionSize = 0x400000LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    Win32FreePool(a1);
  }
}
