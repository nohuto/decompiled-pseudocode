/*
 * XREFs of ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1801EBC7C
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801ECE74 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1801ED050 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x1801F39B0 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801F4360 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QpcTimeConverter::QpcToMicroSec(QpcTimeConverter *this, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( *(_QWORD *)this )
  {
    *a3 = *((_QWORD *)this + 1) * (a2 / *(_QWORD *)this)
        + *((_QWORD *)this + 1) * (a2 - *(_QWORD *)this * (a2 / *(_QWORD *)this)) / *(_QWORD *)this;
    return 1LL;
  }
  else
  {
    *a3 = 0LL;
    return 0LL;
  }
}
