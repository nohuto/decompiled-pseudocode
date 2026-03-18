/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00C7A14 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     IsMotherDesktopWindow @ 0x1C001C7DC (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C001C920 (DwmAsyncChildDestroy.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C007A768 (IsMessageParentWindow.c)
 *     DwmChildRectChange @ 0x1C00A746C (DwmChildRectChange.c)
 *     SendDwmIconChange @ 0x1C00B7154 (SendDwmIconChange.c)
 *     DwmAsyncChildCreate @ 0x1C00C8048 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     DwmAsyncTextChange @ 0x1C010E150 (DwmAsyncTextChange.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int ProcessId; // eax
  __int64 v13; // rdi
  int v14; // r13d
  int v15; // r14d
  int v16; // r15d
  __int64 v17; // rbp
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // rax
  unsigned __int64 v29; // [rsp+60h] [rbp-98h]
  struct _KPROCESS *v30; // [rsp+70h] [rbp-88h]
  unsigned __int64 v31; // [rsp+78h] [rbp-80h]
  __int64 v32[15]; // [rsp+80h] [rbp-78h] BYREF
  const struct tagDESKTOP *v33; // [rsp+100h] [rbp+8h]
  __int64 *v34; // [rsp+110h] [rbp+18h]
  unsigned __int64 v35; // [rsp+118h] [rbp+20h]

  v33 = a1;
  v1 = gSharedInfo[1];
  v29 = v1;
  v35 = v1 + 32LL * giheLast;
  v34 = (__int64 *)gpKernelHandleTable;
  v2 = v35;
  if ( v1 <= v35 )
  {
    v3 = (__int64 *)gpKernelHandleTable;
    do
    {
      if ( *(_BYTE *)(v1 + 24) == 1 )
      {
        v4 = *v3;
        v31 = v4;
        if ( *(const struct tagDESKTOP **)(v4 + 24) == a1 )
        {
          if ( !(unsigned int)IsMotherDesktopWindow(v4) )
          {
            if ( v7 )
            {
              LOBYTE(v8) = IsDesktopWindow(v6);
              if ( !v8 )
              {
                LOBYTE(v10) = IsMessageParentWindow(v9);
                if ( v10 )
                  GetDesktopWindow(v11);
              }
              memset(v32, 0, 0x28uLL);
              GetWindowCompositionInfo(v4, (__int64)v32);
              v30 = *(struct _KPROCESS **)(**(_QWORD **)(v4 + 16) + 544LL);
              ProcessId = (unsigned int)PsGetProcessId(v30);
              v13 = *(_QWORD *)(v4 + 40);
              v14 = ProcessId;
              v15 = *(_DWORD *)(v13 + 232);
              v16 = *(_DWORD *)(v13 + 24);
              v17 = ***(_QWORD ***)(*(_QWORD *)(v4 + 24) + 8LL);
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v30);
              ClassStyle = DwmGetClassStyle(v4);
              v22 = (void *)ReferenceDwmApiPort(v21, v20);
              DwmAsyncChildCreate(v22, v16, v15, ClassStyle, (__int64)v32, v17, v13 + 88, v14, ProcessSequenceNumber);
              DwmChildRectChange(v31, v23, v24);
              if ( (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 26LL) & 8) != 0 )
              {
                if ( (unsigned int)IsTopLevelWindow(v31) )
                {
                  SendDwmIconChange(v31);
                  v28 = (void *)ReferenceDwmApiPort(v27, v26);
                  DwmAsyncTextChange(v28);
                }
              }
              v1 = v29;
              v2 = v35;
            }
            else
            {
              v25 = (void *)ReferenceDwmApiPort(v6, v5);
              DwmAsyncChildDestroy(v25, *(_QWORD *)v4);
            }
          }
          a1 = v33;
        }
        v3 = v34;
      }
      v1 += 32LL;
      v3 += 3;
      v29 = v1;
      v34 = v3;
    }
    while ( v1 <= v2 );
  }
}
