/*
 * XREFs of ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18009A614
 * Callers:
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18009A5B0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x18009A708 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801E8CEC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CHandleTable::ReleaseOnChannel(CHandleTable *this, CDataStreamWriter **a2, unsigned int a3)
{
  int v6; // edi
  _DWORD *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v13; // ecx
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( (unsigned int)HANDLE_TABLE::ValidEntry(this, a3) )
    v7 = (_DWORD *)(*((_QWORD *)this + 3) + a3 * *((_DWORD *)this + 2));
  else
    v7 = 0LL;
  if ( !v7 || (v8 = v7[1]) == 0 )
  {
    v6 = -2147418113;
    MilUnexpectedError(-2147418113, L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147418113, 0x163u);
    goto LABEL_12;
  }
  if ( *v7 )
  {
    if ( v8 == 1 )
    {
      v14[2] = *v7;
      v14[0] = 50;
      v14[1] = a3;
      v9 = CChannel::BeginCommand((CChannel *)a2, v14, 0xCu, 0);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x78u);
      else
        CDataStreamWriter::EndItem(a2[20]);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x175u);
        goto LABEL_12;
      }
      v7[2] = *((_DWORD *)a2 + 3);
      *((_DWORD *)a2 + 3) = a3;
      v8 = v7[1];
    }
    v7[1] = v8 - 1;
  }
LABEL_12:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v6;
}
