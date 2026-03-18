/*
 * XREFs of MiHotAddBootDescriptor @ 0x140A3D454
 * Callers:
 *     MiHotAddBootDeferredDescriptors @ 0x140A22D28 (MiHotAddBootDeferredDescriptors.c)
 * Callees:
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiAddPhysicalMemoryChunks @ 0x140887CF4 (MiAddPhysicalMemoryChunks.c)
 */

__int64 __fastcall MiHotAddBootDescriptor(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // edi
  __int64 v3; // rsi
  __int64 v4; // rsi
  int v5; // ebx
  __int64 result; // rax
  ULONG_PTR v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  MiPageToNode(v1, 0);
  v7 = v1 << 12;
  v4 = v3 << 12;
  v8 = v4;
  v5 = 6400;
  if ( v2 != 24 )
    v5 = 6144;
  MiAddPhysicalMemoryChunks(&MiSystemPartition, &v7, &v8, v5);
  result = v8;
  v7 += v8;
  v8 = v4 - v8;
  if ( v8 )
    return MiAddPhysicalMemoryChunks(&MiSystemPartition, &v7, &v8, v5 & 0xFFFFEFFF);
  return result;
}
