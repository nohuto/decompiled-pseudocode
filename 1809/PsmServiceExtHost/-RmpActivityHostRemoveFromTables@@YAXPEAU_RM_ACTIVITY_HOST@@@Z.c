/*
 * XREFs of ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DBF8
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DABC (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18002DE40 (-RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DF20 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostRemoveFromTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // r8
  struct _RM_ACTIVITY_HOST *i; // rdx
  _QWORD *v5; // r10
  unsigned __int64 v6; // r11
  _QWORD *j; // rdx
  void *v8; // rdx

  v1 = *((_QWORD *)a1 + 6);
  RtlAcquireSRWLockExclusive(v1 + 32);
  v3 = *((_QWORD *)a1 + 1) & (-1LL << (*(_DWORD *)(v1 + 20) & 0x1F));
  for ( i = (struct _RM_ACTIVITY_HOST *)(*(_QWORD *)(v1 + 24)
                                       + 8
                                       * ((HIBYTE(v3)
                                         + 37
                                         * (BYTE6(v3)
                                          + 37
                                          * (BYTE5(v3)
                                           + 37
                                           * (BYTE4(v3)
                                            + 37
                                            * (((*((_DWORD *)a1 + 2) & (unsigned int)(-1 << (*(_DWORD *)(v1 + 20) & 0x1F))) >> 24)
                                             + 37
                                             * ((unsigned __int8)((*((_DWORD *)a1 + 2) & (unsigned int)(-1 << (*(_DWORD *)(v1 + 20) & 0x1F))) >> 16)
                                              + 37
                                              * (37 * ((unsigned __int8)v3 + 11623883)
                                               + (unsigned __int8)((unsigned __int16)(*((_WORD *)a1 + 4) & (-1 << (*(_DWORD *)(v1 + 20) & 0x1F))) >> 8)))))))) & ((*(_DWORD *)(v1 + 20) >> 5) - 1)));
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
  v5 = (_QWORD *)((char *)a1 + 1336);
  v6 = *((_QWORD *)a1 + 168) & (-1LL << (*(_DWORD *)(v1 + 2436) & 0x1F));
  for ( j = (_QWORD *)(*(_QWORD *)(v1 + 2440)
                     + 8
                     * ((HIBYTE(v6)
                       + 37
                       * (BYTE6(v6)
                        + 37
                        * (BYTE5(v6)
                         + 37
                         * (BYTE4(v6)
                          + 37
                          * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (37 * ((unsigned __int8)v6 + 11623883) + BYTE1(v6)))))))) & (unsigned int)((*(_DWORD *)(v1 + 2436) >> 5) - 1)));
        (*j & 1) == 0;
        j = (_QWORD *)*j )
  {
    if ( (_QWORD *)*j == v5 )
    {
      *j = *v5;
      --*(_DWORD *)(v1 + 2432);
      *v5 |= 0x8000000000000002uLL;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(v1 + 32);
  HampHostRundown((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  v8 = (void *)*((_QWORD *)a1 + 143);
  if ( v8 )
    RmpSystemDereferenceHostWithPsm(a1, v8);
}
