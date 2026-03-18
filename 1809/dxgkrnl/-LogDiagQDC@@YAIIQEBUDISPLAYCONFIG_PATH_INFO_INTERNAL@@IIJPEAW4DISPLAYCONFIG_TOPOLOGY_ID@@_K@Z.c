/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00C69AC
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C67C0 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C7220 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall LogDiagQDC(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6,
        unsigned __int64 a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // esi
  _DWORD *v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rdi
  char *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rax

  v10 = a1;
  if ( (a3 & 7) == 1 )
  {
    v21 = 0;
    if ( a1 )
    {
      v22 = (__int64 *)a2;
      do
      {
        if ( *v22 >= 0 )
          break;
        ++v21;
        v22 += 25;
      }
      while ( v21 < v10 );
    }
    v10 = v21;
  }
  v11 = 192 * v10 + 88;
  v12 = operator new[](v11, 0x43434451u, PagedPool);
  v14 = v12;
  if ( v12 )
  {
    memset(v12, 0, v11);
    v14[10] = 0;
    *((_QWORD *)v14 + 4) = 0LL;
    *v14 = 39;
    v14[1] = v11;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    v14[14] = 0;
    v14[13] = v10;
    v14[15] = a5;
    v14[16] = a4 | a3;
    if ( a6 )
      v14[17] = *(_DWORD *)a6;
    v14[18] = 192;
    *((_QWORD *)v14 + 10) = a7;
    v14[12] = (a6 != 0LL ? 4 : 0) | (a2 == 0LL) | 2;
    if ( a2 && v10 )
    {
      v15 = (char *)(v14 + 26);
      v16 = v10;
      v17 = (_QWORD *)((char *)a2 + 16);
      do
      {
        *((_QWORD *)v15 - 2) = *(v17 - 2);
        *((_QWORD *)v15 - 1) = *(v17 - 1);
        v18 = *v17;
        v17 += 25;
        *(_QWORD *)v15 = v18;
        *((_DWORD *)v15 + 2) = *((_DWORD *)v17 - 48);
        *((_DWORD *)v15 + 3) = *((_DWORD *)v17 - 47);
        *((_OWORD *)v15 + 1) = *(_OWORD *)(v17 - 23);
        *((_OWORD *)v15 + 2) = *(_OWORD *)(v17 - 21);
        *((_OWORD *)v15 + 3) = *(_OWORD *)(v17 - 19);
        *((_DWORD *)v15 + 16) = *((_DWORD *)v17 - 34);
        *((_DWORD *)v15 + 17) = *((_DWORD *)v17 - 33);
        *((_QWORD *)v15 + 9) = *(v17 - 16);
        *((_DWORD *)v15 + 20) = *((_DWORD *)v17 - 30);
        v15[84] = *((_BYTE *)v17 - 116);
        v15[85] = *((_BYTE *)v17 - 115);
        *((_DWORD *)v15 + 22) = *((_DWORD *)v17 - 28);
        *((_DWORD *)v15 + 23) = *((_DWORD *)v17 - 27);
        *((_DWORD *)v15 + 24) = *((_DWORD *)v17 - 26);
        *(_QWORD *)(v15 + 100) = *(_QWORD *)((char *)v17 - 100);
        *(_QWORD *)(v15 + 108) = *(_QWORD *)((char *)v17 - 92);
        *(_QWORD *)(v15 + 116) = *(_QWORD *)((char *)v17 - 84);
        *(_OWORD *)(v15 + 124) = *(_OWORD *)((char *)v17 - 76);
        *((_DWORD *)v15 + 35) = *((_DWORD *)v17 - 15);
        *((_DWORD *)v15 + 36) = *((_DWORD *)v17 - 14);
        *((_DWORD *)v15 + 37) = *((_DWORD *)v17 - 13);
        *((_QWORD *)v15 + 19) = *(v17 - 6);
        *((_QWORD *)v15 + 20) = *(v17 - 5);
        *((_DWORD *)v15 + 42) = *((_DWORD *)v17 - 8);
        v15 += 192;
        --v16;
      }
      while ( v16 );
    }
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v14);
    v19 = v14[10];
    operator delete[](v14);
    return v19;
  }
  else
  {
    v23 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v23 + 24) = v11;
    WdLogEvent5_WdLowResource(v23);
    DxgkLogCodePointPacket(0xAu, a3, a5, 0, 0LL);
    return 0xFFFFFFFFLL;
  }
}
