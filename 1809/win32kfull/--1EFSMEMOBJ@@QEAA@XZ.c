/*
 * XREFs of ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C007E9E8
 * Callers:
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C007D4F0 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C007E7E4 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C029C314 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     <none>
 */

void __fastcall EFSMEMOBJ::~EFSMEMOBJ(EFSMEMOBJ *this)
{
  _DWORD *v2; // rcx
  ULONG v3; // eax

  if ( *(_QWORD *)this )
  {
    **((_DWORD **)this + 1) = *(_DWORD *)(*(_QWORD *)this + 64LL);
    v2 = *(_DWORD **)this;
    v3 = *(_DWORD *)(*(_QWORD *)this + 28LL);
    if ( v3 )
    {
      EngSetLastError(v3);
      v2 = *(_DWORD **)this;
    }
    FreeTmpBuffer(v2);
  }
  else
  {
    **((_DWORD **)this + 1) = 0;
    EngSetLastError(0xEu);
  }
}
