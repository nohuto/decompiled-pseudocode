/*
 * XREFs of ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C001011C
 * Callers:
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIEvaluateDsmEmcaMethodOnRootBus(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rcx
  int v5; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v11; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v12[48]; // [rsp+50h] [rbp+7h] BYREF

  v2 = RootDeviceExtension;
  v10[0] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  memset(v12, 0, sizeof(v12));
  v4 = *(_QWORD *)(v2 + 712);
  v11 = EMCA_DSM_UUID;
  v5 = ACPIAmliEvaluateDsm(v4, (unsigned int)&v11, 0, 0, (__int64)v12, (__int64)v10);
  if ( v5 >= 0 )
  {
    v7 = v10[0];
    if ( *(_WORD *)(v10[0] + 2LL) == 3 )
      *(_BYTE *)a2 = **(_BYTE **)(v10[0] + 32LL);
    dword_1C0080868 = 0;
    pszDest = 0;
    FreeDataBuffs(v7, 1u);
    if ( *(_BYTE *)a2 == 3 )
    {
      v10[0] = 0LL;
      memset(v12, 0, sizeof(v12));
      v8 = *(_QWORD *)(v2 + 712);
      v11 = EMCA_DSM_UUID;
      v5 = ACPIAmliEvaluateDsm(v8, (unsigned int)&v11, 0, 1, (__int64)v12, (__int64)v10);
      if ( v5 >= 0 )
      {
        v9 = v10[0];
        if ( *(_WORD *)(v10[0] + 2LL) == 1 )
          a2[1] = *(_QWORD *)(v10[0] + 16LL);
        dword_1C0080868 = 0;
        pszDest = 0;
        FreeDataBuffs(v9, 1u);
      }
    }
  }
  return (unsigned int)v5;
}
