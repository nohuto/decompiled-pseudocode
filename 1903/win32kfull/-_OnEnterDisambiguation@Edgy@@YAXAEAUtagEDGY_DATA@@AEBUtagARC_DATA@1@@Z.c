/*
 * XREFs of ?_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01F7C50
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01F7CC8 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::_OnEnterDisambiguation(Edgy *this, struct tagEDGY_DATA *a2, const struct Edgy::tagARC_DATA *a3)
{
  __int64 v5; // rdx

  EtwTraceEdgyDetectionStart(this, a2, a3);
  v5 = *(_QWORD *)a2;
  *((_QWORD *)this + 23) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 26) = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 24) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 12);
  *((_QWORD *)this + 22) = *(_QWORD *)(v5 + 64);
  *((_QWORD *)this + 28) = v5;
}
