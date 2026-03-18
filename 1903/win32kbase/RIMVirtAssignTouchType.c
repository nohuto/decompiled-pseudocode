/*
 * XREFs of RIMVirtAssignTouchType @ 0x1C0141C20
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

__int64 __fastcall RIMVirtAssignTouchType(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edx
  unsigned int v6; // ecx
  void *v7; // rax
  __int64 v8; // r8
  bool v9; // zf
  int v10; // eax
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-30h]
  __int128 v17; // [rsp+20h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-10h]

  v5 = *(_DWORD *)(a1 + 312) & 0xFFFFFFFD | (*(_DWORD *)(a3 + 484) != 0 ? 2 : 0);
  *(_DWORD *)(a1 + 312) = v5;
  *(_WORD *)(a1 + 728) = *(_WORD *)(a3 + 1104);
  v6 = v5 & 0xFFFFFFDF | (*(_DWORD *)(a3 + 500) != 0 ? 0x20 : 0);
  *(_DWORD *)(a1 + 312) = v6;
  if ( (v6 & 2) == 0 )
  {
    *(_QWORD *)(a1 + 712) = 0LL;
    return 0LL;
  }
  v7 = Win32AllocPoolZInit(0x28uLL, 1903194962LL);
  *(_QWORD *)(a1 + 712) = v7;
  v8 = (__int64)v7;
  *(_DWORD *)(a1 + 24) = 3;
  if ( v7 )
  {
    v9 = *(_DWORD *)(a3 + 1088) == 0;
    LODWORD(v16) = *(_DWORD *)(a3 + 1056);
    WORD2(v16) = *(_WORD *)(a3 + 1060);
    WORD3(v16) = *(_WORD *)(a3 + 1064);
    WORD4(v16) = *(_WORD *)(a3 + 1068);
    WORD5(v16) = *(_WORD *)(a3 + 1072);
    HIDWORD(v16) = *(_DWORD *)(a3 + 1076);
    v10 = *(_DWORD *)(a3 + 1092);
    *(_OWORD *)v8 = v16;
    LODWORD(v18) = !v9;
    *(_OWORD *)(v8 + 16) = 0LL;
    HIDWORD(v18) = v10;
    *(_QWORD *)(v8 + 32) = v18;
    *(_QWORD *)(*(_QWORD *)(a1 + 712) + 16LL) = Win32AllocPoolZInit(
                                                  24LL * *(unsigned int *)(*(_QWORD *)(a1 + 712) + 12LL),
                                                  1903194962LL);
    v8 = *(_QWORD *)(a1 + 712);
    if ( *(_QWORD *)(v8 + 16) )
    {
      v11 = 0LL;
      if ( *(_DWORD *)(v8 + 12) )
      {
        do
        {
          v12 = *(_QWORD *)(a3 + 1080) + 48 * v11;
          LOWORD(v17) = *(_WORD *)v12;
          WORD1(v17) = *(_WORD *)(v12 + 4);
          WORD2(v17) = *(_WORD *)(v12 + 8);
          WORD3(v17) = *(_WORD *)(v12 + 12);
          WORD4(v17) = *(_WORD *)(v12 + 16);
          WORD5(v17) = *(_WORD *)(v12 + 20);
          HIDWORD(v17) = (*(_DWORD *)(v12 + 32) << 9) | (unsigned __int8)*(_DWORD *)(v12 + 24) | (*(_DWORD *)(v12 + 28) != 0
                                                                                                ? 0x100
                                                                                                : 0);
          v13 = 3 * v11;
          v11 = (unsigned int)(v11 + 1);
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 16LL);
          *(_OWORD *)(v14 + 8 * v13) = v17;
          *(_QWORD *)(v14 + 8 * v13 + 16) = 0LL;
        }
        while ( (unsigned int)v11 < *(_DWORD *)(*(_QWORD *)(a1 + 712) + 12LL) );
      }
      return 0LL;
    }
  }
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
  return 3221225628LL;
}
