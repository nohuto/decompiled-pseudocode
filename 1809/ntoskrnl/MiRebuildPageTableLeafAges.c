/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x14007AE00
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x14007AC90 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14007B958 (MiTerminateWsleCluster.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x1400F82B0 (MiCountWslesInPageTable.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned __int64 *v5; // rbx
  unsigned __int64 result; // rax
  unsigned __int8 v7; // cl
  int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v16[8]; // [rsp+28h] [rbp-30h] BYREF

  v2 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 8 * ((v2 >> 3) & 0x1FF));
      v11 = v3 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v3;
      v3 = v11;
      if ( (v10 & 0x42) != 0 )
        v3 = v11 | 0x42;
    }
  }
  v15 = v3;
  if ( (unsigned __int64)&v15 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v15 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v15 >> 3) & 0x1FF));
      v14 = v3 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v3;
      v3 = v14;
      if ( (v13 & 0x42) != 0 )
        v3 = v14 | 0x42;
    }
  }
  v4 = (v3 >> 12) & 0xFFFFFFFFFLL;
  v5 = (unsigned __int64 *)(48 * v4 - 0x58000000000LL);
  result = (unsigned __int64)*(unsigned int *)v5 >> 4;
  if ( (result & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(v4, a2, v16, a2);
    v7 = 8;
    while ( 1 )
    {
      result = --v7;
      v8 = v16[v7];
      if ( v8 )
        break;
      if ( !v7 )
        return result;
    }
    result = *v5 & 0xFFFFFFFFFFFE000FuLL;
    *v5 = result | (16 * (v8 & 0x3FF | ((unsigned __int64)(v7 & 7) << 10)));
  }
  return result;
}
