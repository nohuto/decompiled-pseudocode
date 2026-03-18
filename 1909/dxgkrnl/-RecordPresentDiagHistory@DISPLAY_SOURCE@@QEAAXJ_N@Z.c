/*
 * XREFs of ?RecordPresentDiagHistory@DISPLAY_SOURCE@@QEAAXJ_N@Z @ 0x1C0024994
 * Callers:
 *     DxgkPresent @ 0x1C010F1E0 (DxgkPresent.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_SOURCE::RecordPresentDiagHistory(DISPLAY_SOURCE *this, int a2, char a3)
{
  __int64 v6; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = MEMORY[0xFFFFF78000000320];
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DISPLAY_SOURCE *)((char *)this + 3760), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( *((_DWORD *)this + 990) >= 0xAu )
    *((_DWORD *)this + 990) = 0;
  *((_QWORD *)this + 2 * *((unsigned int *)this + 990) + 475) = v6 * KeQueryTimeIncrement();
  *((_DWORD *)this + 4 * *((unsigned int *)this + 990) + 952) = a2;
  *((_BYTE *)this + 16 * (unsigned int)(*((_DWORD *)this + 990))++ + 3812) = a3;
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
