/*
 * XREFs of ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0295810
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02962FC (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C00411D8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C0049BF8 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049C4C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET@@I@Z @ 0x1C0295C48 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
        DISPLAYSTATECHECKER *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        enum DISPLAYSTATECHECKER::DxgkrnlLiveDumpFailureReason *a7)
{
  enum DISPLAYSTATECHECKER::DxgkrnlLiveDumpFailureReason *v7; // rsi
  int BlackScreenDiagPacket; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // r15d
  int v20; // ebx
  __int64 v21; // r14
  unsigned int v22; // ebx
  size_t v23; // r15
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _DWORD *v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r9
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r9
  int v37; // eax
  unsigned __int64 v38; // r8
  unsigned int v39; // r13d
  _DWORD *v40; // r15
  unsigned int i; // ebp
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  const void *v43; // rdx
  unsigned __int64 v44; // rbp
  unsigned int v45; // r14d
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  int v56; // [rsp+30h] [rbp-48h]
  unsigned int v57; // [rsp+88h] [rbp+10h] BYREF
  __int64 v58; // [rsp+90h] [rbp+18h]
  __int64 v59; // [rsp+98h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v57 = a2;
  v7 = a7;
  BlackScreenDiagPacket = 0;
  *(_DWORD *)a7 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  if ( !Global )
  {
    *(_DWORD *)v7 = 1;
    return 3221225473LL;
  }
  v15 = *((_QWORD *)Global + 72);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    *(_DWORD *)v7 = 2;
    return 3221225860LL;
  }
  v17 = *((_QWORD *)Global + 73);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    *(_DWORD *)v7 = 4;
    return 3221225860LL;
  }
  v19 = *(_DWORD *)(v17 + 16);
  v20 = *((_DWORD *)this + 1470) << 13;
  LODWORD(a5) = *(_DWORD *)(v15 + 16);
  LODWORD(v59) = v19;
  LODWORD(a6) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v57 = *((_DWORD *)this + 1470);
  v21 = 8 * v57 + 40;
  v56 = v20 + v21 + a6;
  LODWORD(a7) = a5 + v19 + v56;
  v22 = ((_DWORD)a7 + 4095) & 0xFFFFF000;
  if ( (unsigned int)WdDbgGetSecondaryDataMaxSize(424LL) < v22 )
  {
    *(_DWORD *)v7 = 8;
    return 3221225473LL;
  }
  v23 = v22;
  v24 = operator new[](v22, 0x4B677844u, PagedPool);
  v29 = v24;
  if ( !v24 )
  {
    v30 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    *(_QWORD *)(v30 + 24) = v23;
    WdLogEvent5_WdLowResource(v30);
    v31 = 16;
    BlackScreenDiagPacket = -1073741801;
    goto LABEL_38;
  }
  memset(v24, 0, v23);
  v32 = (unsigned int)a5;
  v33 = v57;
  v29[1] = 0;
  *v29 = v33 + 4;
  v34 = (unsigned int)v32;
  v35 = v21 + v32;
  v57 = v32;
  v36 = (unsigned int)a7;
  v29[2] = v21;
  v29[3] = 160;
  if ( v35 >= v34 && v35 <= v36 )
  {
    v37 = DXGDIAGNOSTICS::ReadDiagnostics((DXGFASTMUTEX **)v15, (unsigned __int8 *)v29 + (unsigned int)v21, &v57, -1);
    v36 = (unsigned int)a7;
    BlackScreenDiagPacket = v37;
    if ( v37 >= 0 )
    {
      v21 = v57 + (unsigned int)v21;
      LODWORD(a5) = v57;
    }
    else
    {
      *(_DWORD *)v7 = 32;
    }
  }
  v38 = (unsigned int)v59;
  v29[4] = v21;
  v29[5] = 176;
  v57 = v38;
  if ( v21 + v38 >= v38 && v21 + v38 <= v36 )
  {
    BlackScreenDiagPacket = DXGDIAGNOSTICS::ReadDiagnostics(
                              (DXGFASTMUTEX **)v17,
                              (unsigned __int8 *)v29 + (unsigned int)v21,
                              &v57,
                              -1);
    if ( BlackScreenDiagPacket >= 0 )
    {
      v39 = v57;
      v21 = v57 + (unsigned int)v21;
      goto LABEL_23;
    }
    *(_DWORD *)v7 = 64;
  }
  v39 = v59;
LABEL_23:
  v40 = v29 + 6;
  for ( i = 0; i < *((_DWORD *)this + 1470); ++i )
  {
    *v40 = v21;
    v40[1] = 5;
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    if ( *((_BYTE *)DisplayAdapterDiagData + 32) )
      v43 = (const void *)*((_QWORD *)DisplayAdapterDiagData + 3);
    else
      v43 = 0LL;
    if ( v43 )
    {
      memmove((char *)v29 + (unsigned int)v21, v43, 0x2000uLL);
      v40 += 2;
      v21 = (unsigned int)(v21 + 0x2000);
    }
  }
  v44 = (unsigned int)a6;
  *v40 = v21;
  v40[1] = 192;
  if ( v21 + v44 >= v44 && v21 + v44 <= (unsigned int)a7 )
  {
    BlackScreenDiagPacket = DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
                              this,
                              (struct _DXGK_DIAG_BLACK_SCREEN_PACKET *)((char *)v29 + (unsigned int)v21),
                              v44);
    if ( BlackScreenDiagPacket >= 0 )
      LODWORD(v21) = v44 + v21;
    else
      *(_DWORD *)v7 = 1024;
  }
  v40[3] = 0;
  v40[2] = v21;
  v45 = a5 + v39 + v56;
  v46 = WdDbgReportCreate(0LL, 424LL);
  v50 = v46;
  if ( v46 )
  {
    if ( !(unsigned __int8)WdDbgReportSecondaryData(v46, v29, v45) )
    {
      v55 = WdLogNewEntry5_WdError(v53, v52, v54);
      *(_QWORD *)(v55 + 24) = 837LL;
      WdLogEvent5_WdError(v55);
      *(_DWORD *)v7 = 256;
      BlackScreenDiagPacket = -1073741823;
    }
    WdDbgReportComplete(v50);
    goto LABEL_42;
  }
  v51 = WdLogNewEntry5_WdError(v48, v47, v49);
  *(_QWORD *)(v51 + 24) = 830LL;
  WdLogEvent5_WdError(v51);
  v31 = 128;
  BlackScreenDiagPacket = -1073741823;
LABEL_38:
  *(_DWORD *)v7 = v31;
LABEL_42:
  if ( v29 )
    operator delete[](v29);
  return (unsigned int)BlackScreenDiagPacket;
}
