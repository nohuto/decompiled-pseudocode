/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C000D5F4
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000CF70 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rcx
  REGHANDLE EtwHandle; // rax
  bool v6; // zf

  v2 = *((_DWORD *)this + 1972);
  if ( *((_QWORD *)this + 985) > (unsigned __int64)qword_1C004E2A0 )
  {
    v3 = v2 + dword_1C004E2AC;
    *((_DWORD *)this + 1972) = v2 + dword_1C004E2AC;
    if ( v3 > dword_1C004E2A8
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 987) > (unsigned __int64)qword_1C004E2B0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v6 = bTracingEnabled == 0;
      *((_QWORD *)this + 987) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1972) = 0;
      if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, &EventPerformanceWarning);
    }
  }
  else if ( v2 )
  {
    *((_DWORD *)this + 1972) = v2 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 985, 0LL);
}
