/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C67C0
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00C6D90 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00C69AC (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C6C08 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C7320 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
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
  enum DISPLAYCONFIG_TOPOLOGY_ID *v7; // r13
  __int64 v8; // rdi
  ULONG TimeIncrement; // eax
  __int64 v10; // rcx
  enum DISPLAYCONFIG_TOPOLOGY_ID *v11; // r15
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v12; // r12
  __int64 v13; // r8
  unsigned int *v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // r10d
  int v19; // ecx
  unsigned int v20; // ecx
  int RequestedPathsModality; // ebx
  __int64 v22; // rcx
  unsigned int v23; // r14d
  struct DXGGLOBAL *Global; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+40h] [rbp-20h]
  __int64 v35; // [rsp+48h] [rbp-18h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v36; // [rsp+50h] [rbp-10h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v37; // [rsp+58h] [rbp-8h]
  int v38; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp+48h]
  unsigned int v40; // [rsp+B8h] [rbp+58h]

  v40 = a4;
  v39 = a2;
  v38 = -1;
  v35 = 0LL;
  v7 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v8 = a3;
  v34 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v11 = a7;
  v12 = a6;
  v13 = 0LL;
  v14 = a5;
  v15 = v8 & 7;
  v16 = v34 * TimeIncrement;
  if ( (int)v8 < 0 )
  {
    if ( (_DWORD)v15 != 2 )
    {
      v31 = WdLogNewEntry5_WdWarning(v10, v15, 0LL);
      *(_QWORD *)(v31 + 24) = v8;
      WdLogEvent5_WdWarning(v31);
      RequestedPathsModality = -1073741811;
      goto LABEL_15;
    }
    v13 = 0x80000LL;
  }
  v17 = (unsigned int)v13;
  v36 = a6;
  LODWORD(v17) = v13 | 0x200000;
  v37 = a6;
  LOBYTE(v35) = 1;
  if ( (v8 & 0x40000000) == 0 )
    v17 = (unsigned int)v13;
  v18 = v17 | 0x800000;
  if ( (v8 & 0x20000000) == 0 )
    v18 = v17;
  HIDWORD(v35) = *a5;
  switch ( (_DWORD)v15 )
  {
    case 1:
      v20 = v18 | 0x10;
LABEL_11:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v20,
                                 0,
                                 (struct _QDC_CONTEXT *)&v35,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v38);
      break;
    case 2:
      v19 = v18 | 0x1000000;
      if ( (v8 & 0x20) == 0 )
        v19 = v18;
      v20 = v19 | 0x40;
      goto LABEL_11;
    case 4:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v18 | 0x400000F,
                                 1,
                                 (struct _QDC_CONTEXT *)&v35,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v38);
      v7 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v38;
      break;
    default:
      RequestedPathsModality = -1073741811;
      v32 = WdLogNewEntry5_WdWarning(v17, v15, v13);
      *(_QWORD *)(v32 + 24) = v8;
      WdLogEvent5_WdWarning(v32);
      break;
  }
  if ( RequestedPathsModality >= 0 )
  {
    *v14 = (v37 - v36) / 200;
    if ( v11 )
      *(_DWORD *)v11 = v38;
  }
LABEL_15:
  v23 = LogDiagQDC(*v14, v12, v8, v40, RequestedPathsModality, v7, v16);
  if ( RequestedPathsModality >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v22);
    v25 = QDC_CACHE::AddToCache(*((QDC_CACHE **)Global + 143), v39, v23, v8, *v14, v12, v11);
    v29 = v25;
    if ( v25 )
    {
      v33 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v33 + 24) = v29;
      WdLogEvent5_WdWarning(v33);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
