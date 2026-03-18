/*
 * XREFs of Controller_PopulateVIAFirmwareVersion @ 0x1C005A484
 * Callers:
 *     Controller_PopulatePciDeviceInformation @ 0x1C005A230 (Controller_PopulatePciDeviceInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 */

void __fastcall Controller_PopulateVIAFirmwareVersion(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 (__fastcall *v10)(__int64, _QWORD, _BYTE *, __int64, int); // rax
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  unsigned __int8 v15; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v16[3]; // [rsp+41h] [rbp-Fh] BYREF
  _DWORD v17[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int8 v18; // [rsp+80h] [rbp+30h] BYREF

  if ( *(_WORD *)(a3 + 2) == 13362 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, int))(a2 + 56);
    v11 = *(_QWORD *)(a2 + 8);
    v16[0] = 0;
    v15 = 0;
    v18 = 0;
    v12 = v10(v11, 0LL, v16, 609LL, 1);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v15,
            610LL,
            1)
        + v12;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v18,
            611LL,
            1)
        + v13;
    if ( v14 == 3 )
    {
      WPP_RECORDER_SF_ddL(a1, 4u, 4u, 0xECu, (__int64)&Context.Logger + 4, v18, v15, v16[0]);
      *a4 = v16[0] | ((v15 | ((unsigned __int64)v18 << 8)) << 8);
    }
    else
    {
      WPP_RECORDER_SF_d(a1, 2u, 4u, 0xEBu, (__int64)&Context.Logger + 4, v14);
    }
  }
  else if ( *(_WORD *)(a3 + 2) == 13443 || *(unsigned __int16 *)(a3 + 2) == 37377 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a2 + 56);
    v8 = *(_QWORD *)(a2 + 8);
    v17[0] = 0;
    v9 = v7(v8, 0LL, v17, 80LL, 4);
    if ( v9 == 4 )
    {
      WPP_RECORDER_SF_d(a1, 4u, 4u, 0xEEu, (__int64)&Context.Logger + 4, v17[0]);
      *a4 = v17[0];
    }
    else
    {
      WPP_RECORDER_SF_d(a1, 2u, 4u, 0xEDu, (__int64)&Context.Logger + 4, v9);
    }
  }
}
