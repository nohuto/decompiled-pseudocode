/*
 * XREFs of BmlUnPinSourceMode @ 0x1C02C2054
 * Callers:
 *     BmlFunctionalizePath @ 0x1C012741C (BmlFunctionalizePath.c)
 *     _BmlGetPathModeListForPath @ 0x1C02C24D8 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     BmlUnPinAllPathsPartialModalityFromSource @ 0x1C02C1CEC (BmlUnPinAllPathsPartialModalityFromSource.c)
 */

__int64 __fastcall BmlUnPinSourceMode(_BYTE *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DMMVIDPNPRESENTPATH *v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  result = BmlUnPinAllPathsPartialModalityFromSource(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    v8 = a3;
    v9 = 104LL * a3;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             (DMMVIDPNTOPOLOGY *)(a2 + 96),
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&a1[v9 + 16] + 28LL));
    v14 = Path;
    if ( Path )
    {
      v16 = *((_QWORD *)Path + 11);
      v17 = *(_QWORD *)(a2 + 48);
      v18 = *(_QWORD *)(v16 + 104);
      if ( v18 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
        v18 = *(_QWORD *)(v16 + 104);
      }
      v19 = *(_QWORD *)(v18 + 144) == 0LL;
      v25 = v18;
      if ( v19
        || (LOBYTE(v11) = 1,
            v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v17 + 440) + 48LL))(
                    v18 & -(__int64)(v18 != -137),
                    v11),
            v22 >= 0) )
      {
        v22 = 0;
      }
      else
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v23);
        v24[3] = v14;
        v24[4] = a2;
        v24[5] = *(unsigned int *)(*((_QWORD *)v14 + 11) + 24LL);
        v24[6] = *(unsigned int *)(*((_QWORD *)v14 + 12) + 24LL);
        WdLogEvent5_WdWarning(v24);
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v25, 0LL);
      return (unsigned int)v22;
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v15[3] = v8;
      v15[4] = a2;
      v15[5] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 24LL);
      v15[6] = *(unsigned int *)(*(_QWORD *)&a1[v9 + 16] + 28LL);
      WdLogEvent5_WdWarning(v15);
      return 3223192345LL;
    }
  }
  return result;
}
