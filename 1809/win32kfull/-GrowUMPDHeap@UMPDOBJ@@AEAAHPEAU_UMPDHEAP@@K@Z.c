/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C00E2C20
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, struct _UMPDHEAP *a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rcx
  NTSTATUS v6; // ebx
  HANDLE v7; // rax
  HANDLE v8; // rbx
  int v9; // eax
  void *v10; // rcx
  __int64 result; // rax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Size = (SIZE_T)this;
  v3 = *((_QWORD *)a2 + 2);
  v5 = v3 + a3;
  if ( v5 < v3 )
    return 0LL;
  if ( v5 + 4095 < v5 )
    return 0LL;
  Size = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( Size > 0x400000 )
    return 0LL;
  Address = *(PVOID *)a2;
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x1000u, 4u);
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails) )
  {
    if ( v6 >= 0 )
    {
      v7 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
LABEL_9:
      v8 = v7;
      goto LABEL_11;
    }
  }
  else if ( v6 >= 0 )
  {
    v7 = MmSecureVirtualMemory(Address, Size, 4u);
    goto LABEL_9;
  }
  v8 = 0LL;
LABEL_11:
  if ( !v8 )
    return 0LL;
  if ( *((_QWORD *)a2 + 1) )
  {
    v9 = EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2182559032_59890558_FeatureDescriptorDetails);
    v10 = (void *)*((_QWORD *)a2 + 1);
    if ( v9 )
      GrepUnsecureVirtualMemory(v10);
    else
      MmUnsecureVirtualMemory(v10);
  }
  *((_QWORD *)a2 + 2) = Size;
  result = 1LL;
  *((_QWORD *)a2 + 1) = v8;
  return result;
}
