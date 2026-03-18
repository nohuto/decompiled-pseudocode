/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00098F4
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0009570 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildCreate @ 0x1C0009B30 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0009C60 (DwmGetClassStyle.c)
 *     DwmAsyncChildDestroy @ 0x1C0009CD4 (DwmAsyncChildDestroy.c)
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     IsMotherDesktopWindow @ 0x1C0071CF4 (IsMotherDesktopWindow.c)
 *     DwmChildRectChange @ 0x1C0072D4C (DwmChildRectChange.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C00765E0 (IsMessageParentWindow.c)
 *     DwmAsyncTextChange @ 0x1C00C47BC (DwmAsyncTextChange.c)
 *     SendDwmIconChange @ 0x1C00C4848 (SendDwmIconChange.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  ULONG_PTR *v5; // rsi
  ULONG_PTR v6; // rsi
  unsigned int ProcessId; // eax
  __int64 v8; // rdi
  int v9; // r13d
  int v10; // r14d
  int v11; // r15d
  __int64 v12; // rbp
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // esi
  void *v15; // rax
  void *v16; // rax
  void *v17; // rax
  unsigned __int64 v18; // [rsp+60h] [rbp-98h]
  struct _KPROCESS *v19; // [rsp+70h] [rbp-88h]
  ULONG_PTR v20; // [rsp+78h] [rbp-80h]
  __int64 v21[15]; // [rsp+80h] [rbp-78h] BYREF
  const struct tagDESKTOP *v22; // [rsp+100h] [rbp+8h]
  unsigned int v23; // [rsp+108h] [rbp+10h]
  ULONG_PTR *v24; // [rsp+110h] [rbp+18h]
  unsigned __int64 v25; // [rsp+118h] [rbp+20h]

  v23 = a2;
  v22 = a1;
  v2 = (unsigned int)a2;
  v3 = gSharedInfo[1];
  v18 = v3;
  v25 = v3 + 32LL * giheLast;
  v24 = (ULONG_PTR *)gpKernelHandleTable;
  v4 = v25;
  if ( v3 <= v25 )
  {
    v5 = (ULONG_PTR *)gpKernelHandleTable;
    do
    {
      if ( *(_BYTE *)(v3 + 24) == 1 )
      {
        v6 = *v5;
        v20 = v6;
        if ( *(const struct tagDESKTOP **)(v6 + 24) == a1 )
        {
          if ( !(unsigned int)IsMotherDesktopWindow(v6, a2, v2) )
          {
            if ( (_DWORD)v2 )
            {
              if ( !(unsigned int)IsDesktopWindow() && (unsigned int)IsMessageParentWindow() )
                GetDesktopWindow();
              memset(v21, 0, 0x28uLL);
              GetWindowCompositionInfo(v6, v21);
              v19 = *(struct _KPROCESS **)(**(_QWORD **)(v6 + 16) + 544LL);
              ProcessId = (unsigned int)PsGetProcessId(v19);
              v8 = *(_QWORD *)(v6 + 40);
              v9 = ProcessId;
              v10 = *(_DWORD *)(v8 + 232);
              v11 = *(_DWORD *)(v8 + 24);
              v12 = ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL);
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v19);
              ClassStyle = DwmGetClassStyle(v6);
              v15 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildCreate(v15, v11, v10, ClassStyle, (__int64)v21, v12, v8 + 88, v9, ProcessSequenceNumber);
              DwmChildRectChange(v20);
              if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 26LL) & 8) != 0 )
              {
                if ( (unsigned int)IsTopLevelWindow(v20) )
                {
                  SendDwmIconChange(v20);
                  v17 = (void *)ReferenceDwmApiPort();
                  DwmAsyncTextChange(v17);
                }
              }
              v3 = v18;
              v4 = v25;
            }
            else
            {
              v16 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildDestroy(v16);
            }
            v2 = v23;
          }
          a1 = v22;
        }
        v5 = v24;
      }
      v3 += 32LL;
      v5 += 3;
      v18 = v3;
      v24 = v5;
    }
    while ( v3 <= v4 );
  }
}
