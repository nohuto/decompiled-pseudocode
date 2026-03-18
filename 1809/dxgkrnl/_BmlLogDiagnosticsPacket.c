/*
 * XREFs of _BmlLogDiagnosticsPacket @ 0x1C00D5144
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D5B44 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C0289EA8 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0006410 (-WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C00D54D8 (--$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNP.c)
 */

__int64 __fastcall BmlLogDiagnosticsPacket(VIDPN_MGR *a1, int a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v31; // [rsp+78h] [rbp+20h]

  v7 = 376 * *a4 + 64;
  v8 = operator new(v7, 0x63644356u, PagedPool);
  v10 = 0;
  v11 = v8;
  if ( v8 )
  {
    memset(v8, 0, v7);
    *v11 = 32;
    v11[1] = v7;
    v11[10] = 0;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 1) = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    v11[12] = *a4;
    v13 = *((_DWORD *)a4 + 1);
    v11[14] = a2;
    v14 = 0;
    v11[13] = v13;
    v15 = *(_QWORD *)(a3 + 48);
    if ( *a4 )
    {
      v16 = 0x700000000000LL;
      do
      {
        v17 = 104LL * v14;
        v18 = *(__int64 **)&a4[v17 + 16];
        v19 = *v18;
        if ( (*v18 & 0x700000000000LL) == 0x700000000000LL )
        {
          v20 = 94LL * v14;
          *(_QWORD *)&v11[v20 + 16] = v19;
          *(_QWORD *)&v11[v20 + 18] = v18[1];
          *(_QWORD *)&v11[v20 + 20] = v18[2];
          v11[v20 + 22] = *((_DWORD *)v18 + 6);
          v11[v20 + 23] = *((_DWORD *)v18 + 7);
          v11[v20 + 34] = *((_DWORD *)v18 + 8);
          *(_QWORD *)&v11[v20 + 26] = *(__int64 *)((char *)v18 + 36);
          *(_QWORD *)&v11[v20 + 28] = *(__int64 *)((char *)v18 + 44);
          *(_QWORD *)&v11[v20 + 30] = *(__int64 *)((char *)v18 + 52);
          *(_QWORD *)&v11[v20 + 32] = *(__int64 *)((char *)v18 + 60);
          *(_QWORD *)&v11[v20 + 24] = *((unsigned int *)v18 + 18);
          v11[v20 + 35] = (int)(*((_DWORD *)v18 + 20) << 29) >> 29;
          v11[v20 + 36] = *((_DWORD *)v18 + 22);
          v11[v20 + 37] = *((_DWORD *)v18 + 23);
          *(_OWORD *)&v11[v20 + 38] = *((_OWORD *)v18 + 6);
          *(_OWORD *)&v11[v20 + 42] = *((_OWORD *)v18 + 7);
          v11[v20 + 46] = *((_DWORD *)v18 + 33);
          v11[v20 + 47] = *((_DWORD *)v18 + 34);
          v11[v20 + 48] = *((_DWORD *)v18 + 35);
          *(_QWORD *)&v11[v20 + 49] = v18[18];
          v11[v20 + 88] = *(_DWORD *)&a4[v17 + 24];
          v11[v20 + 89] = *(_DWORD *)&a4[v17 + 28];
          LOWORD(v11[v20 + 90]) = *(_WORD *)&a4[v17 + 32];
          *(_QWORD *)&v11[v20 + 91] = *(_QWORD *)&a4[v17 + 36];
          *(_QWORD *)&v11[v20 + 93] = *(_QWORD *)&a4[v17 + 44];
          *(_QWORD *)&v11[v20 + 95] = *(_QWORD *)&a4[v17 + 52];
          v11[v20 + 97] = *(_DWORD *)&a4[v17 + 60];
          LOWORD(v11[v20 + 98]) = *(_WORD *)&a4[v17 + 64];
          HIWORD(v11[v20 + 98]) = *(_WORD *)&a4[v17 + 66];
          LOWORD(v11[v20 + 99]) = *(_WORD *)&a4[v17 + 68];
          HIWORD(v11[v20 + 99]) = *(_WORD *)&a4[v17 + 70];
          v11[v20 + 100] = *(_DWORD *)&a4[v17 + 72];
          v11[v20 + 101] = *(_DWORD *)&a4[v17 + 76];
          v11[v20 + 102] = *(_DWORD *)&a4[v17 + 80];
          v11[v20 + 103] = *(_DWORD *)&a4[v17 + 84];
          v11[v20 + 104] = *(_DWORD *)&a4[v17 + 88];
          v11[v20 + 106] = *(_DWORD *)&a4[v17 + 96];
          v11[v20 + 105] = *(_DWORD *)&a4[v17 + 92];
          v11[v20 + 108] = *(_DWORD *)&a4[v17 + 104];
          v11[v20 + 107] = *(_DWORD *)&a4[v17 + 100];
          v21 = 0LL;
          *(_QWORD *)&v11[v20 + 56] = v18[2];
          v11[v20 + 58] = *((_DWORD *)v18 + 6);
          v11[v20 + 59] = *((_DWORD *)v18 + 7);
          v31 = &v11[v20 + 52];
          *v31 = 0x700000000000LL;
          v22 = *(_QWORD *)(a3 + 120);
          if ( v22 != a3 + 120 )
            v21 = (_QWORD *)(v22 - 8);
          if ( !v21 )
            goto LABEL_17;
          v23 = *(_QWORD *)(v15 + 8);
          while ( 1 )
          {
            v24 = v23;
            if ( !v23 )
            {
              v28 = WdLogNewEntry5_WdAssertion(v22);
              WdLogEvent5_WdAssertion(v28);
              v24 = *(_QWORD *)(v15 + 8);
            }
            v25 = *(_QWORD *)(v24 + 16);
            v23 = v24;
            if ( *((_DWORD *)v18 + 4) == *(_DWORD *)(v25 + 276)
              && *((_DWORD *)v18 + 5) == *(_DWORD *)(v25 + 280)
              && *((_DWORD *)v18 + 6) == *(_DWORD *)(v21[11] + 24LL)
              && *((_DWORD *)v18 + 7) == *(_DWORD *)(v21[12] + 24LL) )
            {
              break;
            }
            v22 = v21[1];
            v21 = (_QWORD *)(v22 - 8);
            if ( v22 == a3 + 120 )
              v21 = 0LL;
            if ( !v21 )
              goto LABEL_16;
          }
          _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>(v21, v31, v19, v16);
        }
        else
        {
          v29 = WdLogNewEntry5_WdWarning(v12, v17, v19);
          *(_QWORD *)(v29 + 24) = v14;
          *(_QWORD *)(v29 + 32) = v18;
          WdLogEvent5_WdWarning(v29);
        }
LABEL_16:
        v16 = 0x700000000000LL;
LABEL_17:
        v12 = *a4;
        ++v14;
      }
      while ( v14 < (unsigned int)v12 );
    }
    VIDPN_MGR::WriteDiagEntry(a1, (struct _DXGK_DIAG_HEADER *)v11);
  }
  else
  {
    v27 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v27 + 24) = a4;
    *(_QWORD *)(v27 + 32) = *a4;
    WdLogEvent5_WdLowResource(v27);
    v10 = -1073741670;
  }
  operator delete[](v11);
  return v10;
}
