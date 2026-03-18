/*
 * XREFs of DxgkIddGetAdapterSessionDiagnostics @ 0x1C0234438
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02ABFC8 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E028 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C00411D8 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1C01EBF2C (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkIddGetAdapterSessionDiagnostics(
        unsigned int a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  __int64 v4; // rdi
  struct _LUID *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  DXGFASTMUTEX **v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-28h] BYREF
  DXGADAPTER *v25[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+10h] BYREF

  v26 = a2;
  v25[0] = 0LL;
  v4 = a1;
  DXGADAPTER_REFERENCE::AssignByHandle(v25, a1);
  v10 = (__int64)v25[0];
  if ( !v25[0] )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v11);
    goto LABEL_15;
  }
  v24 = 0;
  if ( !DXGADAPTER::IsAddapterSessionized(v25[0], v7, &v24, 0LL) )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v15 + 24) = v10;
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_10:
    WdLogEvent5_WdError(v15);
    goto LABEL_15;
  }
  if ( !DXGGLOBAL::GetGlobal(v13, v12) )
  {
    v15 = WdLogNewEntry5_WdError(v17, v16, v18);
    v10 = -1073741811LL;
LABEL_9:
    *(_QWORD *)(v15 + 24) = v10;
    goto LABEL_10;
  }
  v20 = (DXGFASTMUTEX **)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 72);
  if ( !v20 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, v19, v21);
    v10 = -1073741436LL;
    goto LABEL_9;
  }
  v22 = DXGDIAGNOSTICS::ReadDiagnostics(v20, a3, &v26, v24);
  if ( (int)(v22 + 0x80000000) < 0 || v22 == -2147483643 )
    *a4 = v26;
  LODWORD(v10) = v22;
LABEL_15:
  DXGADAPTER_REFERENCE::Assign(v25, 0LL);
  return (unsigned int)v10;
}
