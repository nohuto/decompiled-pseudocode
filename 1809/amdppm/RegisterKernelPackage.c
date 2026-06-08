/*
 * XREFs of RegisterKernelPackage @ 0x1C0020660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

__int64 __fastcall RegisterKernelPackage(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v7; // ebx
  __int64 *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  if ( *(_BYTE *)(a1 + 78) )
    v2 = HalPrivateDispatchTable[144](*(unsigned int *)(a1 + 80));
  else
    v2 = ((__int64 (__fastcall *)(_QWORD))qword_1C00116E0)(*(unsigned int *)(a1 + 56));
  v3 = v2;
  v4 = qword_1C0011418;
  if ( (__int64 *)qword_1C0011418 != &qword_1C0011418 )
  {
    do
    {
      v5 = v4;
      if ( *(_DWORD *)(v4 + 32) == v3 )
        break;
      v4 = *(_QWORD *)v4;
      v5 = 0LL;
    }
    while ( (__int64 *)v4 != &qword_1C0011418 );
    if ( v5 )
      goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72637250u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_DWORD *)(v5 + 32) = v3;
    *(_DWORD *)(v5 + 36) = ((__int64 (__fastcall *)(_QWORD))qword_1C00116E8)(v3);
    *(_DWORD *)(v5 + 36) += HalPrivateDispatchTable[145](v3);
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *(_QWORD *)(v5 + 16) = v5 + 16;
    v8 = (__int64 *)qword_1C0011420;
    if ( *(__int64 **)qword_1C0011420 != &qword_1C0011418 )
      goto LABEL_15;
    *(_QWORD *)v5 = &qword_1C0011418;
    *(_QWORD *)(v5 + 8) = v8;
    *v8 = v5;
    qword_1C0011420 = v5;
LABEL_12:
    *(_QWORD *)(a1 + 1048) = v5;
    ++*(_DWORD *)(v5 + 40);
    v9 = (_QWORD *)(a1 + 1056);
    v10 = *(_QWORD **)(v5 + 24);
    if ( *v10 == v5 + 16 )
    {
      v9[1] = v10;
      *v9 = v5 + 16;
      *v10 = v9;
      *(_QWORD *)(v5 + 24) = v9;
      v7 = *(_DWORD *)(v5 + 36) != *(_DWORD *)(v5 + 40) ? 0x103 : 0;
      goto LABEL_14;
    }
LABEL_15:
    __fastfail(3u);
  }
  v7 = -1073741670;
LABEL_14:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  return v7;
}
