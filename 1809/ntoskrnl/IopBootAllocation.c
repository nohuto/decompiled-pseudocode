/*
 * XREFs of IopBootAllocation @ 0x140730E64
 * Callers:
 *     IopAllocateBootResourcesInternal @ 0x14072F7B0 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopAddRemoveReqDescs @ 0x140730F44 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall IopBootAllocation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v12[1] = v12;
  LOBYTE(a4) = 1;
  v12[0] = v12;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  IopAddRemoveReqDescs(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v12, a4);
  v5 = (_QWORD *)v12[0];
  while ( v5 != v12 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 17) )
    {
      v7 = v6 - 6;
      v13 = v6 - 6;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD **))(*(v6 - 8) + 32LL))(
             *(_QWORD *)(*(v6 - 8) + 8LL),
             9LL,
             &v13);
      v9 = v6 - 2;
      if ( v8 < 0 )
        v4 = v8;
      *((_WORD *)v6 + 8) = 0;
      v6[1] = v6;
      *v6 = v6;
      v9[1] = v9;
      *v9 = v9;
      v10 = v6 - 4;
      v7[1] = v7;
      *v7 = v7;
      v10[1] = v10;
      *v10 = v10;
    }
  }
  return v4;
}
