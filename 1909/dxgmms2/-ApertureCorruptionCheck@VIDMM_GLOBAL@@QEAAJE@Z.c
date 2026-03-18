/*
 * XREFs of ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C00251F8
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0004330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00AB774 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x1C0028F04 (-CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ApertureCorruptionCheck(VIDMM_GLOBAL *this, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 v3; // bp
  VIDMM_APERTURE_SEGMENT *v5; // rcx
  int v6; // esi
  __int64 v8; // rbx
  _QWORD *v9; // rax
  unsigned int *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = a2;
  if ( !*((_DWORD *)this + 926) )
    return 0LL;
  while ( 1 )
  {
    v5 = *(VIDMM_APERTURE_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v2);
    v6 = (*((_DWORD *)v5 + 20) & 1) != 0 ? VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(v5, &v10, v3) : 0;
    if ( v6 < 0 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *((_DWORD *)this + 926) )
      return 0LL;
  }
  if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
  {
    v8 = *((_QWORD *)this + 3);
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2);
    v9[6] = (unsigned int)v2;
    v9[7] = v10;
    v9[3] = 270LL;
    v9[4] = 37LL;
    v9[5] = v8;
    WdLogEvent5_WdCriticalError(v9);
  }
  return (unsigned int)v6;
}
