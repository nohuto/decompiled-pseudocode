/*
 * XREFs of ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0229B78
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULATIONPROCESS@@@Z @ 0x1C00F8C4C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::InitializeForHardware(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        unsigned int a2,
        struct DXGADAPTER *a3)
{
  __int64 v3; // rbx
  __int64 i; // rdi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v13; // rax

  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  for ( i = 0LL; ; i += 352LL )
  {
    v8 = *((_QWORD *)a3 + 302);
    if ( (*(_DWORD *)(i + v8 + 16) & 1) != 0 )
    {
      v9 = ExShareAddressSpaceWithDevice(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + v8 + 8) + 64LL) + 152LL),
             *((_QWORD *)this + 1) + 4 * v3);
      v11 = v9;
      if ( v9 < 0 )
        break;
    }
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 0LL;
  }
  v13 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v13 + 24) = a3;
  *(_QWORD *)(v13 + 32) = v11;
  WdLogEvent5_WdError(v13);
  return (unsigned int)v11;
}
