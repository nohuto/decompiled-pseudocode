/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0010034
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C000FC74 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildCreate @ 0x1C0010288 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C002BD90 (IsMessageParentWindow.c)
 *     DwmChildRectChange @ 0x1C0032E90 (DwmChildRectChange.c)
 *     IsMotherDesktopWindow @ 0x1C0036798 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C00367C0 (DwmAsyncChildDestroy.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SendDwmIconChange @ 0x1C008CDB8 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C008CF08 (DwmAsyncTextChange.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  ULONG_PTR *v5; // rsi
  ULONG_PTR v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int ProcessId; // eax
  __int64 v10; // rdi
  int v11; // r13d
  int v12; // r14d
  int v13; // r15d
  __int64 v14; // rbp
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rax
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  void *v25; // rax
  unsigned __int64 v26; // [rsp+60h] [rbp-98h]
  struct _KPROCESS *v27; // [rsp+70h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-80h]
  __int64 v29[15]; // [rsp+80h] [rbp-78h] BYREF
  const struct tagDESKTOP *v30; // [rsp+100h] [rbp+8h]
  unsigned int v31; // [rsp+108h] [rbp+10h]
  ULONG_PTR *v32; // [rsp+110h] [rbp+18h]
  unsigned __int64 v33; // [rsp+118h] [rbp+20h]

  v31 = a2;
  v30 = a1;
  v2 = (unsigned int)a2;
  v3 = gSharedInfo[1];
  v26 = v3;
  v33 = v3 + 32LL * giheLast;
  v32 = (ULONG_PTR *)gpKernelHandleTable;
  v4 = v33;
  if ( v3 <= v33 )
  {
    v5 = (ULONG_PTR *)gpKernelHandleTable;
    do
    {
      if ( *(_BYTE *)(v3 + 24) == 1 )
      {
        v6 = *v5;
        BugCheckParameter2 = v6;
        if ( *(const struct tagDESKTOP **)(v6 + 24) == a1 )
        {
          if ( !(unsigned int)IsMotherDesktopWindow(v6, a2, v2) )
          {
            if ( (_DWORD)v2 )
            {
              if ( !(unsigned int)IsDesktopWindow() && (unsigned int)IsMessageParentWindow() )
                GetDesktopWindow(v8);
              memset(v29, 0, 0x28uLL);
              GetWindowCompositionInfo(v6, v29);
              v27 = *(struct _KPROCESS **)(**(_QWORD **)(v6 + 16) + 544LL);
              ProcessId = (unsigned int)PsGetProcessId(v27);
              v10 = *(_QWORD *)(v6 + 40);
              v11 = ProcessId;
              v12 = *(_DWORD *)(v10 + 232);
              v13 = *(_DWORD *)(v10 + 24);
              v14 = ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL);
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v27);
              ClassStyle = DwmGetClassStyle(v6);
              v20 = (void *)ReferenceDwmApiPort(v18, v17, v19);
              DwmAsyncChildCreate(v20, v13, v12, ClassStyle, (__int64)v29, v14, v10 + 88, v11, ProcessSequenceNumber);
              DwmChildRectChange(BugCheckParameter2);
              if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 26LL) & 8) != 0 )
              {
                if ( (unsigned int)IsTopLevelWindow(BugCheckParameter2) )
                {
                  SendDwmIconChange(BugCheckParameter2);
                  v25 = (void *)ReferenceDwmApiPort(v23, v22, v24);
                  DwmAsyncTextChange(v25);
                }
              }
              v3 = v26;
              v4 = v33;
            }
            else
            {
              v21 = (void *)ReferenceDwmApiPort(v7, a2, v2);
              DwmAsyncChildDestroy(v21);
            }
            v2 = v31;
          }
          a1 = v30;
        }
        v5 = v32;
      }
      v3 += 32LL;
      v5 += 3;
      v26 = v3;
      v32 = v5;
    }
    while ( v3 <= v4 );
  }
}
