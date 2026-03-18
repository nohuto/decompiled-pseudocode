/*
 * XREFs of ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x1800D7050
 * Callers:
 *     ?Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800D6EC0 (-Init@CSharedDirect3DResources@CDrawListEntryBatch@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800D7080 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 */

__int64 __fastcall CD3DDynamicAppendBuffer::Initialize(
        CD3DDynamicAppendBuffer *this,
        struct CD3DDeviceLevel1 *a2,
        unsigned int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  *(_QWORD *)this = a2;
  v3 = CD3DDynamicAppendBuffer::EnsureByteSpace(this, a3, 1);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x18u);
  return v5;
}
