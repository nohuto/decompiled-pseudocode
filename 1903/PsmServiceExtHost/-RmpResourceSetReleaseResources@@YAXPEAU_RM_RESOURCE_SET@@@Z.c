/*
 * XREFs of ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18001B7A0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18001B410 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpResourceSetReleaseResources(_QWORD *P)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  _QWORD *i; // rdx
  _QWORD *v10; // rdx

  v1 = P + 10;
  v3 = P[10];
  if ( v3 )
  {
    v10 = (_QWORD *)v1[1];
    if ( v10 )
    {
      if ( *(_QWORD **)(v3 + 8) != v1 || (_QWORD *)*v10 != v1 )
        __fastfail(3u);
      *v10 = v3;
      *(_QWORD *)(v3 + 8) = v10;
      *v1 = 0LL;
      v1[1] = 0LL;
    }
  }
  v4 = (__int64 *)P[6];
  RmpObjectRelease(P);
  v5 = *v4;
  v4[164] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v5 + 16))(v4);
  v6 = P[8];
  P[6] = 0LL;
  v7 = *(_QWORD *)(v6 + 24) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v6 + 24) + 552LL);
  v8 = P[1] & (-1LL << (*(_DWORD *)(v7 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v7 + 8)
                     + 8
                     * ((HIBYTE(v8)
                       + 37
                       * (BYTE6(v8)
                        + 37
                        * (BYTE5(v8)
                         + 37
                         * (BYTE4(v8)
                          + 37
                          * ((((_DWORD)P[1] & (unsigned int)(-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 24)
                           + 37
                           * ((unsigned __int8)(((_DWORD)P[1] & (unsigned int)(-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 16)
                            + 37
                            * ((unsigned __int8)((unsigned __int16)(P[1] & (-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 8)
                             + 37 * ((unsigned __int8)v8 + 11623883)))))))) & ((*(_DWORD *)(v7 + 4) >> 5) - 1)));
        (*i & 1) == 0;
        i = (_QWORD *)*i )
  {
    if ( (_QWORD *)*i == P )
    {
      *i = *P;
      --*(_DWORD *)v7;
      *P |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)P + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v7 + 16);
  RmpObjectRelease(P);
}
