/*
 * XREFs of ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01799B0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0178E10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C017DA7C (-ivRootDeliverPTPInertiaInput@CHidInput@@QEAAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CPTPProcessor::SendPTPInertiaEndToContainer(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v4; // r10

  if ( *((_DWORD *)a2 + 1) == 2 || *((_DWORD *)a2 + 1) == 3 )
  {
    v2 = *((_QWORD *)this + 75);
    v3 = 0LL;
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 144) + 16LL);
    if ( v4 )
    {
      if ( v2 )
        v3 = *(_QWORD *)(v2 + 104);
      CHidInput::ivRootDeliverPTPInertiaInput(
        this,
        *(void **)(v4 + 16),
        v3,
        -__CFSHR__(*(_DWORD *)(v4 + 184), 14),
        (CPTPProcessor *)((char *)this + 416));
    }
  }
}
