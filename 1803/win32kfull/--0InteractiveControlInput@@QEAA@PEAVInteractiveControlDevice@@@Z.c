/*
 * XREFs of ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C0212A34
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0211EB8 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02126AC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::InteractiveControlInput(
        InteractiveControlInput *this,
        struct InteractiveControlDevice *a2)
{
  unsigned __int64 v2; // r8
  __int16 v3; // ax
  InteractiveControlInput *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v2 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 7) = v2 >> 24;
  LODWORD(v2) = (unsigned __int16)word_1C03202B8;
  v3 = word_1C03202B8 + 1;
  *(_OWORD *)((char *)this + 52) = 0uLL;
  word_1C03202B8 = v3;
  result = this;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 8) = v2;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  return result;
}
