/*
 * XREFs of ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01C0140
 * Callers:
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x1C01500C4 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02560C0 (-UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z @ 0x1C01C97C0 (-DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z.c)
 *     ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1C01CCF68 (-DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UpdateDiagnosticReporting(DXGADAPTER *this, UINT *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 Value; // rcx
  _QWORD *v13; // rax
  UINT v14; // esi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT v21; // [rsp+20h] [rbp-20h] BYREF

  v3 = a2[3];
  LODWORD(v4) = 0;
  v6 = v3;
  if ( *((_DWORD *)this + v3 + 1070) < *((_DWORD *)this + v3 + 1072) )
  {
    *((_DWORD *)this + v3 + 1072) = 0;
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 156) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
    {
      *(_QWORD *)&v21.DiagnosticCategory.0 = 0LL;
      v21.InvasiveTypes.Notifications.Value = 0;
      v21.DiagnosticCategory.Value = *a2;
      v7 = DXGADAPTER::DdiQueryDiagnosticTypesSupport(this, &v21);
      v4 = v7;
      if ( v7 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
        v13[3] = v21.DiagnosticCategory.Value;
        v13[4] = v4;
        v13[5] = 3LL;
        WdLogEvent5_WdWarning(v13);
        goto LABEL_14;
      }
      if ( ((v21.NoninvasiveTypes.Notifications.Value | v21.InvasiveTypes.Notifications.Value) & a2[2]) != 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
        v11[3] = v21.DiagnosticCategory.Value;
        v11[4] = v21.NoninvasiveTypes.Notifications.Value;
        Value = v21.InvasiveTypes.Notifications.Value;
        v11[6] = 2LL;
      }
      else
      {
        if ( (v21.NoninvasiveTypes.Notifications.Value & v21.InvasiveTypes.Notifications.Value) == 0 )
        {
          *((_DWORD *)this + v6 + 1070) = v21.NoninvasiveTypes.Notifications.Value | v21.InvasiveTypes.Notifications.Value;
          goto LABEL_14;
        }
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
        v11[3] = v21.DiagnosticCategory.Value;
        v11[4] = v21.NoninvasiveTypes.Notifications.Value;
        Value = v21.InvasiveTypes.Notifications.Value;
        v11[6] = 1LL;
      }
      v11[5] = Value;
      WdLogEvent5_WdError(v11);
      goto LABEL_14;
    }
    if ( (_DWORD)v3 == 1 && *((int *)this + 540) >= 8960 )
      *((_DWORD *)this + v3 + 1070) = 1;
  }
LABEL_14:
  v14 = a2[1] & *((_DWORD *)this + v6 + 1070);
  if ( *((_DWORD *)this + v6 + 1070) && *((_DWORD *)this + v6 + 1072) != v14 )
  {
    if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 156) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
      || (v21.DiagnosticCategory.Value = *(_QWORD *)a2,
          v21.NoninvasiveTypes.Notifications.Value = v14,
          v15 = DXGADAPTER::DdiControlDiagnosticReporting(this, (struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *)&v21),
          v4 = v15,
          v15 >= 0) )
    {
      *((_DWORD *)this + v6 + 1072) = v14;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
      v19[3] = *a2;
      v19[4] = a2[1];
      v19[5] = v4;
      v19[6] = 4LL;
      WdLogEvent5_WdWarning(v19);
    }
  }
  return (unsigned int)v4;
}
