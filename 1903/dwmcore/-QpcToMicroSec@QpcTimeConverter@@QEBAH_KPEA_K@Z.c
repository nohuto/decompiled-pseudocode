/*
 * XREFs of ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180234FD8
 * Callers:
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180234100 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 *     ?GetPointerInfoMicroSecTime@QpcTimeConverter@@QEBA_KPEBUtagPOINTER_INFO@@@Z @ 0x180234428 (-GetPointerInfoMicroSecTime@QpcTimeConverter@@QEBA_KPEBUtagPOINTER_INFO@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180234AA0 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 *     ?TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18023AC60 (-TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18023AE50 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
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
