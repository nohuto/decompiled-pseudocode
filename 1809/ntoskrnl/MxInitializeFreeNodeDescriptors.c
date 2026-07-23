/*
 * XREFs of MxInitializeFreeNodeDescriptors @ 0x1409BC3A8
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x1409BC2C8 (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x1409BCD60 (MxPageAlwaysHot.c)
 *     MiInitializeBootMemoryDescriptor @ 0x1409BCD80 (MiInitializeBootMemoryDescriptor.c)
 */

_UNKNOWN **__fastcall MxInitializeFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 i; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 *v9; // r12
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r15
  __int64 v12; // r11
  __int64 v13; // r11
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 24); v3; v3 -= v7 )
  {
    v7 = MiRestrictRangeToNode(i, v3);
    v8 = MiPageToNode(i, 0);
    v9 = &MxBootFreeDescriptor[5 * v8];
    v10 = v9[1];
    if ( v7 >= v10 || (result = (_UNKNOWN **)(*(_QWORD *)(a2 + 8LL * v8) + 0x4000LL), v7 >= (unsigned __int64)result) )
    {
      if ( (unsigned int)MxPageAlwaysHot(v7 + i - 1) == 1
        || !v10
        || (v11 = *v9 + v10, !(unsigned int)MxPageAlwaysHot(v11 - 1))
        || (result = (_UNKNOWN **)(*(_QWORD *)(a2 + 8 * v12) + 0x4000LL), v11 < (unsigned __int64)result) )
      {
        result = (_UNKNOWN **)MiInitializeBootMemoryDescriptor(v9, a1, i, v7);
        MxFreeDescriptor[v13] = (__int64)v9;
      }
    }
    i += v7;
  }
  return result;
}
