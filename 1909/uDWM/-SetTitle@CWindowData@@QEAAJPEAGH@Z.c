/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180013C40
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FAF8 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, char *a2, int a3)
{
  CWindowData *v3; // rax
  CWindowData **v4; // rsi
  CWindowData *v5; // rbp
  int v7; // edi
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  char *v11; // rbx
  __int16 v12; // cx
  int v14; // eax
  unsigned int v15; // ebp
  void *v16; // [rsp+28h] [rbp-10h]

  v3 = (CWindowData *)*((_QWORD *)this + 2);
  v4 = (CWindowData **)((char *)this + 16);
  v5 = (CWindowData *)((char *)this + 698);
  v7 = a3 + 1;
  if ( v3 == (CWindowData *)((char *)this + 698) )
  {
    if ( v7 > 26 )
    {
      v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            2LL * v7);
      *v4 = v3;
      if ( !v3 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2011u, v16);
        return 2147942414LL;
      }
    }
  }
  else if ( a3 < 26 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
    v3 = v5;
    *v4 = v5;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, CWindowData **, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
            WPF::g_pProcessHeap,
            v4,
            2LL * v7);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2022u, v16);
      return v15;
    }
    v3 = *v4;
    if ( !*v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2023u, v16);
      return 2147942414LL;
    }
  }
  v8 = v7;
  v9 = 0;
  if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
    v9 = -2147024809;
  if ( v9 < 0 )
  {
    if ( !v8 )
      goto LABEL_13;
  }
  else
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = 2147483646 - v8;
      v11 = (char *)(a2 - (char *)v3);
      while ( v10 + v8 )
      {
        v12 = *(_WORD *)((char *)v3 + (_QWORD)v11);
        if ( !v12 )
          break;
        *(_WORD *)v3 = v12;
        v3 = (CWindowData *)((char *)v3 + 2);
        if ( !--v8 )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      v3 = (CWindowData *)((char *)v3 - 2);
      v9 = -2147024774;
    }
  }
  *(_WORD *)v3 = 0;
LABEL_13:
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2027u, v16);
  return (unsigned int)v9;
}
