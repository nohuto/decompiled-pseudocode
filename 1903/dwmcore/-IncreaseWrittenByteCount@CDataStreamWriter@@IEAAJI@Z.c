/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18003F510
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180042E7C (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  __int64 v2; // r9
  int v3; // r11d
  int v4; // eax
  unsigned int v6; // r10d
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // eax

  v2 = *((_QWORD *)this + 4);
  v3 = -1;
  v4 = -1;
  v6 = *(_DWORD *)(v2 + 20);
  v7 = v6 + a2;
  if ( v6 + a2 >= v6 )
    v4 = v6 + a2;
  v8 = v7 < v6 ? 0x80070216 : 0;
  *(_DWORD *)(v2 + 20) = v4;
  if ( v7 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v8, 0x232u, 0LL);
  }
  else
  {
    v9 = *((_DWORD *)this + 11);
    v10 = v9 + a2;
    if ( v9 + a2 >= v9 )
      v3 = v9 + a2;
    v8 = v10 < v9 ? 0x80070216 : 0;
    *((_DWORD *)this + 11) = v3;
    if ( v10 < v9 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x233u, 0LL);
  }
  return v8;
}
