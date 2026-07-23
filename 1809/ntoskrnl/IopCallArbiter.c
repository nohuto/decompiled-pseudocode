/*
 * XREFs of IopCallArbiter @ 0x140730B20
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180BB8 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpReleaseResourcesInternal @ 0x14072EFB0 (PnpReleaseResourcesInternal.c)
 *     IopSetupArbiterAndTranslators @ 0x140730648 (IopSetupArbiterAndTranslators.c)
 *     IopQueryConflictListInternal @ 0x1408432B4 (IopQueryConflictListInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopCallArbiter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  __int128 v6; // xmm0
  __int64 result; // rax
  __int128 **v8; // r8
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 *v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+48h] [rbp-8h]

  v3 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(v11) = 0;
      a2 = 0LL;
      v12 = 0LL;
LABEL_12:
      v10 = (__int128 *)a3;
LABEL_13:
      v8 = &v10;
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 **))(v3 + 32))(*(_QWORD *)(v3 + 8), a2, v8);
    case 1:
      v10 = (__int128 *)a3;
      LODWORD(v11) = 0;
      v12 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int128 **))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL, &v10);
LABEL_19:
      a2 = v5;
      goto LABEL_12;
    case 2:
LABEL_9:
      v8 = 0LL;
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 **))(v3 + 32))(*(_QWORD *)(v3 + 8), a2, v8);
  }
  if ( (_DWORD)a2 != 4 )
  {
    if ( (_DWORD)a2 != 5 )
    {
      if ( (_DWORD)a2 == 6 )
      {
        a2 = 6LL;
        v10 = *(__int128 **)a3;
        v11 = *(_QWORD *)(a3 + 8);
        v12 = *(_QWORD *)(a3 + 16);
        v13 = *(_QWORD *)(a3 + 24);
        goto LABEL_13;
      }
      if ( (_DWORD)a2 == 7 )
      {
        v6 = *(_OWORD *)(a3 + 40);
        *(_QWORD *)(a3 + 48) = &v9;
        v9 = v6;
        *(_QWORD *)(a3 + 40) = &v9;
        v10 = &v9;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 **))(v3 + 32))(*(_QWORD *)(v3 + 8), 7LL, &v10);
        *(_OWORD *)(a3 + 40) = v9;
        return result;
      }
      if ( (_DWORD)a2 != 9 )
        return 3221225485LL;
      goto LABEL_19;
    }
    goto LABEL_9;
  }
  return 3221225474LL;
}
