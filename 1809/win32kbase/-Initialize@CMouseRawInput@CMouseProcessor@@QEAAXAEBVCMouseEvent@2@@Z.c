/*
 * XREFs of ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00304DC
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::CMouseRawInput::Initialize(
        CMouseProcessor::CMouseRawInput *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int v2; // r9d
  int v4; // ecx
  unsigned __int64 v5; // [rsp+0h] [rbp-18h]

  v2 = 0;
  *((_BYTE *)this + 60) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  LODWORD(v5) = 0;
  *(_OWORD *)((char *)this + 40) = v5;
  v4 = *(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x10;
  *((_BYTE *)this + 61) = v4 != 0;
  if ( !v4 )
  {
    *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
    *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)*(_QWORD *)a2;
    *((_DWORD *)this + 3) = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    *((_DWORD *)this + 4) = *(_DWORD *)(*(_QWORD *)a2 + 44LL);
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 5) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
    *((_WORD *)this + 2) = *(_WORD *)(*(_QWORD *)a2 + 16LL);
    *((_WORD *)this + 3) = *(_WORD *)(*(_QWORD *)a2 + 18LL);
    *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)a2 + 20LL);
    *(_WORD *)this = *((_WORD *)this + 31) & *(_WORD *)(*(_QWORD *)a2 + 24LL);
    if ( *((_DWORD *)this + 10) )
    {
      *((_DWORD *)this + 14) = 1;
      v2 = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x20) != 0 )
      *((_DWORD *)this + 14) = v2 | 2;
  }
}
