/*
 * XREFs of ?GetPointerInfoMicroSecTime@QpcTimeConverter@@QEBA_KPEBUtagPOINTER_INFO@@@Z @ 0x180232D18
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237E48 (-ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1802338C8 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 */

unsigned __int64 __fastcall QpcTimeConverter::GetPointerInfoMicroSecTime(
        QpcTimeConverter *this,
        const struct tagPOINTER_INFO *a2)
{
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(this, *((_QWORD *)a2 + 10), &v4) )
    return v4;
  else
    return 1000LL * *((unsigned int *)a2 + 16);
}
