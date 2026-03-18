/*
 * XREFs of ?Reset@CComposition@@UEAAXXZ @ 0x1800D82C0
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002841C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx @ 0x180177EA8 (McTemplateU0qqx.c)
 */

void __fastcall CComposition::Reset(CComposition *this, int a2)
{
  unsigned int i; // esi
  __int64 v4; // rbx
  int v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+34h] [rbp-24h]
  __int64 v7; // [rsp+3Ch] [rbp-1Ch]
  __int64 v8; // [rsp+44h] [rbp-14h]

  for ( i = 0; i < *((_DWORD *)this + 122); *(_QWORD *)(v4 + 8) = 0LL )
  {
    v4 = *((_QWORD *)this + 58) + 16LL * i;
    if ( (unsigned int)(*(_DWORD *)(v4 + 4) - 1) <= 1 )
    {
      v5 = 8;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      HIDWORD(v6) = *(_DWORD *)v4;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v5);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx((_DWORD)this, a2, *(_DWORD *)(v4 + 4), *(_DWORD *)v4, *(_QWORD *)(v4 + 8));
    *(_DWORD *)(v4 + 4) = 0;
    ++i;
  }
  *((_DWORD *)this + 122) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 464, 0x10u);
}
