/*
 * XREFs of KeMarkHiberPhase @ 0x14057BEC8
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14056C53C (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 */

void __fastcall KeMarkHiberPhase(_QWORD *Address)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  ULONG_PTR v3; // r9
  _QWORD **v4; // rsi
  __int64 v5; // rbp
  _QWORD *i; // rdi
  unsigned int v7; // ecx
  void *v8; // r8
  void *v9; // r8
  _QWORD *v10; // r8
  void *v11; // rdi
  ULONG_PTR v12; // rbx
  PVOID *j; // rbx

  v1 = Address[4];
  v2 = Address[1];
  if ( *(_DWORD *)(v1 + 36) )
  {
    v3 = ((((_DWORD)KeNumberProcessors_0 << 6) + 72191) & 0xFFFFF000) + 28672;
  }
  else
  {
    PoSetHiberRange(0LL, 0x10000u, Address, 0x8040uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v1, 0x7EC0uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, (PVOID)v2, 0x68uLL, 0x6370654Bu);
    PoSetHiberRange(0LL, 0x10000u, &KiBootProcessorIdtSize, 0LL, 0x6370654Bu);
    v3 = 24576LL;
    Address = (_QWORD *)(*(_QWORD *)(v2 + 36) - 0x2000LL);
  }
  PoSetHiberRange(0LL, 0x10000u, Address, v3, 0x6370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 360), *(unsigned __int16 *)(v1 + 358), 0x7370654Bu);
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 344), *(unsigned __int16 *)(v1 + 342), 0x7370654Bu);
  PoSetHiberRange(
    0LL,
    0x10000u,
    (PVOID)(((*(_QWORD *)(v1 + 11856) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - (unsigned int)KeKernelStackSize),
    (unsigned int)KeKernelStackSize,
    0x7473654Bu);
  v4 = (_QWORD **)(v1 + 11776);
  v5 = 2LL;
  do
  {
    for ( i = *v4; i; i = (_QWORD *)*i )
      PoSetHiberRange(0LL, 0x10000u, i - 1, 0x40uLL, 0x7064654Bu);
    v4 += 5;
    --v5;
  }
  while ( v5 );
  v7 = 1232;
  if ( (KeFeatureBits & 0x800000) != 0 )
    v7 = KeXStateLength + 807;
  PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(v1 + 25280), v7, 0x7873654Bu);
  v8 = *(void **)(v1 + 1728);
  if ( v8 )
    PoSetHiberRange(
      0LL,
      0x10000u,
      v8,
      MEMORY[0xFFFFF78000000600]
    - (unsigned __int64)MEMORY[0xFFFFF780000003E8]
    + (unsigned int)KiIptSaveAreaLength
    + 64LL,
      0x7373654Bu);
  v9 = *(void **)(v1 + 23808);
  if ( v9 )
    PoSetHiberRange(0LL, 0x10000u, v9, 0x428uLL, 0x7349654Bu);
  if ( qword_14041C4D8 )
    PoSetHiberRange(0LL, 0x10000u, qword_14041C4D8, 16 * (unsigned int)(unsigned __int8)qword_14041C4C8, 0x7272744Du);
  if ( qword_14041C4E0 )
    PoSetHiberRange(0LL, 0x10000u, qword_14041C4E0, 0x58uLL, 0x7272744Du);
  v10 = *(_QWORD **)(v1 + 8);
  v11 = (void *)((v10[6] + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  v12 = v10[7] - (_QWORD)v11;
  PoSetHiberRange(0LL, 0x10000u, v10, 0x810uLL, 0x6874654Bu);
  PoSetHiberRange(0LL, 0x10000u, v11, v12, 0x7473654Bu);
  for ( j = (PVOID *)KeBugCheckReasonCallbackListHead; j != &KeBugCheckReasonCallbackListHead; j = (PVOID *)*j )
    PoSetHiberRange(0LL, 0x10000u, j, 0x30uLL, 0x7473654Bu);
  PoSetHiberRange(0LL, 0x10000u, ExLeapSecondData, 0x1000uLL, 0x706C7845u);
}
