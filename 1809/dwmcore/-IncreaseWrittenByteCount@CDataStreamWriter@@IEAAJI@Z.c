/*
 * XREFs of ?IncreaseWrittenByteCount@CDataStreamWriter@@IEAAJI@Z @ 0x18009BC84
 * Callers:
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18009BBE8 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::IncreaseWrittenByteCount(CDataStreamWriter *this, int a2)
{
  unsigned int *v4; // rbx
  unsigned int *v5; // rax
  int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // eax

  v4 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
  v5 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
  v6 = -1;
  v7 = -1;
  v8 = *v5;
  v9 = *v5 + a2;
  if ( v9 >= *v5 )
    v7 = *v5 + a2;
  v10 = v9 < v8 ? 0x80070216 : 0;
  *v4 = v7;
  if ( v9 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v10, 0x212u);
  }
  else
  {
    v11 = *((_DWORD *)this + 7);
    v12 = v11 + a2;
    if ( v11 + a2 >= v11 )
      v6 = v11 + a2;
    v10 = v12 < v11 ? 0x80070216 : 0;
    *((_DWORD *)this + 7) = v6;
    if ( v12 < v11 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x213u);
  }
  return v10;
}
