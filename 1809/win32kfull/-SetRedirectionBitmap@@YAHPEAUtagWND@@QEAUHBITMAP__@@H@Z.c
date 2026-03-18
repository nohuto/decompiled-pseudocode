/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0073E98
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01D3E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01D4310 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     GreAccNotifyWindow @ 0x1C0099494 (GreAccNotifyWindow.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD *Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi

  v5 = 0;
  Prop = (_QWORD *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (_QWORD *)v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp(a1, (unsigned __int16)atomLayer, v10, 1LL) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v5;
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
  else
  {
    if ( a3 )
    {
      v11 = (unsigned __int16)atomLayer;
      v12 = *((_QWORD *)a1 + 15);
      if ( atomLayer == word_1C0317660 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      v13 = (_QWORD *)RealInternalRemoveProp(v12, v11, 1LL);
      v14 = v13;
      if ( !v13 )
        return 1;
      v8 = *v13;
      DeleteMaybeSpecialRgn(v13[5]);
      Win32FreePool(v14);
      goto LABEL_6;
    }
    if ( Prop )
    {
      v8 = *Prop;
      *Prop = 0LL;
      Prop[2] = 0LL;
      Prop[3] = 0LL;
      DeleteMaybeSpecialRgn(Prop[5]);
      Prop[5] = 0LL;
LABEL_6:
      if ( v8 )
        GreAccNotifyWindow(v8, 0LL);
    }
  }
  return 1;
}
