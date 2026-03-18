/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x14002DC60
 * Callers:
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     MmUnmapViewInSystemCache @ 0x140070300 (MmUnmapViewInSystemCache.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCountWslesInPageTable @ 0x1400EABB0 (MiCountWslesInPageTable.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // rbx
  __int64 v5; // r9
  unsigned __int64 result; // rax
  unsigned __int8 v7; // cl
  int v8; // edx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v13[8]; // [rsp+28h] [rbp-30h] BYREF

  if ( MiPteInShadowRange(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v10 = v2 | 0x20;
      v11 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v3 >> 3) & 0x1FF));
      if ( (v11 & 0x20) == 0 )
        v10 = v2;
      v2 = v10;
      if ( (v11 & 0x42) != 0 )
        v2 = v10 | 0x42;
    }
  }
  v12 = v2;
  v4 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v12) >> 12) & 0xFFFFFFFFFLL)
                          - 0x58000000000LL);
  result = (unsigned __int64)*(unsigned int *)v4 >> 4;
  if ( (result & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(0xFFFFFFFFFLL, v5, v13);
    v7 = 8;
    while ( 1 )
    {
      result = --v7;
      v8 = v13[v7];
      if ( v8 )
        break;
      if ( !v7 )
        return result;
    }
    result = *v4 & 0xFFFFFFFFFFFE000FuLL;
    *v4 = result | (16 * (v8 & 0x3FF | ((unsigned __int64)(v7 & 7) << 10)));
  }
  return result;
}
