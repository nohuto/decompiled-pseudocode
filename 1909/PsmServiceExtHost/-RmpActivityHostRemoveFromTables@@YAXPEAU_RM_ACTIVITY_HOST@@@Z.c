/*
 * XREFs of ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B78C
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B650 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18000B994 (-RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BA74 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostRemoveFromTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  struct _RM_ACTIVITY_HOST *i; // rdx
  _QWORD *v4; // r10
  _QWORD *j; // rdx
  void *v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h]
  __int64 v8; // [rsp+40h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 6);
  RtlAcquireSRWLockExclusive(v1 + 32);
  v7 = *((_QWORD *)a1 + 1) & (-1LL << (*(_DWORD *)(v1 + 20) & 0x1F));
  for ( i = (struct _RM_ACTIVITY_HOST *)(*(_QWORD *)(v1 + 24)
                                       + 8LL
                                       * ((37
                                         * (BYTE6(v7)
                                          + 37
                                          * (BYTE5(v7)
                                           + 37
                                           * (BYTE4(v7)
                                            + 37
                                            * (BYTE3(v7)
                                             + 37
                                             * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                                         + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(v1 + 20) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct _RM_ACTIVITY_HOST **)i )
  {
    if ( *(struct _RM_ACTIVITY_HOST **)i == a1 )
    {
      *(_QWORD *)i = *(_QWORD *)a1;
      --*(_DWORD *)(v1 + 16);
      *(_QWORD *)a1 |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)a1 + 6) |= 0x80000000;
  v4 = (_QWORD *)((char *)a1 + 1392);
  v8 = *((_QWORD *)a1 + 175) & (-1LL << (*(_DWORD *)(v1 + 2436) & 0x1F));
  for ( j = (_QWORD *)(*(_QWORD *)(v1 + 2440)
                     + 8LL
                     * ((37
                       * (BYTE6(v8)
                        + 37
                        * (BYTE5(v8)
                         + 37
                         * (BYTE4(v8)
                          + 37
                          * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                       + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v1 + 2436) >> 5) - 1))); (*j & 1) == 0; j = (_QWORD *)*j )
  {
    if ( (_QWORD *)*j == v4 )
    {
      *j = *v4;
      --*(_DWORD *)(v1 + 2432);
      *v4 |= 0x8000000000000002uLL;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(v1 + 32);
  HampHostRundown((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  v6 = (void *)*((_QWORD *)a1 + 150);
  if ( v6 )
    RmpSystemDereferenceHostWithPsm(a1, v6);
}
