/*
 * XREFs of PipDmgSaveDeviceDmarPolicy @ 0x1406FFA44
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PipDmgSaveDeviceDmarPolicy(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // edi
  int v10; // [rsp+50h] [rbp-29h] BYREF
  int v11; // [rsp+58h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  _DWORD *v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  __int64 v16; // [rsp+90h] [rbp+17h]
  _DWORD v17[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]

  v4 = *(_QWORD *)(a1 + 48);
  v10 = a3;
  v6 = PnpSetObjectProperty(
         *(__int64 *)&PiPnpRtlCtx,
         v4,
         1u,
         a2,
         0LL,
         (__int64)&DEVPKEY_Device_DmaRemappingPolicy,
         7,
         (__int64)&v10,
         4u,
         0);
  v7 = *(_QWORD *)(a1 + 720);
  v8 = v6;
  if ( v7 )
  {
    if ( stru_140400BC8.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400BC8, 0x400000000000uLL) )
    {
      v15 = 0;
      v17[1] = 0;
      v20 = 0;
      v11 = v10;
      v13 = v17;
      v16 = *(_QWORD *)(a1 + 48);
      v17[0] = *(unsigned __int16 *)(a1 + 40);
      v18 = &v11;
      v14 = 2;
      v19 = 4;
      TlgWrite(&stru_140400BC8, &unk_14036E35A, 0LL, 0LL, 5u, &pData);
      v7 = *(_QWORD *)(a1 + 720);
    }
    *(_BYTE *)(v7 + 16) = (v10 == 2) | *(_BYTE *)(v7 + 16) & 0xFE;
  }
  return v8;
}
