/*
 * XREFs of ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0031DB0
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C00319DC (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C0094B60 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 */

int __fastcall CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(__int64 a1)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax

  v2 = *(_DWORD *)(a1 + 88) == 0 ? 0x20 : 0;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 4096LL) )
    v2 |= 2u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 128LL) )
    v2 |= 8u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 32LL) )
    v2 |= 1u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 2048LL) )
    v2 |= 0x40u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x4000LL) )
    v2 |= 0x100u;
  v3 = v2 | 4;
  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    v3 = v2;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 1024LL) )
    v3 |= 0x400u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 16LL) )
    v3 |= 0x80u;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a1, 0x8000LL) )
    v3 |= 0x200u;
  if ( *(_DWORD *)(a1 + 88)
    || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a1, 4LL)
    || (unsigned int)IsEditionPostRawMouseInputMessageSupported() == -1073741637 )
  {
    v3 |= 0x10u;
  }
  result = v3 | 0x800;
  if ( *(_DWORD *)(a1 + 88) != 4 )
    return v3;
  return result;
}
