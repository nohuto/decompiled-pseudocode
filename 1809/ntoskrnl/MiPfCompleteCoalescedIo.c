/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x1402AEF7C
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14001A020 (MiPfCompletePrefetchIos.c)
 * Callees:
 *     MiPfCompleteInPageSupport @ 0x14001A0B8 (MiPfCompleteInPageSupport.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(char *P, __int64 a2)
{
  unsigned int v2; // ebp
  __int16 v5; // ax
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r8
  __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax

  v2 = 0;
  KeWaitForSingleObject(P + 32, WrPageIn, 0, 0, 0LL);
  v5 = *((_WORD *)P + 141);
  if ( (v5 & 0x200) != 0 )
  {
    MiRetardMdl((__int64)(P + 272));
    *((_QWORD *)P + 11) = 0LL;
    v5 = *((_WORD *)P + 141);
    *((_DWORD *)P + 20) = -1073741670;
  }
  if ( (v5 & 1) != 0 )
    MmUnmapLockedPages(*((PVOID *)P + 37), (PMDL)(P + 272));
  if ( *((int *)P + 20) < 0 )
  {
    v2 = *((_DWORD *)P + 20);
  }
  else
  {
    v6 = *((unsigned int *)P + 78);
    v7 = *((_QWORD *)P + 11);
    if ( v7 != v6 )
      KeBugCheckEx(0x7Au, 5uLL, v7, v6, (ULONG_PTR)P);
  }
  v8 = (__int64 *)(P + 16);
  while ( 1 )
  {
    v9 = *v8;
    if ( (__int64 *)*v8 == v8 )
      break;
    if ( *(__int64 **)(v9 + 8) != v8 || (v10 = *(_QWORD *)v9, *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *(_DWORD *)(v9 + 80) = *((_DWORD *)P + 20);
    if ( *((int *)P + 20) < 0 )
      v11 = 0LL;
    else
      v11 = *(unsigned int *)(v9 + 184);
    *(_QWORD *)(v9 + 88) = v11;
    KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
    v12 = MiPfCompleteInPageSupport(v9, a2);
    if ( v12 < 0 && v12 != -1073740748 )
      v2 = v12;
  }
  ExFreePoolWithTag(P, 0);
  return v2;
}
