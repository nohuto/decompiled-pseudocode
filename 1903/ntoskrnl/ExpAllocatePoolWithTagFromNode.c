/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x140037850
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTagFromNode @ 0x14013CB90 (ExAllocatePoolWithTagFromNode.c)
 *     ExpSaBinaryArrayInsert @ 0x14016E1EC (ExpSaBinaryArrayInsert.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     MmGetNextNode @ 0x1400806F4 (MmGetNextNode.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(unsigned int a1, ULONG_PTR a2, unsigned int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  int v9; // r15d
  int v10; // edi
  unsigned int NextNode; // eax
  __int64 result; // rax
  __int64 v13; // r8
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  if ( a4 >= 0 )
  {
    v9 = 1;
  }
  else
  {
    v9 = (unsigned __int16)KeNumberNodes;
    v5 = a4 & 0x7FFFFFFF;
  }
  v10 = a5;
  NextNode = v5;
  v14 = 0;
  while ( 1 )
  {
    result = ExAllocateHeapPool(a1, a2, a3, NextNode, v10);
    if ( result )
      break;
    if ( --v9 )
    {
      NextNode = MmGetNextNode(v5, &v14);
      if ( NextNode != -1 )
        continue;
    }
    ++ExPoolFailures;
    if ( (a1 & 2) != 0 )
    {
      v13 = (~a1 >> 1) & 0x100;
      KeBugCheckEx(
        0x41u,
        a2,
        (unsigned int)*(_QWORD *)((char *)&NonPagedPoolDescriptor + v13 + 72)
      - (unsigned int)*(_QWORD *)((char *)&NonPagedPoolDescriptor + v13 + 136),
        (unsigned int)*(_QWORD *)((char *)&NonPagedPoolDescriptor + v13 + 80)
      - (unsigned int)*(_QWORD *)((char *)&NonPagedPoolDescriptor + v13 + 144),
        0LL);
    }
    if ( (a1 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  return result;
}
