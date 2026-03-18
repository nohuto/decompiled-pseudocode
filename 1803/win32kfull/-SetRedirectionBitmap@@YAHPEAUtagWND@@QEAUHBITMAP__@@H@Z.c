/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0074FB8
 * Callers:
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01B1338 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01B1A80 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     GreAccNotifyWindow @ 0x1C00B536C (GreAccNotifyWindow.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  _QWORD *v3; // r14
  unsigned int v7; // ebx
  _QWORD *Prop; // rdi
  __int64 v9; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi

  v3 = (_QWORD *)((char *)a1 + 120);
  v7 = 0;
  Prop = (_QWORD *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v11 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (_QWORD *)v11;
    if ( v11 )
    {
      if ( !(unsigned int)RealInternalSetProp(v3, (unsigned __int16)atomLayer, v11, 1LL) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v7;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    Prop[2] = 0LL;
    Prop[3] = 0LL;
    if ( (HBITMAP)*Prop != a2 )
    {
      GreAccNotifyWindow(*Prop, 0LL);
      GreAccNotifyWindow(a2, *(_QWORD *)a1);
      *Prop = a2;
    }
  }
  else if ( a3 )
  {
    v12 = (_QWORD *)RealInternalRemoveProp(*v3, (unsigned __int16)atomLayer, 1LL);
    v13 = v12;
    if ( v12 )
    {
      v9 = *v12;
      DeleteMaybeSpecialRgn(v12[5]);
      Win32FreePool(v13);
LABEL_6:
      if ( v9 )
        GreAccNotifyWindow(v9, 0LL);
    }
  }
  else if ( Prop )
  {
    v9 = *Prop;
    *Prop = 0LL;
    Prop[2] = 0LL;
    Prop[3] = 0LL;
    DeleteMaybeSpecialRgn(Prop[5]);
    Prop[5] = 0LL;
    goto LABEL_6;
  }
  return 1;
}
