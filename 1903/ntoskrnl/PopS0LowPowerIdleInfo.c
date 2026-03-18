/*
 * XREFs of PopS0LowPowerIdleInfo @ 0x1408A5478
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408B40DC (PopNetIsDisconnectStandbyActive.c)
 */

__int64 __fastcall PopS0LowPowerIdleInfo(__int64 a1)
{
  unsigned int v1; // ebx
  bool v2; // zf
  char IsDisconnectStandbyActive; // al
  char v5; // cl
  int v6; // edx
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = PopPlatformAoAc == 0;
  *(_QWORD *)a1 = 0LL;
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    PopAcquirePolicyLock();
    IsDisconnectStandbyActive = PopNetIsDisconnectStandbyActive(&v13);
    v5 = *(_BYTE *)(a1 + 4);
    v6 = v13;
    *(_DWORD *)a1 = v13;
    v7 = (PopCsDeviceCompliance[0] == 1) | v5 & 0xFE;
    *(_BYTE *)(a1 + 4) = v7;
    v8 = (dword_14050EC14 != 1 ? 0 : 2) | v7 & 0xFD;
    *(_BYTE *)(a1 + 4) = v8;
    v9 = (dword_14050EC18 != 1 ? 0 : 4) | v8 & 0xFB;
    *(_BYTE *)(a1 + 4) = v9;
    *(_BYTE *)(a1 + 4) = (dword_14050EC20 != 1 ? 0 : 8) | v9 & 0xF7;
    v10 = (IsDisconnectStandbyActive != 0) | *(_BYTE *)(a1 + 5) & 0xFE;
    *(_BYTE *)(a1 + 5) = v10;
    if ( (unsigned int)(v6 - 3) <= 1 )
      v11 = v10 | 2;
    else
      v11 = v10 & 0xFD;
    *(_BYTE *)(a1 + 5) = v11;
    PopReleasePolicyLock();
  }
  return v1;
}
