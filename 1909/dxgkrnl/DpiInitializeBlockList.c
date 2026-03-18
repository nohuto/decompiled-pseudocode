/*
 * XREFs of DpiInitializeBlockList @ 0x1C01650F0
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C0167414 (DpiFdoInitializeFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkInitializeBlockList @ 0x1C016B748 (DxgkInitializeBlockList.c)
 *     DpiDestroyBlockList @ 0x1C029DEE4 (DpiDestroyBlockList.c)
 */

__int64 __fastcall DpiInitializeBlockList(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  int v4; // edi
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v3 + 28) < 0xB001u )
    return 0LL;
  memset(v6, 0, 0x30uLL);
  v7 = 0;
  LODWORD(v6[0]) = 29;
  v7 = *(_DWORD *)(v1 + 2724);
  v6[1] = &v7;
  LODWORD(v6[2]) = 4;
  LODWORD(v6[4]) = 4;
  v6[3] = v1 + 5716;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(v3 + 272))(*(_QWORD *)(v1 + 48), v6);
  if ( v4 < 0 )
    return 0LL;
  if ( (int)DxgkInitializeBlockList(a1, *(unsigned int *)(v1 + 5716), 0LL) < 0 )
    DpiDestroyBlockList(v1);
  return (unsigned int)v4;
}
