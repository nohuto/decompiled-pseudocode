/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x140141460
 * Callers:
 *     RtlpHpHeapCreate @ 0x140140BE0 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x1401545C4 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14014154C (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14015931C (RtlpHpVaMgrCtxAllocatorDereference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1)
{
  __int128 v1; // xmm0
  unsigned int v2; // ebx
  char *HeapManager; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-40h]
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v1 = *a1;
  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v9 = v1;
  if ( BYTE3(v1) )
    LODWORD(v11) = BYTE3(v1) - 1;
  else
    LODWORD(v11) = -1;
  HIDWORD(v11) = BYTE1(v1);
  LODWORD(v12) = BYTE2(v1);
  if ( (v1 & 8) != 0 )
    HIDWORD(v12) |= 1u;
  v13 = *((_QWORD *)&v1 + 1);
  v10 = v1;
  HeapManager = (char *)RtlpHpEnvGetHeapManager(&v10);
  if ( v5 )
  {
    v6 = 0x200000LL;
    if ( BYTE1(v1) == 3 )
      v6 = 0x40000000LL;
    v7 = RtlpHpVaMgrCtxAllocatorReference(HeapManager + 80, &v11, v6);
    if ( v7 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v9) = v7 + 1;
      *a1 = v9;
    }
  }
  else
  {
    RtlpHpVaMgrCtxAllocatorDereference(HeapManager + 80, &v11);
  }
  return v2;
}
