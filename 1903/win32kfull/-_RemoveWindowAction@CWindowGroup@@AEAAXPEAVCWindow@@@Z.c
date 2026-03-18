/*
 * XREFs of ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C023E36C
 * Callers:
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C023D354 (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C023DFC4 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C023E2E4 (-_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z.c)
 */

void __fastcall CWindowGroup::_RemoveWindowAction(CWindowGroup *this, struct CWindow *a2)
{
  int v2; // r8d
  struct CWindow *v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  struct CWindow *v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h]
  struct CWindow *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)a2 + 6);
  v3 = a2;
  if ( (unsigned int)(v2 - 1) <= 1 && v2 )
    *((_QWORD *)this + (unsigned int)(v2 - 1) + 5) = 0LL;
  v4 = *((_DWORD *)this + 7) >> 5;
  v7 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)this + 7) & 0x1F));
  v5 = 37
     * (BYTE6(v7)
      + 37
      * (BYTE5(v7)
       + 37
       * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883LL)))))));
  v6 = (struct CWindow *)(*((_QWORD *)this + 4) + 8LL * (((_DWORD)v5 + HIBYTE(v7)) & (unsigned int)(v4 - 1)));
  if ( (*(_QWORD *)v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = v8;
  while ( (*(_QWORD *)v6 & 1) == 0 )
  {
    if ( *(struct CWindow **)v6 == v3 )
    {
      *(_QWORD *)v6 = *(_QWORD *)v3;
      --*((_DWORD *)this + 6);
      *(_QWORD *)v3 |= 0x8000000000000002uLL;
      break;
    }
    v6 = *(struct CWindow **)v6;
  }
  CWindowGroup::_FreeWindow((CWindowGroup *)0x8000000000000002LL, &v8, v5, v4);
}
