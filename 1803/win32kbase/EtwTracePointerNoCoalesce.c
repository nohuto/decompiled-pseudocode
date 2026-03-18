/*
 * XREFs of EtwTracePointerNoCoalesce @ 0x1C00AC540
 * Callers:
 *     ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01103B0 (-DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C011DC48 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     McTemplateK0hhq @ 0x1C00AE3D8 (McTemplateK0hhq.c)
 */

__int64 __fastcall EtwTracePointerNoCoalesce(int a1, char a2, int a3, int a4)
{
  __int64 result; // rax

  if ( a4 )
  {
    if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
      return McTemplateK0hhq(a1, (unsigned int)&PointerDelegateNoCoalesce, a3, (unsigned __int16)a1, a2, a3);
  }
  else if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
  {
    return McTemplateK0hhq(a1, (unsigned int)&PointerNoCoalesce, a3, (unsigned __int16)a1, a2, a3);
  }
  return result;
}
