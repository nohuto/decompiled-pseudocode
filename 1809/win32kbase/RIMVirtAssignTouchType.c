/*
 * XREFs of RIMVirtAssignTouchType @ 0x1C0119410
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMVirtAssignTouchType(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  unsigned int v6; // ecx
  void *v7; // rax
  __int64 v8; // r8
  __int128 v9; // xmm1
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BYTE v17[20]; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+20h] [rbp-30h]
  __int128 v19; // [rsp+30h] [rbp-20h]
  int v20; // [rsp+40h] [rbp-10h]

  v5 = *(_DWORD *)(a1 + 308) & 0xFFFFFFF7 | (*(_DWORD *)(a3 + 488) != 0 ? 8 : 0);
  *(_DWORD *)(a1 + 308) = v5;
  *(_WORD *)(a1 + 720) = *(_WORD *)(a3 + 1104);
  v6 = v5 & 0xFFFFFF7F | (*(_DWORD *)(a3 + 504) != 0 ? 0x80 : 0);
  *(_DWORD *)(a1 + 308) = v6;
  if ( (v6 & 8) == 0 )
  {
    *(_QWORD *)(a1 + 704) = 0LL;
    return 0LL;
  }
  v7 = Win32AllocPoolZInit(0x28uLL, 0x71707352u);
  *(_QWORD *)(a1 + 704) = v7;
  v8 = (__int64)v7;
  if ( v7 )
  {
    *(_QWORD *)&v19 = 0LL;
    v9 = v19;
    *(_DWORD *)v17 = *(_DWORD *)(a3 + 1056);
    *(_WORD *)&v17[4] = *(_WORD *)(a3 + 1060);
    *(_WORD *)&v17[6] = *(_WORD *)(a3 + 1064);
    *(_WORD *)&v17[8] = *(_WORD *)(a3 + 1068);
    *(_WORD *)&v17[10] = *(_WORD *)(a3 + 1072);
    *(_QWORD *)&v17[12] = *(unsigned int *)(a3 + 1076);
    v10 = v20 & 0xFFFFFFFE | (*(_DWORD *)(a3 + 1088) != 0);
    v11 = *(_DWORD *)(a3 + 1092);
    *(_OWORD *)v8 = *(_OWORD *)v17;
    *(_OWORD *)(v8 + 16) = v9;
    *(_QWORD *)(v8 + 32) = __PAIR64__(v11, v10);
    *(_QWORD *)(*(_QWORD *)(a1 + 704) + 16LL) = Win32AllocPoolZInit(
                                                  24LL * *(unsigned int *)(*(_QWORD *)(a1 + 704) + 12LL),
                                                  0x71707352u);
    v8 = *(_QWORD *)(a1 + 704);
    if ( *(_QWORD *)(v8 + 16) )
    {
      v12 = 0LL;
      if ( *(_DWORD *)(v8 + 12) )
      {
        do
        {
          v13 = *(_QWORD *)(a3 + 1080) + 48 * v12;
          LOWORD(v18) = *(_WORD *)v13;
          WORD1(v18) = *(_WORD *)(v13 + 4);
          WORD2(v18) = *(_WORD *)(v13 + 8);
          WORD3(v18) = *(_WORD *)(v13 + 12);
          WORD4(v18) = *(_WORD *)(v13 + 16);
          WORD5(v18) = *(_WORD *)(v13 + 20);
          HIDWORD(v18) = (*(_DWORD *)(v13 + 32) << 9) | (unsigned __int8)*(_DWORD *)(v13 + 24) | (*(_DWORD *)(v13 + 28) != 0
                                                                                                ? 0x100
                                                                                                : 0);
          v14 = 3 * v12;
          v12 = (unsigned int)(v12 + 1);
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 704) + 16LL);
          *(_OWORD *)(v15 + 8 * v14) = v18;
          *(_QWORD *)(v15 + 8 * v14 + 16) = 0LL;
        }
        while ( (unsigned int)v12 < *(_DWORD *)(*(_QWORD *)(a1 + 704) + 12LL) );
      }
      return 0LL;
    }
  }
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(a1 + 704) = 0LL;
  }
  return 3221225628LL;
}
