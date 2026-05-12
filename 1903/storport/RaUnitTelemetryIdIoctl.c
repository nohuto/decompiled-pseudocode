/*
 * XREFs of RaUnitTelemetryIdIoctl @ 0x1C001FD4C
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007604 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitTelemetryIdIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rdx
  const struct _TlgProvider_t *Length; // rcx
  const GUID *v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  const struct _TlgProvider_t *v10; // rcx
  unsigned int v11; // r8d
  char v13; // [rsp+30h] [rbp-49h] BYREF
  char v14; // [rsp+31h] [rbp-48h] BYREF
  char v15; // [rsp+32h] [rbp-47h] BYREF
  unsigned int LevelPlus1; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 *p_RegHandle; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  unsigned int *p_LevelPlus1; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  char *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]
  char *v26; // [rsp+A0h] [rbp+27h]
  __int64 v27; // [rsp+A8h] [rbp+2Fh]
  char *v28; // [rsp+B0h] [rbp+37h]
  __int64 v29; // [rsp+B8h] [rbp+3Fh]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = (const struct _TlgProvider_t *)CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x28 )
  {
    v11 = -1073741820;
LABEL_13:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v11);
  }
  if ( (unsigned int)Length < 0x28 )
  {
    v11 = -1073741789;
    goto LABEL_13;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 40 || *(_DWORD *)(&MasterIrp->Size + 1) != 40 )
  {
    v11 = -1073741811;
    goto LABEL_13;
  }
  *(_OWORD *)(a1 + 1720) = *(_OWORD *)&MasterIrp->MdlAddress;
  *(_DWORD *)&MasterIrp->Type = 40;
  *(_DWORD *)(&MasterIrp->Size + 1) = 40;
  *(_OWORD *)&MasterIrp->AssociatedIrp.MasterIrp = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 5128LL);
  a2->IoStatus.Information = 40LL;
  if ( (unsigned int)dword_1C0061058 > 5 && TlgKeywordOn(Length, 0x400000000000uLL) )
  {
    v10 = *(const struct _TlgProvider_t **)(v8 + 24);
    LevelPlus1 = v10[1].LevelPlus1;
    v13 = *(_BYTE *)(v8 + 96);
    v14 = *(_BYTE *)(v8 + 97);
    v15 = *(_BYTE *)(v8 + 98);
    p_RegHandle = &v10[91].RegHandle;
    p_LevelPlus1 = &LevelPlus1;
    v24 = &v13;
    v26 = &v14;
    v28 = &v15;
    v19 = 16LL;
    v20 = v9;
    v21 = 16LL;
    v23 = 4LL;
    v25 = 1LL;
    v27 = 1LL;
    v29 = 1LL;
    TlgWrite(v10, &unk_1C0056009, v7, (LPCGUID)v8, 8u, &pData);
  }
  v11 = 0;
  return RaidCompleteRequestEx(a2, 0, v11);
}
