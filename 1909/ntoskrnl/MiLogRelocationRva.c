/*
 * XREFs of MiLogRelocationRva @ 0x14066AE50
 * Callers:
 *     MiCaptureImageCfgContext @ 0x140642EB0 (MiCaptureImageCfgContext.c)
 *     MiParseImageLoadConfig @ 0x140643DC8 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x14066BB84 (MiLogRelocationFaults.c)
 *     MiParseComImage @ 0x1406DFA74 (MiParseComImage.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     PfSnLogPageFault @ 0x1400D3314 (PfSnLogPageFault.c)
 *     PfLogFileDataAccess @ 0x1402ED578 (PfLogFileDataAccess.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbp
  __int16 v6; // di
  unsigned int *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v6 = a1;
  v7 = MiOffsetToProtos(a4, a1, v12);
  if ( v7 )
  {
    v8 = (v12[0] << 12) + ((unsigned __int64)v7[9] << 9);
    if ( (PfSnNumActiveTraces || dword_140503758) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = ((unsigned __int64)(v6 & 0xFFF) + v4 + 4095) >> 12;
      v10 = v9 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v10 = v9;
      v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( dword_140503758 )
        PfLogFileDataAccess(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v11, v10, 0);
      if ( PfSnNumActiveTraces && v10 )
      {
        do
        {
          PfSnLogPageFault(a3, v11, 2);
          v11 += 4096LL;
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
