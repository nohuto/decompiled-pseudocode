/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18003EA10
 * Callers:
 *     ?Wait@COperationWaiter@@QEAAJXZ @ 0x18003D88C (-Wait@COperationWaiter@@QEAAJXZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18003E390 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1801F9F68 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1801FA0C0 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180204B3C (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        ULONG a3,
        DWORD a4,
        APTTYPE pAptType,
        APTTYPEQUALIFIER pAptQualifier)
{
  _BOOL8 v9; // r12
  DWORD v10; // ebx
  DWORD TickCount; // r14d
  DWORD v12; // ecx
  DWORD v13; // eax
  DWORD v14; // eax
  DWORD v15; // eax
  HRESULT v17; // eax
  HCURSOR CursorW; // rax
  DWORD v19; // eax
  tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+48h] BYREF

  v9 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA
    && pAptType == APTTYPE_STA;
  v10 = a4;
  TickCount = GetTickCount();
  if ( !a2 && a4 == -1 )
    return 0xFFFFFFFFLL;
  do
  {
    do
    {
      if ( v9 )
      {
        v17 = CoWaitForMultipleHandles(0x18u, v10, a3, a2, &dwindex);
        if ( v17 == -2147417835 )
        {
          v12 = 258;
          dwindex = 258;
        }
        else if ( v17 >= 0 )
        {
          v12 = dwindex;
        }
        else
        {
          v12 = -1;
          dwindex = -1;
        }
      }
      else
      {
        v12 = MsgWaitForMultipleObjectsEx(a3, a2, v10, 0x1CFFu, 0);
        dwindex = v12;
      }
      v10 = 0;
      if ( a4 == -1 )
      {
        v10 = -1;
      }
      else
      {
        v13 = GetTickCount() - TickCount;
        if ( v13 > a4 )
        {
          v12 = 258;
          dwindex = 258;
        }
        else
        {
          v12 = dwindex;
          v10 = a4 - v13;
        }
      }
      if ( v12 != a3 )
        break;
      while ( 1 )
      {
        if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
        {
          v12 = dwindex;
          goto LABEL_21;
        }
        if ( Msg.message == 18 )
          break;
        TranslateMessage(&Msg);
        if ( Msg.message != 32 || LOWORD(Msg.lParam) == 0xFFFE )
        {
          DispatchMessageW(&Msg);
        }
        else
        {
          CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F02);
          SetCursor(CursorW);
        }
        if ( a3 )
        {
          v14 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
          v12 = v14;
          if ( v14 != 258 )
          {
            dwindex = v14;
            goto LABEL_21;
          }
        }
        v10 = 0;
        if ( a4 == -1 )
        {
          v10 = -1;
        }
        else
        {
          v15 = GetTickCount() - TickCount;
          if ( v15 > a4 )
            goto LABEL_41;
          v10 = a4 - v15;
        }
      }
      PostQuitMessage(Msg.wParam);
LABEL_41:
      v12 = 258;
      dwindex = 258;
LABEL_21:
      ;
    }
    while ( v12 == a3 );
  }
  while ( v12 == 192 );
  if ( v12 == 258 && a3 )
  {
    v19 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
    v12 = dwindex;
    if ( v19 != 258 )
      return v19;
  }
  return v12;
}
