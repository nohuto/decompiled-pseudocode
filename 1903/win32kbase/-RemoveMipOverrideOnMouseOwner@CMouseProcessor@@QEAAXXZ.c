/*
 * XREFs of ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0192FEC
 * Callers:
 *     CancelCapturedMipOverride @ 0x1C0183EA0 (CancelCapturedMipOverride.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0039158 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0039248 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     IsMouseInPointerActive @ 0x1C0176C74 (IsMouseInPointerActive.c)
 */

void __fastcall CMouseProcessor::RemoveMipOverrideOnMouseOwner(CMouseProcessor *this, __int64 a2, __int64 a3)
{
  CInputDest *v3; // rbx
  __int64 PtiFromInputDest; // rax
  __int64 Queue; // rax

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 860, 1, 1) )
  {
    v3 = (CMouseProcessor *)((char *)this + 3312);
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)this + 3312, 2LL, a3);
    if ( PtiFromInputDest )
    {
      if ( IsMouseInPointerActive(PtiFromInputDest) )
      {
        Queue = CInputDest::GetQueue(v3, 0LL);
        if ( Queue )
          *(_QWORD *)(Queue + 448) = 0LL;
      }
    }
  }
}
