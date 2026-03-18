/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C01E6000
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::InitializeVirtualGpuManager(
        void **this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2,
        __int64 a3)
{
  __int64 v5; // rax
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( a2->PartitionCount > 0x20 )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 606LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( *((_DWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 611LL;
    goto LABEL_3;
  }
  if ( a2->PartitionCount > *((_DWORD *)this + 3) )
  {
    operator delete[](this[3]);
    v7 = 8LL * a2->PartitionCount;
    if ( !is_mul_ok(a2->PartitionCount, 8uLL) )
      v7 = -1LL;
    v8 = operator new(v7, 0x4B677844u, 1, PagedPool);
    this[3] = v8;
    if ( !v8 )
    {
      v10 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v10 + 24) = 620LL;
      WdLogEvent5_WdLowResource(v10);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  return 0LL;
}
