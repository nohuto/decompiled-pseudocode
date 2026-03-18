/*
 * XREFs of ?StoreAndReferenceMemory@FxInternalIoctlOthersContext@@EEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0015B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxInternalIoctlOthersContext::StoreAndReferenceMemory(
        FxInternalIoctlOthersContext *this,
        FxRequestBuffer *Buffer)
{
  __int64 v4; // r8
  IFxMemory *Memory; // rax

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v4 = 130LL;
  }
  else
  {
    if ( Buffer->DataType != FxRequestBufferReferencedMdl )
    {
      Memory = 0LL;
      goto LABEL_4;
    }
    v4 = 135LL;
  }
  Buffer->u.Memory.Memory->AddRef(
    Buffer->u.Memory.Memory,
    this,
    v4,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  Memory = Buffer->u.Memory.Memory;
LABEL_4:
  this->m_RequestMemory = Memory;
}
