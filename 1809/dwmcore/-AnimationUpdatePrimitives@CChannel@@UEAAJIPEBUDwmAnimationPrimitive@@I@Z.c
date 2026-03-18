/*
 * XREFs of ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::AnimationUpdatePrimitives(
        CChannel *this,
        int a2,
        const struct DwmAnimationPrimitive *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF
  char *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v14[0] = 2;
  v14[2] = a4;
  v8 = 32LL * a4;
  v9 = -1;
  v14[1] = a2;
  if ( v8 <= 0xFFFFFFFF )
    v9 = v8;
  v10 = v8 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v8 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, v10, 0x8C0u);
  }
  else
  {
    v11 = CChannel::BeginCommand(this, v14, 0xCu, v9);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x8C1u);
    }
    else
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 20), a3, v9);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 20));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v10;
}
