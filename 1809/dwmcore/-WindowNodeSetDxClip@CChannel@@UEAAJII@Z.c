/*
 * XREFs of ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x18009A730
 * Callers:
 *     <none>
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetDxClip(CDataStreamWriter **this, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v11[0] = 449;
  v11[1] = a2;
  v11[2] = a3;
  v7 = CChannel::BeginCommand((CChannel *)this, v11, 0xCu, 0);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x78u);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
