/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x180064418
 * Callers:
 *     RtlpHpHeapCreate @ 0x180063D90 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x1800644F4 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x180065274 (RtlpHpVaMgrCtxAllocatorDereference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1, int a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  __int64 v5; // r8
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]

  v2 = *a1;
  v3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v8 = v2;
  if ( BYTE3(v2) )
    LODWORD(v9) = BYTE3(v2) - 1;
  else
    LODWORD(v9) = -1;
  HIDWORD(v9) = BYTE1(v2);
  LODWORD(v10) = BYTE2(v2);
  if ( (v2 & 8) != 0 )
    HIDWORD(v10) |= 1u;
  v11 = *((_QWORD *)&v2 + 1);
  if ( a2 )
  {
    v5 = 0x200000LL;
    if ( BYTE1(v2) == 3 )
      v5 = 0x40000000LL;
    v6 = RtlpHpVaMgrCtxAllocatorReference(&unk_180166950, &v9, v5);
    if ( v6 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v8) = v6 + 1;
      *a1 = v8;
    }
  }
  else
  {
    RtlpHpVaMgrCtxAllocatorDereference(&unk_180166950, &v9);
  }
  return v3;
}
