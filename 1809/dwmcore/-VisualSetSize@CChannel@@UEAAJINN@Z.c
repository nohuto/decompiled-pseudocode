/*
 * XREFs of ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x18009A100
 * Callers:
 *     <none>
 * Callees:
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::VisualSetSize(CDataStreamWriter **this, int a2, double a3, double a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-40h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v11[0] = 430;
  *(double *)v12 = a3;
  *(double *)&v12[1] = a4;
  v11[1] = a2;
  v7 = CChannel::BeginCommand((CChannel *)this, v11, 0x18u, 0);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x78u);
  else
    CDataStreamWriter::EndItem(this[20]);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v9;
}
