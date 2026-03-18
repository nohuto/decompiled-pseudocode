/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0025FC8
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  const GUID *v7; // r8
  REGHANDLE EtwHandle; // rax
  bool v9; // zf

  v4 = *((_DWORD *)this + 1972);
  if ( *((_QWORD *)this + 985) <= (unsigned __int64)qword_1C004D2A0 )
  {
    if ( v4 )
      *((_DWORD *)this + 1972) = v4 - 1;
  }
  else
  {
    v5 = (unsigned int)(v4 + dword_1C004D2AC);
    *((_DWORD *)this + 1972) = v5;
    if ( (unsigned int)v5 > dword_1C004D2A8
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 987) > (unsigned __int64)qword_1C004D2B0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer, v5, a3) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v9 = bTracingEnabled == 0;
      *((_QWORD *)this + 987) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1972) = 0;
      if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v6, &EventPerformanceWarning, v7, 5);
    }
  }
  _InterlockedExchange64((volatile __int64 *)this + 985, 0LL);
}
