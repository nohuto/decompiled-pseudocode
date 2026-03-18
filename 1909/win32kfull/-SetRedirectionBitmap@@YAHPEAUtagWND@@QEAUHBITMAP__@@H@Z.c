/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00326C0
 * Callers:
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9710 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     GreAccNotifyWindow @ 0x1C007B710 (GreAccNotifyWindow.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  _QWORD *Prop; // rdi
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi

  v5 = 0;
  Prop = (_QWORD *)GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v11 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = (_QWORD *)v11;
    if ( v11 )
    {
      if ( !(unsigned int)InternalSetProp((__int64)a1, (unsigned __int16)atomLayer, v11, 1u) )
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
      v12 = (unsigned __int16)atomLayer;
      v13 = *((_QWORD *)a1 + 18);
      if ( atomLayer == word_1C032A65C )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      v14 = (_QWORD *)RealInternalRemoveProp(v13, v12, 1LL, v8);
      v15 = v14;
      if ( !v14 )
        return 1;
      v9 = *v14;
      DeleteMaybeSpecialRgn(v14[5]);
      Win32FreePool(v15);
      goto LABEL_6;
    }
    if ( Prop )
    {
      v9 = *Prop;
      *Prop = 0LL;
      Prop[2] = 0LL;
      Prop[3] = 0LL;
      DeleteMaybeSpecialRgn(Prop[5]);
      Prop[5] = 0LL;
LABEL_6:
      if ( v9 )
        GreAccNotifyWindow(v9, 0LL);
    }
  }
  return 1;
}
