/*
 * XREFs of ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C000C200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxRequestContext::StoreAndReferenceMemory(FxRequestContext *this, FxRequestBuffer *Buffer)
{
  IFxMemory *Memory; // rax
  __int64 v5; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    v5 = 130LL;
LABEL_6:
    Buffer->u.Memory.Memory->AddRef(
      Buffer->u.Memory.Memory,
      this,
      v5,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    Memory = Buffer->u.Memory.Memory;
    goto LABEL_4;
  }
  if ( Buffer->DataType == FxRequestBufferReferencedMdl )
  {
    v5 = 135LL;
    goto LABEL_6;
  }
  Memory = 0LL;
LABEL_4:
  this->m_RequestMemory = Memory;
}
