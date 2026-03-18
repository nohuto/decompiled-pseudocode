/*
 * XREFs of ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C01FD3F4
 * Callers:
 *     _lambda_4190402a2c2f59325fec7fff7b4602b2_::operator() @ 0x1C01FC2B0 (_lambda_4190402a2c2f59325fec7fff7b4602b2_--operator().c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C01FD0B8 (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 * Callees:
 *     ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C01FD370 (-_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z.c)
 */

void __fastcall CWindowGroup::_RemoveWindowAction(CWindowGroup *this, struct CWindow *a2)
{
  int v2; // r8d
  struct CWindow *v3; // r11
  unsigned __int64 v4; // r9
  struct CWindow *v5; // rdx
  struct CWindow *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = *((_DWORD *)a2 + 6);
  v3 = a2;
  if ( (unsigned int)(v2 - 1) <= 1 && v2 )
    *((_QWORD *)this + (unsigned int)(v2 - 1) + 5) = 0LL;
  v4 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)this + 7) & 0x1F));
  v5 = (struct CWindow *)(*((_QWORD *)this + 4)
                        + 8
                        * ((HIBYTE(v4)
                          + 37
                          * (BYTE6(v4)
                           + 37
                           * (BYTE5(v4)
                            + 37
                            * (BYTE4(v4)
                             + 37
                             * (((*((_DWORD *)a2 + 2) & (unsigned int)(-1 << (*((_DWORD *)this + 7) & 0x1F))) >> 24)
                              + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))) & ((*((_DWORD *)this + 7) >> 5) - 1)));
  if ( (*(_QWORD *)v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = v6;
  while ( (*(_QWORD *)v5 & 1) == 0 )
  {
    if ( *(struct CWindow **)v5 == v3 )
    {
      *(_QWORD *)v5 = *(_QWORD *)v3;
      --*((_DWORD *)this + 6);
      *(_QWORD *)v3 |= 0x8000000000000002uLL;
      break;
    }
    v5 = *(struct CWindow **)v5;
  }
  CWindowGroup::_FreeWindow((CWindowGroup *)0x8000000000000002LL, &v6);
}
