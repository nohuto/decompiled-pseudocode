/*
 * XREFs of RtlpHpFreeHeap @ 0x140007BC0
 * Callers:
 *     RtlpHpMetadataFree @ 0x1400080A4 (RtlpHpMetadataFree.c)
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1400E7498 (ExAllocateContiguousHeapPool.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     ExpHpCompactionRoutine @ 0x1401B78D0 (ExpHpCompactionRoutine.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EE54 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     RtlpHpSegFree @ 0x140007CDC (RtlpHpSegFree.c)
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14000DE34 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSizeHeap @ 0x1400BEA50 (RtlpHpSizeHeap.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1402FCC10 (RtlpHpExtrasGet.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int128 *a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // esi
  int v10; // eax
  __int64 HeapManager; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  char v16; // al
  int v17; // eax
  int v18; // eax
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v6 = 0;
  v7 = a3 | *((_DWORD *)a1 + 5) & 0x11000001;
  v8 = *((_DWORD *)a1 + 55);
  if ( v8 )
    LOBYTE(v6) = v8 == KeGetCurrentThread()[1].CurrentRunTime;
  v9 = v7 | 1;
  if ( !v6 )
    v9 = v7;
  if ( (v9 & 0x1000000) != 0
    || !*((_DWORD *)a1 + 6)
    || (v14 = RtlpHpExtrasGet(a1, a2, v9, 0LL),
        (v15 = v14, (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL)
     || (v16 = *(_BYTE *)(v14 + 2), (v16 & 0xF) == 0))
    || ((v17 = v16 & 0xF) == 0 || (_WORD)v17 != 1
      ? (v18 = -1073741823)
      : (v18 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64))RtlpInterceptorRoutines)(
                 a1,
                 a2,
                 3LL,
                 v15 + 16)),
        v18 >= 0) )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v9) == -1 )
    {
      RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
      return v4;
    }
    if ( (_WORD)a2 )
    {
      v10 = 0;
    }
    else
    {
      v19 = *a1;
      HeapManager = RtlpHpEnvGetHeapManager(&v19);
      v13 = RtlCSparseBitmapBitmaskRead(
              HeapManager + 8,
              2 * ((unsigned __int64)(a2 - *(_QWORD *)(HeapManager + 72)) >> 20));
      if ( !v13 )
        goto LABEL_26;
      v10 = v13 - 1;
    }
    if ( v10 != 2 )
      return (unsigned int)RtlpHpSegFree(&a1[12 * v10 + 16], a2, v9);
LABEL_26:
    LOBYTE(v4) = RtlpHpLargeFree(a1, a2, v9) != 0;
  }
  return v4;
}
