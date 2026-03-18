/*
 * XREFs of ?UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00168D4
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0016760 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlipExBuffer::UpdateIndependentFlipState(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  int v2; // eax
  char v3; // bl
  int v7; // ebp

  v2 = *((_DWORD *)this + 88);
  v3 = 0;
  if ( v2 == 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 152LL))(a2) )
    {
      *((_DWORD *)this + 88) = -1;
    }
    else
    {
      if ( !*((_BYTE *)a2 + 557) || *((_QWORD *)a2 + 71) != *((_QWORD *)this + 60) )
        return v3;
      *((_DWORD *)this + 88) = 2;
    }
    return 1;
  }
  if ( v2 == -1 )
    return 1;
  if ( v2 > 2 )
  {
    v7 = 4;
    if ( v2 <= 4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        v3 = *((_BYTE *)this + 569);
      }
      else
      {
        v3 = 1;
        v7 = -1;
      }
      *((_DWORD *)this + 88) = v7;
    }
  }
  return v3;
}
