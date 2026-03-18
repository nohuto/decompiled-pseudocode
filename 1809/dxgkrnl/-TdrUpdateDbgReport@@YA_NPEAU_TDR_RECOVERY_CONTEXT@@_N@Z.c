/*
 * XREFs of ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C020B970
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C020A1C0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020AD00 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C020AF30 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020B420 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020B2BC (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C020B8C4 (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020B914 (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     DpiIsRfxVgpuDevice @ 0x1C0263094 (DpiIsRfxVgpuDevice.c)
 */

char __fastcall TdrUpdateDbgReport(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  __int64 v2; // r9
  char v3; // r10
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r10
  bool v11; // cl
  __int64 v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v3 = a2;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 192);
    v6 = *(_QWORD *)(v5 + 64);
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 && *(_BYTE *)(v6 + 2623) )
        return 0;
    }
    if ( (unsigned __int8)DpiIsRfxVgpuDevice(v5) )
      return 0;
  }
  v8 = *((_QWORD *)a1 + 354);
  if ( !v8 || v3 )
  {
    TdrGetDbgOwnerTag(a1);
    TdrRetrieveSecondaryBucketingKey(a1, &v20);
    v11 = 0;
    if ( v9 )
      v11 = *(_QWORD *)(v9 + 2528) == 0LL;
    if ( *((_DWORD *)a1 + 4) == 6 )
      v12 = (unsigned int)(*((_BYTE *)a1 + 2820) != 0) + 321;
    else
      v12 = 279LL;
    if ( v9 )
      v13 = *(_QWORD *)(v9 + 192);
    else
      v13 = 0LL;
    v14 = WdDbgReportRecreate(v13, v12, a1, v10, v20, *((_QWORD *)a1 + 351), v11, v8);
    *((_QWORD *)a1 + 354) = v14;
    if ( !v14 )
    {
      *((_DWORD *)a1 + 29) |= 0x80000000;
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = a1;
LABEL_20:
      WdLogEvent5_WdError(v16);
      return 0;
    }
    if ( !(unsigned __int8)WdDbgReportQueryInfo(v14, (char *)a1 + 128) )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdError(v18);
    }
  }
  if ( *((_QWORD *)a1 + 355) )
  {
    if ( *((_QWORD *)a1 + 356) )
    {
      TdrUpdateDbgBuffer(a1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(
                               *((_QWORD *)a1 + 354),
                               *((_QWORD *)a1 + 355),
                               *((unsigned int *)a1 + 712)) )
      {
        *((_DWORD *)a1 + 29) |= 0x80000000;
        v16 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v16 + 24) = a1;
        *(_QWORD *)(v16 + 32) = *((_QWORD *)a1 + 356);
        goto LABEL_20;
      }
    }
  }
  return 1;
}
