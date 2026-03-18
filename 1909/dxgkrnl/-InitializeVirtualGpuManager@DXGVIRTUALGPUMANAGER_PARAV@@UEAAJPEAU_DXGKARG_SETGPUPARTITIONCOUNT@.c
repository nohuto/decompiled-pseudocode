/*
 * XREFs of ?InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_SETGPUPARTITIONCOUNT@@@Z @ 0x1C02159F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::InitializeVirtualGpuManager(
        void **this,
        struct _DXGKARG_SETGPUPARTITIONCOUNT *a2,
        __int64 a3)
{
  __int64 v5; // rax
  SIZE_T v7; // rax
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  if ( a2->PartitionCount > 0x20 )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 627LL;
LABEL_3:
    WdLogEvent5_WdWarning(v5);
    return 3221225485LL;
  }
  if ( *((_DWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = 632LL;
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
      v13 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = 641LL;
      WdLogEvent5_WdLowResource(v13);
      return 3221225495LL;
    }
    *((struct _DXGKARG_SETGPUPARTITIONCOUNT *)this + 3) = (struct _DXGKARG_SETGPUPARTITIONCOUNT)a2->PartitionCount;
  }
  return 0LL;
}
