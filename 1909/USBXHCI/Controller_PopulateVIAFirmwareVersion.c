/*
 * XREFs of Controller_PopulateVIAFirmwareVersion @ 0x1C0061874
 * Callers:
 *     Controller_PopulatePciDeviceInformation @ 0x1C00615E4 (Controller_PopulatePciDeviceInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 */

void __fastcall Controller_PopulateVIAFirmwareVersion(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int16 v10; // r9
  __int64 (__fastcall *v11)(__int64, _QWORD, _BYTE *, __int64, int); // rax
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // [rsp+28h] [rbp-28h]
  unsigned __int8 v17; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v18[3]; // [rsp+41h] [rbp-Fh] BYREF
  _DWORD v19[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int8 v20; // [rsp+80h] [rbp+30h] BYREF

  if ( *(_WORD *)(a3 + 2) == 13362 )
  {
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, int))(a2 + 56);
    v12 = *(_QWORD *)(a2 + 8);
    v18[0] = 0;
    v17 = 0;
    v20 = 0;
    v13 = v11(v12, 0LL, v18, 609LL, 1);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v17,
            610LL,
            1)
        + v13;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v20,
            611LL,
            1)
        + v14;
    if ( v15 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v10 = 238;
      v16 = v15;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(a1, 4u, 4u, 0xEFu, (__int64)&Context.Logger + 4, v20, v17, v18[0]);
    *a4 = v18[0] | ((v17 | ((unsigned __int64)v20 << 8)) << 8);
  }
  else if ( *(_WORD *)(a3 + 2) == 13443 || *(unsigned __int16 *)(a3 + 2) == 37377 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a2 + 56);
    v8 = *(_QWORD *)(a2 + 8);
    v19[0] = 0;
    v9 = v7(v8, 0LL, v19, 80LL, 4);
    if ( v9 != 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v10 = 240;
      v16 = v9;
LABEL_13:
      WPP_RECORDER_SF_d(a1, 2u, 4u, v10, (__int64)&Context.Logger + 4, v16);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a1, 4u, 4u, 0xF1u, (__int64)&Context.Logger + 4, v19[0]);
    *a4 = v19[0];
  }
}
