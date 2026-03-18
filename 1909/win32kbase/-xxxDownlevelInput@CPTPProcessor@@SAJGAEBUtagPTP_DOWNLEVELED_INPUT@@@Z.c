/*
 * XREFs of ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A704
 * Callers:
 *     NtUserDownlevelTouchpad @ 0x1C0114950 (NtUserDownlevelTouchpad.c)
 * Callees:
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C016F3C4 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 *     ?UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C017346C (-UnreferenceFrameExternal@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C017A1DC (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::xxxDownlevelInput(CTouchProcessor *a1, const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  struct tagTHREADINFO *v2; // rdi
  __int16 v4; // si
  const struct CPointerInputFrame *v5; // rax
  CTouchProcessor *v6; // rcx
  const struct CPointerInputFrame *v7; // rbx
  unsigned int v8; // edi

  v2 = gptiCurrent;
  v4 = (__int16)a1;
  v5 = CTouchProcessor::ReferenceFrameFromId(a1, (unsigned __int16)a1);
  v7 = v5;
  if ( v5 )
  {
    if ( (*((_DWORD *)v5 + 28) & 0x200) == 0 )
    {
      v8 = -1073741811;
      goto LABEL_6;
    }
    *((_WORD *)v2 + 560) = v4;
    *((_QWORD *)v2 + 141) = *((_QWORD *)v5 + 8);
  }
  else if ( v4 != *((_WORD *)v2 + 560) )
  {
    return (unsigned int)-1073741790;
  }
  v8 = CPTPProcessor::xxxDownlevelInput(v5, a2);
LABEL_6:
  if ( v7 )
    CTouchProcessor::UnreferenceFrameExternal(v6, v7);
  return v8;
}
