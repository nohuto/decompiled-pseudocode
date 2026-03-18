/*
 * XREFs of ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00D5710
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00D37C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(CCD_TOPOLOGY *this, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    *(_QWORD *)PathDescriptor &= ~a2;
  }
}
