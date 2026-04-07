/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x1800916B4
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800943F0 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CTouchContact,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  _OWORD *v6; // rcx
  int v7; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x70u, 1, a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + 112 * v2);
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      v6[3] = a2[3];
      v6[4] = a2[4];
      v6[5] = a2[5];
      v6[6] = a2[6];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xB5u);
  }
  return v5;
}
