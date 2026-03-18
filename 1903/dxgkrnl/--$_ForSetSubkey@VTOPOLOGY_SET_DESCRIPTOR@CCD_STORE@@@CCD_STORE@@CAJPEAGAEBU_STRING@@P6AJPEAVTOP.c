/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00D631C
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D4B04 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D4B94 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00D7370 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00DA71C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00DAB8C (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00DABF4 (_CcdOpenRegistrySubkey_0.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DD8D0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C0146224 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  int v27; // eax
  ULONG v28; // [rsp+30h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  HANDLE v30; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING v31; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v33[80]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-1h] BYREF
  int v35; // [rsp+C8h] [rbp+7h]

  v30 = 0LL;
  v8 = CcdOpenRegistrySubkey(
         (int)&v30,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v28);
  v12 = v8;
  if ( v8 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v24[3] = v12;
    v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v24[5] = a2;
    v24[6] = a3;
    v24[7] = a4;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v12;
  }
  Handle = 0LL;
  *(_QWORD *)&v31.Length = 0LL;
  v31.Buffer = 0LL;
  v13 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v31, a2);
  v12 = v13;
  if ( v13 < 0 )
    goto LABEL_9;
  v28 = 2;
  v12 = (int)CcdOpenRegistrySubkey_0(
               (int)&Handle,
               983103,
               (int)v30,
               (int)&v31,
               (PULONG)((unsigned __int64)&v28 & -(__int64)(a5 != 0)));
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v31);
  if ( (int)v12 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v26[3] = v12;
    v26[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v26[5] = a2;
    v26[6] = a3;
    v26[7] = a4;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_6;
  }
  if ( v28 == 1 )
  {
    v35 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v34;
    v34 = *(_QWORD *)L"SetId";
    *(_QWORD *)&ValueName.Length = 786442LL;
    v27 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v12 = v27;
    if ( v27 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
      v25[3] = v12;
      v25[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
      v25[5] = a2;
      v25[6] = a3;
      v25[7] = a4;
      WdLogEvent5_WdError(v25);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v33, Handle, a2);
  v12 = a3(v33, a4);
  ZwClose(Handle);
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
  v22[3] = v12;
  v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v22[5] = a2;
  v22[6] = a3;
  v22[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v33);
LABEL_6:
  ZwClose(v30);
  return (unsigned int)v12;
}
