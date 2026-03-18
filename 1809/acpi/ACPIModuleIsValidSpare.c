/*
 * XREFs of ACPIModuleIsValidSpare @ 0x1C00AC830
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AC57C (ACPIEvaluateSpareDsm.c)
 */

char __fastcall ACPIModuleIsValidSpare(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  _QWORD v11[5]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-30h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = 0;
  v6 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1297302623);
  if ( v6 )
  {
    memset(v12, 0, sizeof(v12));
    *(_QWORD *)&v12[16] = a2;
    *(_WORD *)&v12[2] = 1;
    v9 = ACPIEvaluateSpareDsm((unsigned __int64 *)v6, 1u, (__int128 *)v12, v11);
    AMLIDereferenceHandleEx((__int64)v6);
    if ( v9 >= 0 && (WORD1(v11[0]) == 1 && !v11[2] || WORD1(v11[0]) == 2 && *(_BYTE *)v11[4] == 48) )
      v4 = 1;
  }
  AMLIFreeDataBuffs((__int64)v11, v5, v7, v8);
  return v4;
}
