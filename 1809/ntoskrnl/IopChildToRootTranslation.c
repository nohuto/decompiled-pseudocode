/*
 * XREFs of IopChildToRootTranslation @ 0x14072FE30
 * Callers:
 *     PnpBuildCmResourceList @ 0x14072F9B0 (PnpBuildCmResourceList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopFindLegacyBusDeviceNode @ 0x140730AC0 (IopFindLegacyBusDeviceNode.c)
 */

__int64 __fastcall IopChildToRootTranslation(
        _QWORD *LegacyBusDeviceNode,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebp
  bool v10; // r14
  _DWORD *PoolWithTag; // rdi
  _DWORD *v12; // rsi
  __int64 v13; // r13
  _QWORD *v14; // r11
  __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  bool v21; // [rsp+98h] [rbp+20h]

  v6 = 0;
  v10 = 0;
  v21 = a4 == 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v12 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !v12 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  *(_OWORD *)PoolWithTag = *(_OWORD *)a5;
  PoolWithTag[4] = *(_DWORD *)(a5 + 16);
  if ( LegacyBusDeviceNode )
  {
    v13 = LegacyBusDeviceNode[4];
  }
  else
  {
    LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
    v13 = 0LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !LegacyBusDeviceNode || v10 )
      {
        *a6 = PoolWithTag;
        goto LABEL_20;
      }
      if ( LegacyBusDeviceNode != (_QWORD *)IopRootDeviceNode || v21 )
        break;
      v21 = 1;
      LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
      if ( LegacyBusDeviceNode == v14 && !a2 )
        LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
    }
    v15 = (__int64 *)LegacyBusDeviceNode[63];
    if ( v15 != LegacyBusDeviceNode + 63 )
    {
      while ( *((_BYTE *)v15 + 16) != *(_BYTE *)a5 )
      {
        v15 = (__int64 *)*v15;
        if ( v15 == LegacyBusDeviceNode + 63 )
          goto LABEL_12;
      }
      v16 = v15[3];
      if ( v16 )
        break;
    }
LABEL_12:
    LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD *))(v16 + 32))(
          *(_QWORD *)(v16 + 8),
          PoolWithTag,
          0LL,
          0LL,
          0LL,
          v13,
          v12);
  v6 = v17;
  v18 = PoolWithTag;
  if ( v17 >= 0 )
  {
    PoolWithTag = v12;
    v10 = v17 == 288;
    v12 = v18;
    goto LABEL_12;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
LABEL_20:
  ExFreePoolWithTag(v12, 0);
  return v6;
}
