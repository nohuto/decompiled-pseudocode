/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00CC3F8
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00CC5FC (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00CA874 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00CA8D4 (_CcdOpenRegistrySubkey_0.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00CA9D4 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C00CC240 (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00CC314 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00CC3D0 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C00CDC10 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  int v24; // eax
  ULONG v25; // [rsp+30h] [rbp-B1h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-A9h] BYREF
  HANDLE v27; // [rsp+40h] [rbp-A1h] BYREF
  struct _UNICODE_STRING v28; // [rsp+48h] [rbp-99h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v30[112]; // [rsp+70h] [rbp-71h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-1h] BYREF
  int v32; // [rsp+E8h] [rbp+7h]

  v27 = 0LL;
  v7 = CcdOpenRegistrySubkey(
         (int)&v27,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
         &v25);
  v9 = v7;
  if ( v7 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v21[3] = v9;
    v21[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v21[5] = a2;
    v21[6] = a3;
    v21[7] = a4;
    WdLogEvent5_WdError(v21);
    return (unsigned int)v9;
  }
  Handle = 0LL;
  *(_QWORD *)&v28.Length = 0LL;
  v28.Buffer = 0LL;
  v10 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v28, a2);
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_9;
  v25 = 2;
  v9 = CcdOpenRegistrySubkey_0(&Handle, 0xF003Fu, v27, &v28, &v25);
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v28);
  if ( (int)v9 < 0 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v23[3] = v9;
    v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v23[5] = a2;
    v23[6] = a3;
    v23[7] = a4;
    WdLogEvent5_WdWarning(v23);
    goto LABEL_6;
  }
  if ( v25 == 1 )
  {
    v32 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v31;
    v31 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v24 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v9 = v24;
    if ( v24 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v22[3] = v9;
      v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
      v22[5] = a2;
      v22[6] = a3;
      v22[7] = a4;
      WdLogEvent5_WdError(v22);
      goto LABEL_6;
    }
  }
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v30, Handle, a2);
  v9 = a3(v30, a4);
  ZwClose(Handle);
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
  v19[3] = v9;
  v19[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
  v19[5] = a2;
  v19[6] = a3;
  v19[7] = a4;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v30);
LABEL_6:
  ZwClose(v27);
  return (unsigned int)v9;
}
