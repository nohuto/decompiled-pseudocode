/*
 * XREFs of ?Optimize@?$ShrinkableReferenceArray@PEAVCBaseDrawListEntry@@@@QEAAXXZ @ 0x1800D66AC
 * Callers:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180059E04 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ShrinkableReferenceArray<CBaseDrawListEntry *>::Optimize(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebx
  __int64 v5; // r14
  void *v6; // rbx
  int v7; // ecx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r15
  void *v11[2]; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v1 > 0x10 && *(_DWORD *)(a1 + 36) < v1 / 3 )
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v4 = v1 >> 1;
    *(_OWORD *)v11 = 0LL;
    if ( (int)DynArrayImpl<0>::Grow((__int64)v11, 8u, v4, 1, 0LL) >= 0 )
    {
      v5 = 0LL;
      if ( v3 > v4 )
      {
        v8 = v3;
        v3 = v4;
        v5 = v8 - v4;
        if ( (_DWORD)v5 )
        {
          v9 = 0LL;
          v10 = (unsigned int)v5;
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + *(_QWORD *)a1) + 8LL))(*(_QWORD *)(v9 + *(_QWORD *)a1));
            v9 += 8LL;
            --v10;
          }
          while ( v10 );
        }
      }
      v6 = v11[0];
      memcpy_0(v11[0], (const void *)(*(_QWORD *)a1 + 8 * v5), 8LL * v3);
      v7 = v13;
      v11[0] = *(void **)a1;
      v13 = *(_DWORD *)(a1 + 20);
      v14 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = v6;
      *(_DWORD *)(a1 + 20) = v7;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v11);
  }
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = v3;
}
