/*
 * XREFs of MiLogRelocationRva @ 0x140657E30
 * Callers:
 *     MiLogRelocationFaults @ 0x140658B64 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x140659FF0 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x14065ABB0 (MiCaptureImageCfgContext.c)
 *     MiParseComImage @ 0x1406DE6D4 (MiParseComImage.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     PfSnLogPageFault @ 0x140095FF4 (PfSnLogPageFault.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     PfLogFileDataAccess @ 0x1402ED818 (PfLogFileDataAccess.c)
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
    if ( (PfSnNumActiveTraces || dword_140503A18) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = ((unsigned __int64)(v6 & 0xFFF) + v4 + 4095) >> 12;
      v10 = v9 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v10 = v9;
      v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( dword_140503A18 )
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
