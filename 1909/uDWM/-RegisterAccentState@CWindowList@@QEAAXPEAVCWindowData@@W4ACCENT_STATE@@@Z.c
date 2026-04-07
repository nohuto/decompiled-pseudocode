/*
 * XREFs of ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002A114
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800286E8 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWindowList::RegisterAccentState(__int64 a1, struct CWindowData *a2, unsigned int a3)
{
  unsigned int v5; // edx
  __int64 v6; // r11
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  void *v11; // [rsp+28h] [rbp-20h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 560) )
    {
      v6 = *(_QWORD *)(a1 + 536);
      while ( *(struct CWindowData **)(v6 + 16LL * v5) != a2 )
      {
        if ( ++v5 >= *(_DWORD *)(a1 + 560) )
          goto LABEL_6;
      }
      *(_DWORD *)(v6 + 16LL * v5 + 8) = a3;
    }
    else
    {
LABEL_6:
      v7 = (_QWORD *)(a1 + 536);
      v8 = *(unsigned int *)(a1 + 560);
      *(_QWORD *)&v12 = a2;
      *((_QWORD *)&v12 + 1) = a3;
      v9 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v11);
      }
      else if ( v9 > *(_DWORD *)(a1 + 556) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 16, 1, &v12);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u, v11);
      }
      else
      {
        *(_OWORD *)(*v7 + 16 * v8) = v12;
        *(_DWORD *)(a1 + 560) = v9;
      }
    }
  }
  else
  {
    CWindowList::UnregisterAccentState((CWindowList *)a1, a2);
  }
}
