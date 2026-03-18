/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D3FCC
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00D4620 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D4210 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00D43B0 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D49EC (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 */

__int64 __fastcall QueryDisplayConfigInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a6,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  __int64 v7; // rdi
  enum DISPLAYCONFIG_TOPOLOGY_ID *v8; // r13
  ULONG TimeIncrement; // eax
  __int64 v10; // rcx
  enum DISPLAYCONFIG_TOPOLOGY_ID *v11; // r15
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v12; // r12
  __int64 v13; // rdx
  unsigned int *v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  int RequestedPathsModality; // ebx
  __int64 v19; // rcx
  int v20; // r10d
  unsigned int v21; // ecx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r14d
  struct DXGGLOBAL *Global; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v36; // [rsp+40h] [rbp-20h]
  char v37; // [rsp+48h] [rbp-18h] BYREF
  __int16 v38; // [rsp+49h] [rbp-17h]
  char v39; // [rsp+4Bh] [rbp-15h]
  unsigned int v40; // [rsp+4Ch] [rbp-14h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v41; // [rsp+50h] [rbp-10h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v42; // [rsp+58h] [rbp-8h]
  int v43; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v44; // [rsp+A8h] [rbp+48h]
  unsigned int v45; // [rsp+B8h] [rbp+58h]

  v45 = a4;
  v44 = a2;
  v43 = -1;
  v7 = a3;
  v8 = 0LL;
  v38 = 0;
  v39 = 0;
  v36 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v11 = a7;
  v12 = a6;
  v13 = v7 & 7;
  v14 = a5;
  v15 = 0LL;
  v16 = v36 * TimeIncrement;
  if ( (int)v7 < 0 )
  {
    if ( (_DWORD)v13 != 2 )
    {
      v17 = WdLogNewEntry5_WdWarning(v10, v13, 0LL);
      *(_QWORD *)(v17 + 24) = v7;
      WdLogEvent5_WdWarning(v17);
      RequestedPathsModality = -1073741811;
      goto LABEL_24;
    }
    v13 = 2LL;
    v15 = 0x80000LL;
  }
  v19 = (unsigned int)v15;
  v41 = a6;
  LODWORD(v19) = v15 | 0x200000;
  v42 = a6;
  v37 = 1;
  if ( (v7 & 0x40000000) == 0 )
    v19 = (unsigned int)v15;
  v20 = v19 | 0x800000;
  if ( (v7 & 0x20000000) == 0 )
    v20 = v19;
  v40 = *a5;
  switch ( (_DWORD)v13 )
  {
    case 1:
      v21 = v20 | 0x10;
LABEL_17:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v21,
                                 0,
                                 (struct _QDC_CONTEXT *)&v37,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43);
      break;
    case 2:
      v22 = v20 | 0x1000000;
      if ( (v7 & 0x20) == 0 )
        v22 = v20;
      v23 = v22 | 0x2000000;
      if ( (v7 & 0x10000000) == 0 )
        v23 = v22;
      v21 = v23 | 0x40;
      goto LABEL_17;
    case 4:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v20 | 0x400000F,
                                 1,
                                 (struct _QDC_CONTEXT *)&v37,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43);
      v8 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43;
      break;
    default:
      RequestedPathsModality = -1073741811;
      v24 = WdLogNewEntry5_WdWarning(v19, v13, v15);
      *(_QWORD *)(v24 + 24) = v7;
      WdLogEvent5_WdWarning(v24);
      break;
  }
  if ( RequestedPathsModality >= 0 )
  {
    *v14 = (v42 - v41) / 200;
    if ( v11 )
      *(_DWORD *)v11 = v43;
  }
LABEL_24:
  v27 = LogDiagQDC(*v14, v12, v7, v45, RequestedPathsModality, v8, v16);
  if ( RequestedPathsModality >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v26, v25);
    v29 = QDC_CACHE::AddToCache(*((QDC_CACHE **)Global + 139), v44, v27, v7, *v14, v12, v11);
    v33 = v29;
    if ( v29 )
    {
      v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v34 + 24) = v33;
      WdLogEvent5_WdWarning(v34);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
