/*
 * XREFs of ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180054580
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800556C8 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180056B1C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800A18A0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B7B10 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::RenderDataUpdate(CChannel *this, unsigned int a2, struct IRenderDataBuilder *a3)
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
  CChannel::CheckHandle(this, a2, 142LL);
  v11[0] = 414;
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
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x4B5u, 0LL);
  }
  else
  {
    if ( v12 )
    {
      if ( *((_DWORD *)a3 + 2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr, v12);
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), *((const void **)a3 + 2), v12);
    }
    CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return v9;
}
