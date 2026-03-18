/*
 * XREFs of ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180099980
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800584C0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180099C40 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18009AD64 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSourceModifications(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  unsigned int v11; // ecx
  struct CCommandBatch **v12; // rbp
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  _DWORD v20[10]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v20[2] = a3;
  v12 = (struct CCommandBatch **)(a1 + 160);
  v13 = 0;
  v20[4] = a5;
  v20[0] = 454;
  v20[5] = a6;
  v20[1] = a2;
  v20[3] = a4;
  if ( !*v12 )
  {
    v18 = CCommandBatch::Create(v11, v12);
    v13 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v18, 0x11Au);
  }
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v13, 0xFFu);
  }
  else
  {
    v14 = CDataStreamWriter::EnsureItem(*v12, 0x18u);
    v13 = v14;
    if ( v14 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v12);
      CDataStreamWriter::AddItemData(*v12, v20, 0x18u);
      goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x104u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v13, 0x9Au);
LABEL_5:
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v13, 0x78u);
  else
    CDataStreamWriter::EndItem(*v12);
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v13;
}
