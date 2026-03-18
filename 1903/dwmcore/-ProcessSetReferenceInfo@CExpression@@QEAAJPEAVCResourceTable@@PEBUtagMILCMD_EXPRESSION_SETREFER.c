/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x1800C48E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _QWORD *a4)
{
  __int64 v6; // rcx
  unsigned __int64 v8; // r10
  SIZE_T v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx

  v6 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v6
    && (v8 = *((unsigned int *)a3 + 3), (_DWORD)v8)
    && (int)v6 + *((_DWORD *)this + 104) <= (unsigned int)v8 )
  {
    if ( !*((_QWORD *)this + 51) )
    {
      v9 = 24LL * *((unsigned int *)a3 + 3);
      if ( !is_mul_ok(v8, 0x18uLL) )
        v9 = -1LL;
      *((_QWORD *)this + 51) = operator new(v9);
      LODWORD(v6) = *((_DWORD *)a3 + 2);
    }
    v10 = 0LL;
    if ( (_DWORD)v6 )
    {
      do
      {
        v10 = (unsigned int)(v10 + 1);
        v11 = *(_OWORD *)a4;
        a4 += 3;
        v12 = 3LL * *((unsigned int *)this + 104);
        v13 = *((_QWORD *)this + 51);
        *(_OWORD *)(v13 + 8 * v12) = v11;
        *(_QWORD *)(v13 + 8 * v12 + 16) = *(a4 - 1);
        ++*((_DWORD *)this + 104);
      }
      while ( (unsigned int)v10 < *((_DWORD *)a3 + 2) );
    }
    if ( ((*((_BYTE *)this + 208) & 2) != 0 || *((_QWORD *)this + 53))
      && (v14 = (*(__int64 (__fastcall **)(CExpression *, __int64))(*(_QWORD *)this + 232LL))(this, v10),
          v16 = v14,
          v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xADu, 0LL);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x88980403, 0x91u, 0LL);
  }
  return v16;
}
