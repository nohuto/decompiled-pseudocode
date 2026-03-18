/*
 * XREFs of ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C022B8B4
 * Callers:
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C022BBCC (SetDisplayAffinity.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C022B878 (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C022BAEC (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall ChangeWindowTreeProtection(struct tagWND *a1, int a2)
{
  unsigned int v3; // r15d
  struct tagBWL *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 *i; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rdi
  struct tagWND **v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-8h]
  int v21; // [rsp+2Ch] [rbp-4h]
  struct tagWND *v22; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+80h] [rbp+50h] BYREF

  v22 = a1;
  v3 = 0;
  v5 = BuildHwndList(a1, 1, 0LL);
  if ( v5 )
  {
    v19 = 0LL;
    v20 = 0;
    v21 = 0;
    if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v19, &v22) >= 0 )
    {
      v7 = *((_QWORD *)a1 + 2);
      v8 = 0LL;
      v9 = *(_QWORD *)(v7 + 424);
      if ( a1 == *(struct tagWND **)(v7 + 1368) )
      {
        v10 = *(_QWORD *)(v7 + 1376);
        if ( v10 )
          v8 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL);
      }
      for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
      {
        LOBYTE(v6) = 1;
        v12 = HMValidateHandleNoSecure(*i, v6);
        v23 = v12;
        v6 = v12;
        if ( v12 && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 27LL) & 0x20) != 0 )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL);
          if ( a2 )
          {
            if ( v13 != v9 && v13 != v8 )
              goto LABEL_25;
          }
          if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v19, &v23) < 0 )
            goto LABEL_25;
        }
      }
    }
    v14 = v20;
    v15 = 0LL;
    v3 = 1;
    if ( v20 )
    {
      v16 = v19;
      while ( 1 )
      {
        if ( !(unsigned int)ProtectWindowBitmap(*(struct tagWND **)(v16 + 8 * v15), a2) )
        {
          v3 = 0;
          if ( a2 )
            break;
        }
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v14 )
          goto LABEL_26;
      }
      if ( (_DWORD)v15 )
      {
        v17 = (struct tagWND **)(v16 + 8 * v15);
        do
        {
          ProtectWindowBitmap(*--v17, 0);
          LODWORD(v15) = v15 - 1;
        }
        while ( (_DWORD)v15 );
      }
    }
    else
    {
LABEL_25:
      v16 = v19;
    }
LABEL_26:
    FreeHwndList(v5);
    if ( v16 )
      Win32FreePool(v16);
  }
  return v3;
}
