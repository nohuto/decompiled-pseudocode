/*
 * XREFs of ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180099EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::RgnGeometryUpdate(
        CDataStreamWriter **this,
        int a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  unsigned __int64 v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  _DWORD v15[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v15[0] = 492;
  v16 = 0;
  v15[1] = a2;
  v9 = 16LL * a4;
  v10 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v10 = 16 * a4;
  v16 = v10;
  v11 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v11, 0xB27u);
  }
  else
  {
    v12 = CChannel::BeginCommand((CChannel *)this, v15, 0xCu, v10);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB28u);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v16);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v11;
}
