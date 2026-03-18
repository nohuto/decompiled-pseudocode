/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D9874
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00D94B4 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncTextChange @ 0x1C0020340 (DwmAsyncTextChange.c)
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0025920 (IsMessageParentWindow.c)
 *     SendDwmIconChange @ 0x1C00483E8 (SendDwmIconChange.c)
 *     DwmChildRectChange @ 0x1C0092168 (DwmChildRectChange.c)
 *     IsMotherDesktopWindow @ 0x1C0095A60 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C0095A88 (DwmAsyncChildDestroy.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     DwmAsyncChildCreate @ 0x1C00D9AC8 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int ProcessId; // eax
  __int64 v14; // rdi
  int v15; // r13d
  int v16; // r14d
  int v17; // r15d
  __int64 v18; // rbp
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  void *v32; // rax
  unsigned __int64 v33; // [rsp+60h] [rbp-98h]
  struct _KPROCESS *v34; // [rsp+70h] [rbp-88h]
  __int64 *v35; // [rsp+78h] [rbp-80h]
  __int64 v36[15]; // [rsp+80h] [rbp-78h] BYREF
  const struct tagDESKTOP *v37; // [rsp+100h] [rbp+8h]
  __int64 *v38; // [rsp+110h] [rbp+18h]
  unsigned __int64 v39; // [rsp+118h] [rbp+20h]

  v37 = a1;
  v1 = gSharedInfo[1];
  v33 = v1;
  v39 = v1 + 32LL * giheLast;
  v38 = (__int64 *)gpKernelHandleTable;
  v2 = v39;
  if ( v1 <= v39 )
  {
    v3 = (__int64 *)gpKernelHandleTable;
    do
    {
      if ( *(_BYTE *)(v1 + 24) == 1 )
      {
        v4 = *v3;
        v35 = (__int64 *)v4;
        if ( *(const struct tagDESKTOP **)(v4 + 24) == a1 )
        {
          if ( !(unsigned int)IsMotherDesktopWindow(v4) )
          {
            if ( (_DWORD)v7 )
            {
              LOBYTE(v8) = IsDesktopWindow(v6);
              if ( !v8 )
              {
                LOBYTE(v10) = IsMessageParentWindow(v9);
                if ( v10 )
                  GetDesktopWindow(v11);
              }
              memset(v36, 0, 0x28uLL);
              GetWindowCompositionInfo(v4, (__int64)v36, v12);
              v34 = *(struct _KPROCESS **)(**(_QWORD **)(v4 + 16) + 544LL);
              ProcessId = (unsigned int)PsGetProcessId(v34);
              v14 = *(_QWORD *)(v4 + 40);
              v15 = ProcessId;
              v16 = *(_DWORD *)(v14 + 232);
              v17 = *(_DWORD *)(v14 + 24);
              v18 = ***(_QWORD ***)(*(_QWORD *)(v4 + 24) + 8LL);
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v34);
              ClassStyle = DwmGetClassStyle(v4);
              v24 = (void *)ReferenceDwmApiPort(v22, v21, v23);
              DwmAsyncChildCreate(v24, v17, v16, ClassStyle, (__int64)v36, v18, v14 + 88, v15, ProcessSequenceNumber);
              DwmChildRectChange((unsigned __int64)v35, v25, v26, v27);
              if ( (*(_BYTE *)(v35[5] + 26) & 8) != 0 )
              {
                if ( (unsigned int)IsTopLevelWindow((__int64)v35) )
                {
                  SendDwmIconChange((ULONG_PTR)v35);
                  v32 = (void *)ReferenceDwmApiPort(v30, v29, v31);
                  DwmAsyncTextChange(v32, *v35);
                }
              }
              v1 = v33;
              v2 = v39;
            }
            else
            {
              v28 = (void *)ReferenceDwmApiPort(v6, v5, v7);
              DwmAsyncChildDestroy(v28, *(_QWORD *)v4);
            }
          }
          a1 = v37;
        }
        v3 = v38;
      }
      v1 += 32LL;
      v3 += 3;
      v33 = v1;
      v38 = v3;
    }
    while ( v1 <= v2 );
  }
}
