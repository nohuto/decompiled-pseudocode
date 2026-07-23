/*
 * XREFs of IoPropagateIrpExtensionEx @ 0x1400DF690
 * Callers:
 *     IoPropagateIrpExtension @ 0x1400DF670 (IoPropagateIrpExtension.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x1400DF5F0 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateIrpExtension @ 0x1400DFA38 (IopAllocateIrpExtension.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoPropagateIrpExtensionEx(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 IrpExtension; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, __int64, __int64); // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = *(_QWORD *)(a1 + 200);
  if ( !v4 )
    return 0LL;
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( (a4 & 1) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = v4;
    return 0LL;
  }
  if ( (a4 & 2) != 0 && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    IrpExtension = IopAllocateIrpExtension(a2, 0LL);
    if ( !IrpExtension )
      return 3221225626LL;
    *(_OWORD *)(IrpExtension + 24) = *(_OWORD *)(v4 + 24);
  }
  if ( (a4 & 1) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) < 0 || v9 && (*(_BYTE *)(v9 + 2) & 4) != 0 )
      *(_DWORD *)(IopAllocateIrpExtension(a2, 2LL) + 4) = *(_DWORD *)(v4 + 4);
  }
  if ( (a4 & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v10 && (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
    {
      v16 = IopAllocateIrpExtension(a2, 5LL);
      if ( v16 )
      {
        *(_QWORD *)(v16 + 48) = a3 + *(_QWORD *)(v4 + 48);
        v17 = *(_QWORD *)(v4 + 40);
        *(_QWORD *)(v16 + 40) = v17;
        v18 = *(_QWORD *)(v4 + 40);
        v19 = *(void (__fastcall **)(__int64, __int64, __int64))(v18 + 8);
        if ( v19 )
          v19(v18, v17, a3);
        goto LABEL_14;
      }
      return 3221225626LL;
    }
  }
LABEL_14:
  v11 = 1;
  if ( (a4 & 8) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v12 && (*(_BYTE *)(v12 + 2) & 0x40) != 0 )
      IopSetDiskIoAttributionExtension(a2, *(_QWORD *)(v4 + 16), (__int64)KeGetCurrentThread(), 1);
  }
  if ( (a4 & 0x10) == 0 )
    return 0LL;
  v13 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v13 || *(char *)(v13 + 2) >= 0 )
    return 0LL;
  v20 = *(_QWORD *)(v4 + 48);
  if ( (!v20 || (v11 = *(_DWORD *)(v20 + 16) << 9) != 0) && !(a3 % v11) )
  {
    v21 = IopAllocateIrpExtension(a2, 7LL);
    if ( v21 )
    {
      *(_OWORD *)(v21 + 40) = *(_OWORD *)(v4 + 40);
      *(_QWORD *)(v21 + 40) += a3 / v11;
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225485LL;
}
