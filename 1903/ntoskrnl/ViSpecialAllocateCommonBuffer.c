/*
 * XREFs of ViSpecialAllocateCommonBuffer @ 0x14096CFFC
 * Callers:
 *     VfAllocateCommonBuffer @ 0x1409685D0 (VfAllocateCommonBuffer.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x14010A710 (ExInterlockedInsertHeadList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ViInitializePadding @ 0x14096C900 (ViInitializePadding.c)
 */

char *__fastcall ViSpecialAllocateCommonBuffer(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, struct _LIST_ENTRY **, __int64),
        __int64 a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        _QWORD *a5,
        char a6)
{
  unsigned int v7; // r10d
  __int64 v10; // rdi
  _LIST_ENTRY *PoolWithTag; // rsi
  __int64 v12; // r9
  int v14; // ebx
  int v15; // ebx
  unsigned int v16; // r14d
  char *v17; // rax
  char *v18; // rbx
  struct _LIST_ENTRY *v19; // [rsp+68h] [rbp+10h] BYREF

  v7 = *(_DWORD *)(a2 + 172) - *(_DWORD *)(a2 + 176);
  v19 = 0LL;
  v10 = a4;
  if ( v7 >= 0x20 || a4 > 0xFFFFDFFF )
    return 0LL;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x566C6148u);
  if ( !PoolWithTag )
  {
    VfUtilDbgPrint("Couldn't track common buffer allocation\n");
    return 0LL;
  }
  if ( (unsigned __int64)(v10 + 8) <= 0x1000 )
  {
    v14 = 4096;
LABEL_10:
    v15 = v14 - v10;
    goto LABEL_12;
  }
  if ( (v10 & 0xFFF) != 0 )
  {
    v14 = ((v10 + 8) & 0xFFFFF000) + ((((_WORD)v10 + 8) & 0xFFF) != 0LL ? 0x1000 : 0);
    goto LABEL_10;
  }
  v15 = 4096;
LABEL_12:
  LOBYTE(v12) = a6;
  v16 = v15 + v10 + 4096;
  v17 = (char *)a1(*(_QWORD *)(a2 + 16), v16, &v19, v12);
  if ( !v17 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  WORD1(PoolWithTag->Flink) = v15;
  v18 = v17 + 4096;
  LOWORD(PoolWithTag->Flink) = 4096;
  PoolWithTag[1].Blink = (struct _LIST_ENTRY *)(v17 + 4096);
  LODWORD(PoolWithTag->Blink) = v10;
  HIDWORD(PoolWithTag->Flink) = v16;
  PoolWithTag[1].Flink = (struct _LIST_ENTRY *)v17;
  PoolWithTag[2].Flink = v19;
  PoolWithTag[2].Blink = a3;
  ViInitializePadding(v17, v16, (unsigned __int64)(v17 + 4096), v10);
  *a5 = v19 + 256;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(a2 + 80), PoolWithTag + 3, (PKSPIN_LOCK)(a2 + 96));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 172));
  return v18;
}
