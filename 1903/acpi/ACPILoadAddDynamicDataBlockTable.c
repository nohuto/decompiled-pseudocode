/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1C00BDF00
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1C00BDC94 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessDSDT @ 0x1C00BDFB4 (ACPILoadProcessDSDT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdx
  __int64 v8; // rdx

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x74706341u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = a1;
  if ( a2 )
  {
    v8 = AcpiDynamicDataBlockTableList;
    if ( *(__int64 **)(AcpiDynamicDataBlockTableList + 8) == &AcpiDynamicDataBlockTableList )
    {
      *PoolWithTag = AcpiDynamicDataBlockTableList;
      PoolWithTag[1] = &AcpiDynamicDataBlockTableList;
      *(_QWORD *)(v8 + 8) = PoolWithTag;
      AcpiDynamicDataBlockTableList = (__int64)PoolWithTag;
      return v4;
    }
LABEL_8:
    __fastfail(3u);
  }
  v6 = (_QWORD *)qword_1C0083030;
  if ( *(__int64 **)qword_1C0083030 != &AcpiDynamicDataBlockTableList )
    goto LABEL_8;
  *PoolWithTag = &AcpiDynamicDataBlockTableList;
  PoolWithTag[1] = v6;
  *v6 = PoolWithTag;
  qword_1C0083030 = (__int64)PoolWithTag;
  return v4;
}
