/*
 * XREFs of ?StartInertia@CPositionMotion@@QEAAXMMMMMM_N0@Z @ 0x18020F444
 * Callers:
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180207AB0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPositionMotion::StartInertia(
        CPositionMotion *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        char a8,
        bool a9)
{
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 39) = 0;
  *((float *)this + 11) = a3;
  *((float *)this + 46) = a3;
  *((float *)this + 42) = a6;
  *((float *)this + 40) = a4;
  *((float *)this + 47) = a4;
  *((float *)this + 43) = a5;
  CMotion::StartInertia(this, a2, a7, a8, a9);
}
