/*
 * XREFs of ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801462A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::Geometry2DGroupUpdate(
        struct CCommandBatch **this,
        int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  int v9; // r9d
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD v14[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v14[0] = 482;
  v15 = 0;
  v14[1] = a2;
  v8 = 4LL * a4;
  v9 = -1;
  if ( v8 <= 0xFFFFFFFF )
    v9 = 4 * a4;
  v15 = v9;
  v10 = v8 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v8 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, v10, 0xA48u);
  }
  else
  {
    v11 = CChannel::BeginCommand(this, v14, 0xCu, v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA49u);
    }
    else
    {
      CDataStreamWriter::AddItemData(this[20], a3, v15);
      CDataStreamWriter::EndItem(this[20]);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v10;
}
