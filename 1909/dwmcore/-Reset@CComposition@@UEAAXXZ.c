/*
 * XREFs of ?Reset@CComposition@@UEAAXXZ @ 0x1800D88D0
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x1801753B4 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800D4D7C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx @ 0x180176738 (McTemplateU0qqx.c)
 */

void __fastcall CComposition::Reset(CComposition *this, int a2, __int64 a3)
{
  unsigned int i; // esi
  __int64 v5; // rbx
  int v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+34h] [rbp-24h]
  __int64 v8; // [rsp+3Ch] [rbp-1Ch]
  __int64 v9; // [rsp+44h] [rbp-14h]

  for ( i = 0; i < *((_DWORD *)this + 122); *(_QWORD *)(v5 + 8) = 0LL )
  {
    v5 = *((_QWORD *)this + 58) + 16LL * i;
    if ( (unsigned int)(*(_DWORD *)(v5 + 4) - 1) <= 1 )
    {
      v6 = 8;
      v7 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      HIDWORD(v7) = *(_DWORD *)v5;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v6, a3);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx((_DWORD)this, a2, *(_DWORD *)(v5 + 4), *(_DWORD *)v5, *(_QWORD *)(v5 + 8));
    *(_DWORD *)(v5 + 4) = 0;
    ++i;
  }
  *((_DWORD *)this + 122) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 464, 0x10u);
}
