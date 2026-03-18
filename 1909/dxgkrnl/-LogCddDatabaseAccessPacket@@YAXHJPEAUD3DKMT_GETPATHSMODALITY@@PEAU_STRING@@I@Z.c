/*
 * XREFs of ?LogCddDatabaseAccessPacket@@YAXHJPEAUD3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00D25CC
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD974 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D50EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

void __fastcall LogCddDatabaseAccessPacket(
        int a1,
        int a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        struct _STRING *a4,
        unsigned int a5)
{
  unsigned int v9; // r14d
  _DWORD *v10; // rax
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int CurrentProcessSessionId; // eax

  v9 = 144 * *((unsigned __int16 *)a3 + 10) + a4->Length + 73;
  v10 = operator new[](v9, 0x63644356u, PagedPool);
  v11 = 0;
  v12 = v10;
  if ( v10 )
  {
    memset(v10, 0, v9);
    *v12 = 35;
    v12[1] = v9;
    v12[10] = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    v12[13] = a5;
    v12[12] = a2;
    v12[14] = a1;
    v12[15] = *((unsigned __int16 *)a3 + 10);
    LOWORD(v13) = *((_WORD *)a3 + 10);
    if ( (_WORD)v13 )
    {
      do
      {
        v14 = v11++;
        v15 = 18 * v14;
        *(_QWORD *)&v12[2 * v15 + 18] = *((_QWORD *)a3 + 34 * v14 + 6);
        *(_QWORD *)&v12[2 * v15 + 20] = *((_QWORD *)a3 + 34 * v14 + 7);
        *(_QWORD *)&v12[2 * v15 + 22] = *((_QWORD *)a3 + 34 * v14 + 8);
        v12[2 * v15 + 24] = *((_DWORD *)a3 + 68 * v14 + 18);
        v12[2 * v15 + 25] = *((_DWORD *)a3 + 68 * v14 + 19);
        *(_QWORD *)&v12[2 * v15 + 26] = *((_QWORD *)a3 + 34 * v14 + 15);
        *(_QWORD *)&v12[2 * v15 + 28] = *(_QWORD *)((char *)a3 + 272 * v14 + 84);
        *(_QWORD *)&v12[2 * v15 + 30] = *(_QWORD *)((char *)a3 + 272 * v14 + 92);
        *(_QWORD *)&v12[2 * v15 + 32] = *(_QWORD *)((char *)a3 + 272 * v14 + 100);
        *(_QWORD *)&v12[2 * v15 + 34] = *(_QWORD *)((char *)a3 + 272 * v14 + 108);
        v12[2 * v15 + 36] = *((_DWORD *)a3 + 68 * v14 + 20);
        v12[2 * v15 + 37] = (int)(*((_DWORD *)a3 + 68 * v14 + 32) << 29) >> 29;
        v12[2 * v15 + 38] = *((_DWORD *)a3 + 68 * v14 + 34);
        v12[2 * v15 + 39] = *((_DWORD *)a3 + 68 * v14 + 35);
        *(_OWORD *)&v12[2 * v15 + 40] = *((_OWORD *)a3 + 17 * v14 + 9);
        *(_OWORD *)&v12[2 * v15 + 44] = *((_OWORD *)a3 + 17 * v14 + 10);
        v12[2 * v15 + 48] = *((_DWORD *)a3 + 68 * v14 + 45);
        v12[2 * v15 + 49] = *((_DWORD *)a3 + 68 * v14 + 46);
        v12[2 * v15 + 50] = *((_DWORD *)a3 + 68 * v14 + 47);
        *(_QWORD *)&v12[2 * v15 + 51] = *((_QWORD *)a3 + 34 * v14 + 24);
        v13 = *((unsigned __int16 *)a3 + 10);
      }
      while ( v11 < v13 );
    }
    v16 = 144 * (unsigned __int16)v13 + (_DWORD)v12 + 72;
    memmove(&v12[36 * (unsigned __int16)v13 + 18], a4->Buffer, a4->Length);
    v12[16] = v16 - (_DWORD)v12;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, CurrentProcessSessionId);
    operator delete[](v12);
  }
}
