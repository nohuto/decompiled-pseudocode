/*
 * XREFs of ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C015C314
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C015D80C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::FindContactToBreakSuperCurtains(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r9d
  int v6; // r11d
  _DWORD *i; // rbx
  struct CContactState *v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  v6 = 0;
  if ( v3 )
  {
    for ( i = (_DWORD *)((char *)a2 + 56); ; i += 24 )
    {
      v8 = (CPTPEngine *)((char *)this + 296 * (unsigned int)(*i % *((_DWORD *)this + 4)) + 1192);
      if ( a3 != v8 && (*(_DWORD *)v8 & 0x8000000) != 0 && ((*(_DWORD *)v8 & 1) != 0 || *((_DWORD *)v8 + 73) == 1) )
      {
        v9 = *((_QWORD *)v8 + 2);
        v10 = *(_QWORD *)a2 - *((_QWORD *)v8 + 9);
        v11 = (int)((HIDWORD(v9) - HIDWORD(*((_QWORD *)a3 + 2))) * (HIDWORD(v9) - HIDWORD(*((_QWORD *)a3 + 2)))
                  + (v9 - *((_QWORD *)a3 + 2)) * (v9 - *((_QWORD *)a3 + 2)));
        if ( (v11 <= *((unsigned int *)this + 73) || v11 <= *((unsigned int *)this + 74))
          && v10 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 45) / 0x3E8 )
        {
          break;
        }
      }
      if ( ++v6 >= v3 )
        return v4;
    }
    return 1;
  }
  return v4;
}
