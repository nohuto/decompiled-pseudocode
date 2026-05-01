/*
 * XREFs of ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006A65C
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180069D0C (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006A714 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180069E44 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllProcessorsFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // al
  _QWORD *v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // r14
  int v10; // eax
  char *v11; // r10
  char *i; // r9
  char **v13; // r9

  v4 = 0;
  v5 = (_QWORD *)((char *)a2 + 104);
  v6 = 0;
  v7 = a1 - a2;
  do
  {
    if ( !*((_DWORD *)a2 + 66) )
      break;
    if ( *v5 )
    {
      v10 = RtlNumberOfSetBitsUlongPtr(*v5, a2, a3, a4);
      *(_QWORD *)((char *)v5 + v7 + 144) |= *v5;
      *v5 = 0LL;
      *((_DWORD *)a1 + 190) += v10;
      *((_DWORD *)a2 + 66) -= v10;
      v4 = 1;
    }
    ++v6;
    ++v5;
  }
  while ( v6 < 0x14 );
  if ( v4 )
  {
    *((_DWORD *)a1 + 193) |= 1u;
    v11 = (char *)a2 + 80;
    for ( i = (char *)*((_QWORD *)a2 + 10); i != v11; i = *v13 )
      RmpCpuSetManagerMarkProcessDirty(a1, *((struct _RM_CPU_SET_PROCESS **)i - 6));
  }
}
