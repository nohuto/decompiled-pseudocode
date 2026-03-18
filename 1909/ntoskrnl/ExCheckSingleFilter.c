/*
 * XREFs of ExCheckSingleFilter @ 0x140338C4C
 * Callers:
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     EtwTraceObjectOperation @ 0x14032D698 (EtwTraceObjectOperation.c)
 *     EtwTracePool @ 0x14032D9B4 (EtwTracePool.c)
 *     EtwTraceDuplicateHandle @ 0x1408F3554 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1408F406C (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1408F50C4 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408FB3A0 (EtwpObjectHandleEnumCallback.c)
 *     ViFaultsIsTagPresentInList @ 0x14097A71C (ViFaultsIsTagPresentInList.c)
 *     ViFaultsIsTagTarget @ 0x14097A764 (ViFaultsIsTagTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExCheckSingleFilter(int a1, int a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  char v4; // dl
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+10h] [rbp+10h]

  v6 = a1;
  v2 = 0;
  v3 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    v4 = *((_BYTE *)&v7 + v3);
    if ( v4 == 42 )
      return 1LL;
    if ( v4 != 63 && *((_BYTE *)&v6 + v3) != v4 )
      break;
    ++v2;
    ++v3;
    if ( v2 >= 4 )
      return 1LL;
  }
  return 0LL;
}
