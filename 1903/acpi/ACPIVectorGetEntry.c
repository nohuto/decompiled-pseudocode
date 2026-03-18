/*
 * XREFs of ACPIVectorGetEntry @ 0x1C0060BAC
 * Callers:
 *     ACPIVectorInstall @ 0x1C0060CE4 (ACPIVectorInstall.c)
 * Callees:
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

char __fastcall ACPIVectorGetEntry(_DWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // esi
  PVOID PoolWithTag; // rax
  void *v7; // rdi
  unsigned int v8; // r8d
  __int64 v9; // rcx
  char v10; // dl
  char result; // al

  LOBYTE(v1) = GpeVectorFree;
  if ( GpeVectorFree )
  {
LABEL_10:
    result = 1;
    *a1 = (unsigned __int8)v1;
    GpeVectorFree = *((_BYTE *)GpeVectorTable + 16 * (unsigned __int8)v1);
    return result;
  }
  v1 = GpeVectorTableSize;
  v3 = (unsigned int)(GpeVectorTableSize + 4);
  if ( (unsigned int)v3 >= GpeVectorTableSize )
  {
    v4 = 16 * v3;
    if ( v4 <= 0xFFFFFFFF )
    {
      v5 = v4;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v4, 0x67706341u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v5);
        if ( GpeVectorTable )
        {
          memmove(v7, GpeVectorTable, 16LL * v1);
          ExFreePoolWithTag(GpeVectorTable, 0);
        }
        GpeVectorTableSize += 4;
        v8 = 0;
        GpeVectorTable = v7;
        do
        {
          v9 = 2LL * (v8 + v1);
          v10 = v1 + ++v8;
          *((_BYTE *)GpeVectorTable + 8 * v9) = v10;
        }
        while ( v8 < 4 );
        *((_BYTE *)GpeVectorTable + 16 * v8 + 16 * v1 - 16) = 0;
        GpeVectorFree = v1;
        goto LABEL_10;
      }
    }
  }
  return 0;
}
