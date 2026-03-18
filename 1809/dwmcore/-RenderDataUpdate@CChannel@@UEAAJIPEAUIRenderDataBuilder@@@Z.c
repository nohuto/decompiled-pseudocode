/*
 * XREFs of ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180099130
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::RenderDataUpdate(CChannel *this, int a2, struct IRenderDataBuilder *a3)
{
  unsigned int v6; // r9d
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-10h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  char *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11[0] = 359;
  v12 = 0;
  v11[1] = a2;
  if ( a3 )
    v6 = *((_DWORD *)a3 + 10);
  else
    v6 = 0;
  v12 = v6;
  v7 = CChannel::BeginCommand(this, v11, 0xCu, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x488u);
  }
  else
  {
    if ( v12 )
    {
      if ( *((_DWORD *)a3 + 2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), *((const void **)a3 + 2), v12);
    }
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v9;
}
