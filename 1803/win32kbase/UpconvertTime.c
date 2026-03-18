/*
 * XREFs of UpconvertTime @ 0x1C0068DB0
 * Callers:
 *     NtMITUpdateInputGlobals @ 0x1C00B5350 (NtMITUpdateInputGlobals.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0134314 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01351B4 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UpconvertTime(unsigned int a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax

  if ( !a1 )
    return 0LL;
  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v3 = HIDWORD(v2);
  if ( (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 96 )
  {
    if ( a1 > (unsigned int)v2 )
      v3 = (unsigned int)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 96)
                        - 1);
  }
  return a1 | (v3 << 32);
}
