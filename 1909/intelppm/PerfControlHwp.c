/*
 * XREFs of PerfControlHwp @ 0x1C0006D00
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRaw @ 0x1C00083CC (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C00086D0 (WriteIoMemRaw.c)
 */

void __fastcall PerfControlHwp(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 IoMemRaw; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h]

  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 105) || a4 )
    {
      IoMemRaw = ReadIoMemRaw(a1 + 120);
      *(_BYTE *)(a1 + 105) = 1;
    }
    else
    {
      IoMemRaw = *(_QWORD *)(a1 + 136);
    }
    LODWORD(v8) = IoMemRaw;
    HIDWORD(v8) = HIDWORD(IoMemRaw) & 0xFFFFFBFF | (*(_BYTE *)(a2 + 37) != 0 ? 0x400 : 0);
    v7 = *(_QWORD *)(a1 + 144) & *(_QWORD *)a2 | v8 & ~*(_QWORD *)(a1 + 144);
    WriteIoMemRaw(a1 + 120, v7);
    *(_QWORD *)(a1 + 136) = v7;
  }
}
