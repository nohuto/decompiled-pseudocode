/*
 * XREFs of ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180036B84
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800369B4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowList::RegisterAccentState(__int64 a1, struct CWindowData *a2, int a3)
{
  unsigned int v5; // edx
  __int64 v6; // r11
  _QWORD *v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

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
      v11 = (unsigned __int64)a2;
      v7 = (_QWORD *)(a1 + 536);
      v8 = *(unsigned int *)(a1 + 560);
      DWORD2(v11) = a3;
      v9 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v8 + 1 < (unsigned int)v8 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v9 > *(_DWORD *)(a1 + 556) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 0x10u, 1, &v11);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
      }
      else
      {
        *(_OWORD *)(*v7 + 16 * v8) = v11;
        *(_DWORD *)(a1 + 560) = v9;
      }
    }
  }
  else
  {
    CWindowList::UnregisterAccentState((CWindowList *)a1, a2);
  }
}
