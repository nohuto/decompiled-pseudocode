/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UINPUT_SPACE_REGION@@$0A@@@QEAAJPEFBUINPUT_SPACE_REGION@@I@Z @ 0x1801A5FFC
 * Callers:
 *     ?ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180099574 (-ConfigureMitOutputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<INPUT_SPACE_REGION,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 84, 1, a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC3u, 0LL);
    }
    else
    {
      v6 = *(_QWORD *)a1 + 84 * v2;
      *(_OWORD *)v6 = *(_OWORD *)a2;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v6 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v6 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v6 + 64) = *(_OWORD *)(a2 + 64);
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  return v5;
}
