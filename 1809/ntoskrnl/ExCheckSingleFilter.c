/*
 * XREFs of ExCheckSingleFilter @ 0x1401B7570
 * Callers:
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     EtwTraceObjectOperation @ 0x140310168 (EtwTraceObjectOperation.c)
 *     ExpUseSpecialPool @ 0x14031AD60 (ExpUseSpecialPool.c)
 *     EtwTraceDuplicateHandle @ 0x1408B8500 (EtwTraceDuplicateHandle.c)
 *     EtwTraceObject @ 0x1408B8FD8 (EtwTraceObject.c)
 *     EtwpTraceHandle @ 0x1408B9ED0 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BFEC0 (EtwpObjectHandleEnumCallback.c)
 *     ViFaultsIsTagPresentInList @ 0x140939DFC (ViFaultsIsTagPresentInList.c)
 *     ViFaultsIsTagTarget @ 0x140939E44 (ViFaultsIsTagTarget.c)
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
