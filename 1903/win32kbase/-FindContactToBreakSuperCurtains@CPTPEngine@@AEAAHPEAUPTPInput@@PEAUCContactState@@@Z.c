/*
 * XREFs of ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C0196618
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0197AA8 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::FindContactToBreakSuperCurtains(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // r11d
  int v5; // edi
  _DWORD *i; // rsi
  struct CContactState *v7; // rbx
  __int64 v8; // rax

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    for ( i = (_DWORD *)((char *)a2 + 60); ; i += 24 )
    {
      v7 = (CPTPEngine *)((char *)this + 296 * (unsigned int)(*i % *((_DWORD *)this + 4)) + 1160);
      if ( a3 != v7 && (*(_DWORD *)v7 & 0x8000000) != 0 && ((*(_DWORD *)v7 & 1) != 0 || *((_DWORD *)v7 + 73) == 1) )
      {
        v8 = *((_QWORD *)a3 + 2);
        if ( ((int)((HIDWORD(*((_QWORD *)v7 + 2)) - HIDWORD(v8)) * (HIDWORD(*((_QWORD *)v7 + 2)) - HIDWORD(v8))
                  + (*((_QWORD *)v7 + 2) - v8) * (*((_QWORD *)v7 + 2) - v8)) <= (unsigned __int64)*((unsigned int *)this
                                                                                                  + 73)
           || (int)((HIDWORD(*((_QWORD *)v7 + 2)) - HIDWORD(*((_QWORD *)a3 + 2)))
                  * (HIDWORD(*((_QWORD *)v7 + 2)) - HIDWORD(*((_QWORD *)a3 + 2)))
                  + (*((_QWORD *)v7 + 2) - v8) * (*((_QWORD *)v7 + 2) - v8)) <= (unsigned __int64)*((unsigned int *)this
                                                                                                  + 74))
          && *(_QWORD *)a2 - *((_QWORD *)v7 + 9) < *((_QWORD *)this + 12)
                                                 * (unsigned __int64)*((unsigned int *)this + 45)
                                                 / 0x3E8 )
        {
          break;
        }
      }
      if ( ++v5 >= v3 )
        return v4;
    }
    return 1;
  }
  return v4;
}
