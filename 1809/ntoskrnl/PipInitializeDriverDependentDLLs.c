/*
 * XREFs of PipInitializeDriverDependentDLLs @ 0x1409CBB40
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1409CB89C (PipInitializeCoreDriversAndElam.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 *     PnpDoPolicyCheck @ 0x1409CCEDC (PnpDoPolicyCheck.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x1409CCF3C (PnpNotifyEarlyLaunchImageLoad.c)
 */

void __fastcall PipInitializeDriverDependentDLLs(int a1, __int64 a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  bool v5; // r15
  __int64 v6; // rdi
  int v7; // ecx
  bool v8; // cl
  __int64 v9; // rdx
  char v10; // al
  _QWORD v11[14]; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v12; // [rsp+C0h] [rbp+67h] BYREF

  v2 = a2 + 16;
  v3 = *(_QWORD **)(a2 + 16);
  v5 = a1 != 1;
  if ( v3 != (_QWORD *)(a2 + 16) )
  {
    do
    {
      v6 = (__int64)v3;
      v3 = (_QWORD *)*v3;
      if ( (*(_DWORD *)(v6 + 104) & 0x4000000) != 0 )
      {
        v7 = *(_DWORD *)(v6 + 228);
        if ( a1 )
        {
          if ( a1 == 1 )
          {
            v8 = (*(_DWORD *)(v6 + 228) & 2) != 0;
            goto LABEL_8;
          }
          if ( a1 == 2 )
          {
            v8 = (v7 & 3) == 0;
            goto LABEL_8;
          }
        }
        else if ( (v7 & 1) != 0 )
        {
          v8 = 1;
LABEL_8:
          if ( v8 )
          {
            if ( a1 )
            {
              v12 = 0;
              memset(v11, 0, 0x68uLL);
              LODWORD(v11[0]) = 0;
              *(_OWORD *)&v11[1] = *(_OWORD *)(v6 + 72);
              HIDWORD(v11[0]) = *(_DWORD *)(v6 + 224) & 1;
              LODWORD(v11[11]) = *(_DWORD *)(v6 + 208);
              LODWORD(v11[12]) = *(_DWORD *)(v6 + 216);
              v11[9] = *(_QWORD *)(v6 + 192);
              HIDWORD(v11[11]) = *(_DWORD *)(v6 + 212);
              HIDWORD(v11[12]) = *(_DWORD *)(v6 + 220);
              v11[10] = *(_QWORD *)(v6 + 200);
              v11[4] = qword_1409E22F0;
              LODWORD(v11[3]) = 0x20000;
              *(_OWORD *)&v11[7] = *(_OWORD *)(v6 + 176);
              *(_OWORD *)&v11[5] = *(_OWORD *)(v6 + 160);
              PnpNotifyEarlyLaunchImageLoad(v11, &v12);
              LOBYTE(v9) = v5;
              v10 = PnpDoPolicyCheck(v12, v9);
            }
            else
            {
              v10 = 1;
            }
            if ( v10 )
              MmCallDllInitialize(v6, v2);
          }
        }
      }
    }
    while ( v3 != (_QWORD *)v2 );
  }
}
