/*
 * XREFs of ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02441B8
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     SetDisplayAffinity @ 0x1C02444BC (SetDisplayAffinity.c)
 * Callees:
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?Add@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z @ 0x1C024417C (-Add@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@QEAAJAEBQEAUtagWND@@@Z.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C02443DC (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall ChangeWindowTreeProtection(struct tagWND *a1, int a2)
{
  unsigned int v3; // r15d
  struct tagBWL *v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 *i; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rdi
  struct tagWND **v18; // rsi
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-8h]
  int v22; // [rsp+2Ch] [rbp-4h]
  struct tagWND *v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+80h] [rbp+50h] BYREF

  v23 = a1;
  v3 = 0;
  v5 = (struct tagBWL *)BuildHwndList(a1);
  if ( v5 )
  {
    v20 = 0LL;
    v21 = 0;
    v22 = 0;
    if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v20, &v23) >= 0 )
    {
      v8 = *((_QWORD *)a1 + 2);
      v9 = 0LL;
      v10 = *(_QWORD *)(v8 + 416);
      if ( a1 == *(struct tagWND **)(v8 + 1392) )
      {
        v11 = *(_QWORD *)(v8 + 1400);
        if ( v11 )
          v9 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL);
      }
      for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
      {
        LOBYTE(v6) = 1;
        v13 = HMValidateHandleNoSecure(*i, v6, v7);
        v24 = v13;
        v6 = v13;
        if ( v13 && (*(_BYTE *)(*(_QWORD *)(v13 + 40) + 27LL) & 0x20) != 0 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL);
          if ( a2 )
          {
            if ( v14 != v10 && v14 != v9 )
              goto LABEL_25;
          }
          if ( (int)CDynamicArray<tagWND *,2003858261>::Add((__int64)&v20, &v24) < 0 )
            goto LABEL_25;
        }
      }
    }
    v15 = v21;
    v16 = 0LL;
    v3 = 1;
    if ( v21 )
    {
      v17 = v20;
      while ( 1 )
      {
        if ( !(unsigned int)ProtectWindowBitmap(*(struct tagWND **)(v17 + 8 * v16), a2) )
        {
          v3 = 0;
          if ( a2 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_26;
      }
      if ( (_DWORD)v16 )
      {
        v18 = (struct tagWND **)(v17 + 8 * v16);
        do
        {
          ProtectWindowBitmap(*--v18, 0);
          LODWORD(v16) = v16 - 1;
        }
        while ( (_DWORD)v16 );
      }
    }
    else
    {
LABEL_25:
      v17 = v20;
    }
LABEL_26:
    FreeHwndList(v5);
    if ( v17 )
      Win32FreePool(v17);
  }
  return v3;
}
