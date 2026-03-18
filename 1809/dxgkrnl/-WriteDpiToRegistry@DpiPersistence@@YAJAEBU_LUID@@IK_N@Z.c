/*
 * XREFs of ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEC28
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C024F4D0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z @ 0x1C00AE154 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00DDAF8 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0135900 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall DpiPersistence::WriteDpiToRegistry(struct _LUID *this, const struct _LUID *a2, int a3)
{
  __int64 v4; // rdi
  const struct _UNICODE_STRING *v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  const struct _UNICODE_STRING *v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int16 *v23; // [rsp+20h] [rbp-60h]
  unsigned __int16 *v24; // [rsp+20h] [rbp-60h]
  unsigned int v25; // [rsp+28h] [rbp-58h]
  unsigned int v26; // [rsp+28h] [rbp-58h]
  struct _UNICODE_STRING v27; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING v28; // [rsp+40h] [rbp-40h] BYREF
  struct _UNICODE_STRING v29; // [rsp+50h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING v31; // [rsp+70h] [rbp-10h] BYREF

  LODWORD(v4) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, 0, &v27);
  if ( (int)v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v29, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v23) = a3;
    v6 = DpiPersistence::WriteDwordToParticularRegValue(&DestinationString, &v29, &v27, v5, v23, v25);
    v4 = v6;
    if ( v6 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = v4;
      WdLogEvent5_WdError(v8);
    }
    Global = DXGGLOBAL::GetGlobal(v7);
    SessionData = DXGGLOBAL::GetSessionData(Global);
    if ( !SessionData )
    {
      v14 = WdLogNewEntry5_WdError(v12);
      LODWORD(v4) = -1073741811;
      *(_QWORD *)(v14 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v15);
      v16 = v14;
      *(_QWORD *)(v14 + 32) = -1073741811LL;
LABEL_12:
      WdLogEvent5_WdError(v16);
      goto LABEL_13;
    }
    v28 = *(struct _UNICODE_STRING *)((char *)SessionData + 18696);
    if ( _mm_srli_si128((__m128i)v28, 8).m128i_u64[0] )
    {
      RtlInitUnicodeString(&v31, L"Control Panel\\Desktop\\PerMonitorSettings\\");
      LODWORD(v24) = a3;
      v20 = DpiPersistence::WriteDwordToParticularRegValue(&v28, &v31, &v27, v19, v24, v26);
      v4 = v20;
      if ( v20 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v16 + 24) = v4;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v28.Length )
      {
        v17 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v17 + 24) = 787LL;
        WdLogEvent5_WdAssertion(v17);
      }
      v18 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v18 + 24) = 788LL;
      WdLogEvent5_WdWarning(v18);
    }
  }
LABEL_13:
  operator delete[](v27.Buffer);
  return (unsigned int)v4;
}
