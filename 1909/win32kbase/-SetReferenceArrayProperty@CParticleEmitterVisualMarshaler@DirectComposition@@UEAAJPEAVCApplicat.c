/*
 * XREFs of ?SetReferenceArrayProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B4C00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C007BED0 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A3298 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?ClearAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B4100 (-ClearAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // esi
  unsigned int v10; // r13d

  v6 = 0;
  v9 = 0;
  *a6 = 0;
  if ( a4 || !a5 )
  {
    if ( a3 == 83 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= a5 )
          break;
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 120LL))(
                a4[v10],
                111LL) )
          v9 = -1073741811;
        ++v10;
      }
      while ( v9 >= 0 );
      if ( v9 >= 0 )
      {
        DirectComposition::CParticleEmitterVisualMarshaler::ClearAttractors(this, a2);
        *((_DWORD *)this + 124) = a5;
        *((_QWORD *)this + 61) = a4;
        *((_DWORD *)this + 125) = 0;
        *a6 = 1;
        *((_DWORD *)this + 127) |= 0x100000u;
        if ( *((_DWORD *)this + 124) )
        {
          do
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 61) + 8LL * v6++));
          while ( v6 < *((_DWORD *)this + 124) );
        }
      }
    }
    else
    {
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
