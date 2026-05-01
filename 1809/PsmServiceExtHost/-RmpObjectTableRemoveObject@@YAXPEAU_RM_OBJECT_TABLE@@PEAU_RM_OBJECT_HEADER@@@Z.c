/*
 * XREFs of ?RmpObjectTableRemoveObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x1800605A4
 * Callers:
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18005D76C (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18005D8C4 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpObjectTableRemoveObject(struct _RM_OBJECT_TABLE *a1, struct _RM_OBJECT_HEADER *a2)
{
  unsigned __int64 v4; // r9
  struct _RM_OBJECT_HEADER *i; // rdx

  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  v4 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 1) & 0x1F));
  for ( i = (struct _RM_OBJECT_HEADER *)(*((_QWORD *)a1 + 1)
                                       + 8
                                       * ((HIBYTE(v4)
                                         + 37
                                         * (BYTE6(v4)
                                          + 37
                                          * (BYTE5(v4)
                                           + 37
                                           * (BYTE4(v4)
                                            + 37
                                            * (((*((_DWORD *)a2 + 2) & (unsigned int)(-1 << (*((_DWORD *)a1 + 1) & 0x1F))) >> 24)
                                             + 37
                                             * ((unsigned __int8)((*((_DWORD *)a2 + 2) & (unsigned int)(-1 << (*((_DWORD *)a1 + 1) & 0x1F))) >> 16)
                                              + 37
                                              * ((unsigned __int8)((unsigned __int16)(*((_WORD *)a2 + 4) & (-1 << (*((_DWORD *)a1 + 1) & 0x1F))) >> 8)
                                               + 37 * ((unsigned __int8)v4 + 11623883)))))))) & ((*((_DWORD *)a1 + 1) >> 5)
                                                                                               - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct _RM_OBJECT_HEADER **)i )
  {
    if ( *(struct _RM_OBJECT_HEADER **)i == a2 )
    {
      *(_QWORD *)i = *(_QWORD *)a2;
      --*(_DWORD *)a1;
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)a2 + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive((char *)a1 + 16);
}
