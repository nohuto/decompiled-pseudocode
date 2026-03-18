/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C0284EFC
 * Callers:
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1C0284A3C (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C0285110 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C012B058 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C012B5A4 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  __int64 v5; // rdi
  const struct _UNICODE_STRING *v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rbx
  __int64 v15; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  const struct _UNICODE_STRING *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int16 *v31; // [rsp+20h] [rbp-60h]
  unsigned __int16 *v32; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING v33; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v34; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING v36; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v37; // [rsp+70h] [rbp-10h] BYREF

  *(_QWORD *)&v33.Length = 0LL;
  v33.Buffer = 0LL;
  LODWORD(v5) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v33, a4);
  if ( (int)v5 >= 0 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    *(_QWORD *)&v34.Length = 0LL;
    v34.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v34, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v31) = a3;
    v7 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v34, &v33, v6, v31);
    v5 = v7;
    if ( v7 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v11 + 24) = v5;
      WdLogEvent5_WdError(v11);
    }
    v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8) + 74);
    if ( v14 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v12);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v18 = WdLogNewEntry5_WdError(v13, v12, v15);
      LODWORD(v5) = -1073741811;
      *(_QWORD *)(v18 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v20, v19);
      v21 = v18;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
LABEL_15:
      WdLogEvent5_WdError(v21);
      goto LABEL_16;
    }
    v22 = 0LL;
    *(_QWORD *)&v36.Length = 0LL;
    v36.Buffer = 0LL;
    v37 = *(struct _UNICODE_STRING *)((char *)SessionDataForSpecifiedSession + 18696);
    if ( _mm_srli_si128((__m128i)v37, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v36, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      LODWORD(v32) = a3;
      v26 = DpiPersistence::WriteDwordToParticularRegValue(&v37, &v36, &v33, v25, v32);
      v5 = v26;
      if ( v26 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v28, v27, v29);
        *(_QWORD *)(v21 + 24) = v5;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v37.Length )
      {
        v23 = WdLogNewEntry5_WdAssertion(0LL, v12);
        *(_QWORD *)(v23 + 24) = 772LL;
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = WdLogNewEntry5_WdWarning(v22, v12, v15);
      *(_QWORD *)(v24 + 24) = 773LL;
      WdLogEvent5_WdWarning(v24);
    }
  }
LABEL_16:
  operator delete[](v33.Buffer);
  return (unsigned int)v5;
}
