/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800284F8
 * Callers:
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18002819C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800BDDC0 (-HasPrimary@CDesktopRenderTarget@@UEAA_NXZ.c)
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x1800D2948 (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CHwndRenderTarget *,0>::InsertAt(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  __int64 v6; // rdx
  _QWORD *v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v10; // r9
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a2;
  v3 = DynArrayImpl<0>::Grow(a1, 8, 1, 0, (__int64)&v11);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1D8u, 0LL);
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 24);
    v7 = *(_QWORD **)a1;
    *(_DWORD *)(a1 + 24) = v6 + 1;
    if ( (_DWORD)v6 )
    {
      v10 = &v7[v6];
      do
      {
        LODWORD(v6) = v6 - 1;
        *v10-- = v7[(unsigned int)v6];
      }
      while ( (_DWORD)v6 );
    }
    v8 = v11;
    if ( v11 >= v7 && v11 < &v7[*(unsigned int *)(a1 + 24) - 1] )
      v8 = v11 + 1;
    *v7 = *v8;
  }
  return v5;
}
