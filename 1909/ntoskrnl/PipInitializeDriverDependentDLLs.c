/*
 * XREFs of PipInitializeDriverDependentDLLs @ 0x140A10818
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140A10584 (PipInitializeCoreDriversAndElam.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmCallDllInitialize @ 0x1407460F0 (MmCallDllInitialize.c)
 *     PnpDoPolicyCheck @ 0x140A11DA4 (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140A11E04 (PnpNotifyEarlyLaunchImageLoad.c)
 */

char __fastcall PipInitializeDriverDependentDLLs(int a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  bool v9; // cl
  __int64 v10; // rdx
  _QWORD v12[14]; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+C0h] [rbp+67h] BYREF

  LOBYTE(v4) = (unsigned __int8)memset(v12, 0, 0x68uLL);
  v5 = (_QWORD *)(a2 + 16);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    v4 = *(_DWORD *)(v7 + 104);
    if ( (v4 & 0x4000000) != 0 )
    {
      v8 = *(_DWORD *)(v7 + 228);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          v9 = (*(_DWORD *)(v7 + 228) & 2) != 0;
          goto LABEL_8;
        }
        if ( a1 == 2 )
        {
          v9 = (v8 & 3) == 0;
          goto LABEL_8;
        }
      }
      else if ( (v8 & 1) != 0 )
      {
        v9 = 1;
LABEL_8:
        if ( v9 )
        {
          if ( a1 )
          {
            v13 = 0;
            memset(v12, 0, 104);
            *(_OWORD *)&v12[1] = *(_OWORD *)(v7 + 72);
            HIDWORD(v12[0]) = *(_DWORD *)(v7 + 224) & 1;
            LODWORD(v12[11]) = *(_DWORD *)(v7 + 208);
            LODWORD(v12[12]) = *(_DWORD *)(v7 + 216);
            v12[9] = *(_QWORD *)(v7 + 192);
            HIDWORD(v12[11]) = *(_DWORD *)(v7 + 212);
            HIDWORD(v12[12]) = *(_DWORD *)(v7 + 220);
            v12[10] = *(_QWORD *)(v7 + 200);
            v12[4] = qword_140A24C60;
            LODWORD(v12[3]) = 0x20000;
            *(_OWORD *)&v12[7] = *(_OWORD *)(v7 + 176);
            *(_OWORD *)&v12[5] = *(_OWORD *)(v7 + 160);
            PnpNotifyEarlyLaunchImageLoad(v12, &v13);
            LOBYTE(v10) = a1 != 1;
            LOBYTE(v4) = PnpDoPolicyCheck(v13, v10);
          }
          else
          {
            LOBYTE(v4) = 1;
          }
          if ( (_BYTE)v4 )
            LOBYTE(v4) = MmCallDllInitialize(v7, (__int64)v5);
        }
      }
    }
  }
  return v4;
}
