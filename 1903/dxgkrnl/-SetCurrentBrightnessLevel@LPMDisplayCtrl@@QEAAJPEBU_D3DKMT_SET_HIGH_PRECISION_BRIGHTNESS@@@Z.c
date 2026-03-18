/*
 * XREFs of ?SetCurrentBrightnessLevel@LPMDisplayCtrl@@QEAAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C024FCD4
 * Callers:
 *     ?DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z @ 0x1C024F470 (-DxgkSetHighPrecisionBrightness@@YAJPEBU_D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C024F17C (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::SetCurrentBrightnessLevel(
        LPMDisplayCtrl *this,
        const struct _D3DKMT_SET_HIGH_PRECISION_BRIGHTNESS *a2,
        __int64 a3)
{
  PFILE_OBJECT *v3; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  int v10; // edx
  int v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  _DWORD InputBuffer[4]; // [rsp+40h] [rbp-9h] BYREF
  _DWORD v23[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v24; // [rsp+58h] [rbp+Fh]
  __int128 v25; // [rsp+60h] [rbp+17h]
  __int64 v26; // [rsp+70h] [rbp+27h]
  int v27; // [rsp+78h] [rbp+2Fh]
  int v28; // [rsp+7Ch] [rbp+33h]
  int v29; // [rsp+80h] [rbp+37h]
  int v30; // [rsp+84h] [rbp+3Bh]
  NTSTATUS v31; // [rsp+88h] [rbp+3Fh]
  int v32; // [rsp+8Ch] [rbp+43h]

  v3 = FileObject;
  if ( !*((_DWORD *)FileObject + 11) )
  {
    v5 = WdLogNewEntry5_WdError(FileObject, a2, a3);
    v6 = -1073741808;
    *(_QWORD *)(v5 + 24) = -1073741808LL;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return v6;
  }
  if ( *(_DWORD *)a2 > 0x64u )
  {
    v5 = WdLogNewEntry5_WdError(FileObject, a2, a3);
    v8 = *(unsigned int *)a2;
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = v8;
    *(_QWORD *)(v5 + 32) = -1073741811LL;
    goto LABEL_3;
  }
  v9 = *((_BYTE *)a2 + 8);
  if ( *((_DWORD *)FileObject + 12) )
  {
    if ( v9 )
      v10 = *((_DWORD *)FileObject + 40);
    else
      v10 = *((_DWORD *)FileObject + 41);
  }
  else if ( v9 )
  {
    v10 = *((_DWORD *)FileObject + 37);
  }
  else
  {
    v10 = *((_DWORD *)FileObject + 36);
    v9 = 0;
  }
  InputBuffer[0] = 0;
  *((_DWORD *)FileObject + 12) = v9;
  v11 = *((_DWORD *)a2 + 1);
  InputBuffer[2] = v10;
  InputBuffer[1] = v11;
  v12 = LPMDisplayCtrl::CallDriver(v3, 0x8321213C, InputBuffer, 0xCu, 0LL, 0, 0LL);
  v13 = *(unsigned int *)a2;
  v28 = 0;
  v27 = 0;
  v26 = 0LL;
  v14 = v12;
  v24 = 0LL;
  v25 = 0uLL;
  v32 = *((_DWORD *)a2 + 1);
  v23[0] = 6;
  v23[1] = 64;
  v29 = 67;
  v30 = v13;
  v31 = v12;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13, v15);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23, CurrentProcessSessionId, v17);
  if ( (int)v14 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v21 + 24) = *((unsigned int *)a2 + 1);
    *(_QWORD *)(v21 + 32) = v14;
    WdLogEvent5_WdError(v21);
  }
  return (unsigned int)v14;
}
