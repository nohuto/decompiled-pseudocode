/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1C01410E4
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D2E58 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02C223C (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00064C0 (-GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001A10C (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C0141474 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(DXGFASTMUTEX ***a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edi
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  DMMVIDPNTOPOLOGY *v18; // r12
  __int64 v19; // r13
  unsigned int v20; // r15d
  __int64 v21; // rdx
  __int64 *v22; // r14
  __int64 v23; // r8
  __int64 v24; // rcx
  DMMVIDPNTOPOLOGY *v25; // rcx
  struct DMMVIDPNPRESENTPATH *FirstPath; // rbp
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v35; // [rsp+78h] [rbp+20h]

  v7 = 376 * *a4 + 64;
  v8 = operator new[](v7, 0x63644356u, PagedPool);
  v13 = 0;
  v14 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *v14 = 32;
    v14[1] = v7;
    v14[10] = 0;
    *((_QWORD *)v14 + 4) = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    v14[12] = *a4;
    v17 = *((_DWORD *)a4 + 1);
    v14[14] = a2;
    v18 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    v14[13] = v17;
    v19 = *(_QWORD *)(a3 + 48);
    v20 = 0;
    if ( *a4 )
    {
      do
      {
        v21 = 104LL * v20;
        v22 = *(__int64 **)&a4[v21 + 16];
        v23 = *v22;
        if ( (*v22 & 0x700000000000LL) == 0x700000000000LL )
        {
          v24 = 94LL * v20;
          *(_QWORD *)&v14[v24 + 16] = v23;
          *(_QWORD *)&v14[v24 + 18] = v22[1];
          *(_QWORD *)&v14[v24 + 20] = v22[2];
          v14[v24 + 22] = *((_DWORD *)v22 + 6);
          v14[v24 + 23] = *((_DWORD *)v22 + 7);
          v14[v24 + 34] = *((_DWORD *)v22 + 8);
          *(_QWORD *)&v14[v24 + 26] = *(__int64 *)((char *)v22 + 36);
          *(_QWORD *)&v14[v24 + 28] = *(__int64 *)((char *)v22 + 44);
          *(_QWORD *)&v14[v24 + 30] = *(__int64 *)((char *)v22 + 52);
          *(_QWORD *)&v14[v24 + 32] = *(__int64 *)((char *)v22 + 60);
          *(_QWORD *)&v14[v24 + 24] = *((unsigned int *)v22 + 18);
          v14[v24 + 35] = (int)(*((_DWORD *)v22 + 20) << 29) >> 29;
          v14[v24 + 36] = *((_DWORD *)v22 + 22);
          v14[v24 + 37] = *((_DWORD *)v22 + 23);
          *(_OWORD *)&v14[v24 + 38] = *((_OWORD *)v22 + 6);
          *(_OWORD *)&v14[v24 + 42] = *((_OWORD *)v22 + 7);
          v14[v24 + 46] = *((_DWORD *)v22 + 33);
          v14[v24 + 47] = *((_DWORD *)v22 + 34);
          v14[v24 + 48] = *((_DWORD *)v22 + 35);
          *(_QWORD *)&v14[v24 + 49] = v22[18];
          v14[v24 + 88] = *(_DWORD *)&a4[v21 + 24];
          v14[v24 + 89] = *(_DWORD *)&a4[v21 + 28];
          LOWORD(v14[v24 + 90]) = *(_WORD *)&a4[v21 + 32];
          *(_QWORD *)&v14[v24 + 91] = *(_QWORD *)&a4[v21 + 36];
          *(_QWORD *)&v14[v24 + 93] = *(_QWORD *)&a4[v21 + 44];
          *(_QWORD *)&v14[v24 + 95] = *(_QWORD *)&a4[v21 + 52];
          v14[v24 + 97] = *(_DWORD *)&a4[v21 + 60];
          LOWORD(v14[v24 + 98]) = *(_WORD *)&a4[v21 + 64];
          HIWORD(v14[v24 + 98]) = *(_WORD *)&a4[v21 + 66];
          LOWORD(v14[v24 + 99]) = *(_WORD *)&a4[v21 + 68];
          HIWORD(v14[v24 + 99]) = *(_WORD *)&a4[v21 + 70];
          v14[v24 + 100] = *(_DWORD *)&a4[v21 + 72];
          v14[v24 + 101] = *(_DWORD *)&a4[v21 + 76];
          v14[v24 + 102] = *(_DWORD *)&a4[v21 + 80];
          v14[v24 + 103] = *(_DWORD *)&a4[v21 + 84];
          v14[v24 + 104] = *(_DWORD *)&a4[v21 + 88];
          v14[v24 + 106] = *(_DWORD *)&a4[v21 + 96];
          v14[v24 + 105] = *(_DWORD *)&a4[v21 + 92];
          v14[v24 + 108] = *(_DWORD *)&a4[v21 + 104];
          v14[v24 + 107] = *(_DWORD *)&a4[v21 + 100];
          *(_QWORD *)&v14[v24 + 56] = v22[2];
          v14[v24 + 58] = *((_DWORD *)v22 + 6);
          v14[v24 + 59] = *((_DWORD *)v22 + 7);
          v35 = &v14[v24 + 52];
          *v35 = 0x700000000000LL;
          FirstPath = DMMVIDPNTOPOLOGY::GetFirstPath(v18);
          if ( FirstPath )
          {
            v27 = *(_QWORD *)(v19 + 8);
            while ( 1 )
            {
              v28 = v27;
              if ( !v27 )
              {
                v32 = WdLogNewEntry5_WdAssertion(v25, 0LL);
                WdLogEvent5_WdAssertion(v32);
                v28 = *(_QWORD *)(v19 + 8);
              }
              v29 = *(_QWORD *)(v28 + 16);
              v27 = v28;
              if ( *((_DWORD *)v22 + 4) == *(_DWORD *)(v29 + 276)
                && *((_DWORD *)v22 + 5) == *(_DWORD *)(v29 + 280)
                && *((_DWORD *)v22 + 6) == *(_DWORD *)(*((_QWORD *)FirstPath + 11) + 24LL)
                && *((_DWORD *)v22 + 7) == *(_DWORD *)(*((_QWORD *)FirstPath + 12) + 24LL) )
              {
                break;
              }
              v25 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)FirstPath + 1);
              FirstPath = (DMMVIDPNTOPOLOGY *)((char *)v25 - 8);
              if ( v25 == (DMMVIDPNTOPOLOGY *)((char *)v18 + 24) )
                FirstPath = 0LL;
              if ( !FirstPath )
                goto LABEL_13;
            }
            _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>(FirstPath, v35);
          }
        }
        else
        {
          v33 = WdLogNewEntry5_WdWarning(v15, v21, v23);
          *(_QWORD *)(v33 + 24) = v20;
          *(_QWORD *)(v33 + 32) = v22;
          WdLogEvent5_WdWarning(v33);
        }
LABEL_13:
        v15 = *a4;
        ++v20;
      }
      while ( v20 < (unsigned int)v15 );
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v14, v16);
  }
  else
  {
    v31 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    *(_QWORD *)(v31 + 24) = a4;
    *(_QWORD *)(v31 + 32) = *a4;
    WdLogEvent5_WdLowResource(v31);
    v13 = -1073741670;
  }
  operator delete[](v14);
  return v13;
}
