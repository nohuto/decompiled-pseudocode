/*
 * XREFs of MiSlowRotateCopy @ 0x1402C70FC
 * Callers:
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 * Callees:
 *     KeCopyPage @ 0x1401C8630 (KeCopyPage.c)
 *     MiInitializeSlowPte @ 0x1402C6ED8 (MiInitializeSlowPte.c)
 *     MiGetPteMappingPair @ 0x1402E87CC (MiGetPteMappingPair.c)
 *     MiReturnPteMappingPair @ 0x1402E8870 (MiReturnPteMappingPair.c)
 */

char __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r12
  unsigned __int64 v4; // r14
  int v6; // edx
  bool v7; // cl
  char result; // al
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // r15
  _QWORD *v12; // rbx
  _QWORD *v13; // rdi
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-28h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v15 = 0LL;
  v6 = *(_DWORD *)(a3 + 48) & 0xC00;
  v7 = (*(_DWORD *)(a3 + 48) & 0x380) != 0;
  result = v6 == 3072;
  v9 = 0LL;
  if ( v7 && v6 == 3072 )
    v10 = 2;
  else
    v10 = v6 != 1024;
  if ( v4 )
  {
    v11 = a1 - (_QWORD)v3;
    do
    {
      MiGetPteMappingPair(1LL, v14, v9);
      v12 = v15;
      v13 = v15 + 1;
      MiInitializeSlowPte(v15, *v3, v10);
      MiInitializeSlowPte(v13, *(unsigned __int64 *)((char *)v3 + v11 + 48), v10);
      KeCopyPage((__int64)((_QWORD)v13 << 25) >> 16, (__int64)((_QWORD)v12 << 25) >> 16);
      result = MiReturnPteMappingPair(v14);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
