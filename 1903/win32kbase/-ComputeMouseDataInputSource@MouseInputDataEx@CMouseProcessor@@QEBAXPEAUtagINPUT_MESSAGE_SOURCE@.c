/*
 * XREFs of ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C003201C
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C00319DC (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(
        CMouseProcessor::MouseInputDataEx *this,
        struct tagINPUT_MESSAGE_SOURCE *a2,
        __int64 a3)
{
  __int16 v5; // ax
  __int64 v6; // r8

  if ( *((_DWORD *)this + 22) == 1 || *((_DWORD *)this + 22) == 2 )
  {
    *(_DWORD *)a2 = 2;
    goto LABEL_5;
  }
  if ( (unsigned int)(*((_DWORD *)this + 22) - 3) <= 1 )
  {
    *(_DWORD *)a2 = 0;
LABEL_5:
    *((_DWORD *)a2 + 1) = 4;
    return;
  }
  v5 = *((_WORD *)this + 1);
  if ( (v5 & 0x10) != 0 )
  {
    *(_DWORD *)a2 = 4;
  }
  else if ( (v5 & 0x40) != 0 )
  {
    *(_DWORD *)a2 = 8;
  }
  else if ( (v5 & 0x80u) != 0 )
  {
    *(_DWORD *)a2 = 18;
  }
  else
  {
    *(_DWORD *)a2 = (v5 & 0x100 | 0x10u) >> 3;
  }
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 64LL, a3) )
    *((_DWORD *)a2 + 1) = 1;
  else
    *((_DWORD *)a2 + 1) = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 16LL, v6) ? 2 : 0;
}
