/*
 * XREFs of SynthesizeMouseInputData @ 0x1C012EA00
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C00B4D40 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0134314 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall SynthesizeMouseInputData(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  result = 0LL;
  if ( v6 )
    return CMouseProcessor::Extensibility_SynthesizeMouseInput(v6, a1, a2, a3);
  return result;
}
