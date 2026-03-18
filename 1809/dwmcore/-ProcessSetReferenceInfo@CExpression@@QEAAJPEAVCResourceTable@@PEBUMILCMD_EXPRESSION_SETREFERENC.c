/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x1800BCADC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _QWORD *a4)
{
  unsigned int v6; // ecx
  unsigned __int64 v8; // r10
  SIZE_T v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx

  v6 = *((_DWORD *)a3 + 2);
  if ( v6 && (v8 = *((unsigned int *)a3 + 3), (_DWORD)v8) && v6 + *((_DWORD *)this + 98) <= (unsigned int)v8 )
  {
    if ( !*((_QWORD *)this + 48) )
    {
      v9 = 24LL * *((unsigned int *)a3 + 3);
      if ( !is_mul_ok(v8, 0x18uLL) )
        v9 = -1LL;
      *((_QWORD *)this + 48) = operator new(v9);
      v6 = *((_DWORD *)a3 + 2);
    }
    v10 = 0LL;
    if ( v6 )
    {
      do
      {
        v10 = (unsigned int)(v10 + 1);
        v11 = *(_OWORD *)a4;
        a4 += 3;
        v12 = 3LL * *((unsigned int *)this + 98);
        v13 = *((_QWORD *)this + 48);
        *(_OWORD *)(v13 + 8 * v12) = v11;
        *(_QWORD *)(v13 + 8 * v12 + 16) = *(a4 - 1);
        ++*((_DWORD *)this + 98);
      }
      while ( (unsigned int)v10 < *((_DWORD *)a3 + 2) );
    }
    if ( ((*((_BYTE *)this + 208) & 2) != 0 || *((_QWORD *)this + 50))
      && (v14 = (*(__int64 (__fastcall **)(CExpression *, __int64))(*(_QWORD *)this + 200LL))(this, v10),
          v16 = v14,
          v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB1u);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v16 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x95u);
  }
  return v16;
}
