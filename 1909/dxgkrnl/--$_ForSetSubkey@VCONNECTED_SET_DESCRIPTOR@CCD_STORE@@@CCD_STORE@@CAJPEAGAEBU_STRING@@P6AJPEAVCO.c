/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00DDD1C
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00DDF64 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D53E4 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00D7BC0 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00DB1CC (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00DB234 (_CcdOpenRegistrySubkey_0.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00DDC60 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C00DDE90 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C0149D44 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // eax
  ULONG v27; // [rsp+30h] [rbp-B1h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-A9h] BYREF
  HANDLE v29; // [rsp+40h] [rbp-A1h] BYREF
  struct _UNICODE_STRING v30; // [rsp+48h] [rbp-99h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v32[112]; // [rsp+70h] [rbp-71h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-1h] BYREF
  int v34; // [rsp+E8h] [rbp+7h]

  v29 = 0LL;
  v7 = CcdOpenRegistrySubkey(
         (int)&v29,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
         &v27);
  v11 = v7;
  if ( v7 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
    v23[3] = v11;
    v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v23[5] = a2;
    v23[6] = a3;
    v23[7] = a4;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v11;
  }
  Handle = 0LL;
  *(_QWORD *)&v30.Length = 0LL;
  v30.Buffer = 0LL;
  v12 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v30, a2);
  v11 = v12;
  if ( v12 < 0 )
    goto LABEL_9;
  v27 = 2;
  v11 = CcdOpenRegistrySubkey_0(&Handle, 0xF003Fu, v29, &v30, &v27);
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v30);
  if ( (int)v11 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v25[3] = v11;
    v25[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v25[5] = a2;
    v25[6] = a3;
    v25[7] = a4;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_6;
  }
  if ( v27 == 1 )
  {
    v34 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v33;
    v33 = *(_QWORD *)L"SetId";
    *(_QWORD *)&ValueName.Length = 786442LL;
    v26 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v11 = v26;
    if ( v26 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
      v24[3] = v11;
      v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
      v24[5] = a2;
      v24[6] = a3;
      v24[7] = a4;
      WdLogEvent5_WdError(v24);
      goto LABEL_6;
    }
  }
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v32, Handle, a2);
  v11 = a3(v32, a4);
  ZwClose(Handle);
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
  v21[3] = v11;
  v21[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
  v21[5] = a2;
  v21[6] = a3;
  v21[7] = a4;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v32);
LABEL_6:
  ZwClose(v29);
  return (unsigned int)v11;
}
