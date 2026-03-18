/*
 * XREFs of IopBootAllocation @ 0x1407544F0
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x140752E50 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopAddRemoveReqDescs @ 0x1407545E8 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v12, 0, 0x20uLL);
  v2 = 0;
  v11[1] = v11;
  LOBYTE(v3) = 1;
  v11[0] = v11;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v11, v3);
  v4 = (_QWORD *)v11[0];
  while ( v4 != v11 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    if ( *((_BYTE *)v5 + 17) )
    {
      v6 = v5 - 6;
      v12[0] = v5 - 6;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(v5 - 8) + 32LL))(
             *(_QWORD *)(*(v5 - 8) + 8LL),
             9LL,
             v12);
      v8 = v5 - 2;
      if ( v7 < 0 )
        v2 = v7;
      *((_WORD *)v5 + 8) = 0;
      v5[1] = v5;
      *v5 = v5;
      v8[1] = v8;
      *v8 = v8;
      v9 = v5 - 4;
      v6[1] = v6;
      *v6 = v6;
      v9[1] = v9;
      *v9 = v9;
    }
  }
  return v2;
}
