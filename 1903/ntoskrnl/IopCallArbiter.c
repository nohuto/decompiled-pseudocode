/*
 * XREFs of IopCallArbiter @ 0x1407536FC
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1401893F8 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpReleaseResourcesInternal @ 0x140751B90 (PnpReleaseResourcesInternal.c)
 *     IopSetupArbiterAndTranslators @ 0x140753240 (IopSetupArbiterAndTranslators.c)
 *     IopQueryConflictListInternal @ 0x14087DA98 (IopQueryConflictListInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall IopCallArbiter(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int128 v6; // xmm0
  __int64 result; // rax
  _QWORD *v8; // r8
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  memset(v11, 0, sizeof(v11));
  v10 = 0uLL;
  switch ( a2 )
  {
    case 0u:
      LODWORD(v11[1]) = 0;
      v9 = 0LL;
      v11[2] = 0LL;
LABEL_12:
      v11[0] = a3;
LABEL_13:
      v8 = v11;
      return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(v3 + 32))(*(_QWORD *)(v3 + 8), v9, v8);
    case 1u:
      v11[0] = a3;
      LODWORD(v11[1]) = 0;
      v11[2] = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL, v11);
LABEL_19:
      v9 = a2;
      goto LABEL_12;
    case 2u:
LABEL_9:
      v8 = 0LL;
      v9 = a2;
      return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(v3 + 32))(*(_QWORD *)(v3 + 8), v9, v8);
  }
  if ( a2 != 4 )
  {
    if ( a2 != 5 )
    {
      if ( a2 == 6 )
      {
        v9 = 6LL;
        v11[0] = *(_QWORD *)a3;
        v11[1] = *(_QWORD *)(a3 + 8);
        v11[2] = *(_QWORD *)(a3 + 16);
        v11[3] = *(_QWORD *)(a3 + 24);
        goto LABEL_13;
      }
      if ( a2 == 7 )
      {
        v6 = *(_OWORD *)(a3 + 40);
        *(_QWORD *)(a3 + 48) = &v10;
        v10 = v6;
        *(_QWORD *)(a3 + 40) = &v10;
        v11[0] = &v10;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(v3 + 32))(*(_QWORD *)(v3 + 8), 7LL, v11);
        *(_OWORD *)(a3 + 40) = v10;
        return result;
      }
      if ( a2 != 9 )
        return 3221225485LL;
      goto LABEL_19;
    }
    goto LABEL_9;
  }
  return 3221225474LL;
}
